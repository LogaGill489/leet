#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class slidingWindow {
    public:
        int numberOfSubstrings(string s) {
            vector<int> count(3, 0);
            int left = 0, right = 0, total = 0;
            int n = s.length();
    
            while (right < n) {
                count[s[right] - 'a']++;
                while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                    total += n - right;
                    count[s[left] - 'a']--;
                    left++;
                }
                right++;
            }
    
            return total;
        }
    };

//This solution uses recursion to solve, however exceeds the memory usage limit on leetcode
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
    slidingWindow slidingWindow;
    string s = "abcabc";
    cout << sol.numberOfSubstrings(s) << endl;
    cout << slidingWindow.numberOfSubstrings(s) << endl;
    return 0;
}