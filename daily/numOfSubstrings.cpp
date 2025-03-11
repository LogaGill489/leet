#include <iostream>
#include <cstring>
using namespace std;

class Solution {
    public:
        int recursNum(string s, int start, int end, int tot) {
            if (s.length() - start < 3) return tot; //reached end of array
            if (s.length() > end) { //still within array bounds
                bool check[3] = {false, false, false};
                for (int i = start; i < end + 1; i++) {
                    switch (s[i]) {
                        case 'a':
                            check[0] = true;
                            break;
                        case 'b':
                            check[1] = true;
                            break;
                        case 'c':
                            check[2] = true;
                            break;
                    }
                    if (check[0] && check[1] && check[2]) {
                        tot++;
                        break;
                    }
                }
                return recursNum(s, start, ++end, tot);
            }
            return recursNum(s, ++start, start + 2, tot); //restart loop at next point
        }
        int numberOfSubstrings(string s) {
            return recursNum(s, 0, 2, 0);
        }
    };

int main() {
    Solution sol;
    string s = "abcabc";
    cout << sol.numberOfSubstrings(s) << endl;
    return 0;
}