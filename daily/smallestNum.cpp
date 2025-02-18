#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Solution {
    public:
        void reverse(vector<int>& x, int i, int j) {
                if (i < j) {
                    int tmp = x[i];
                    x[i] = x[j];
                    x[j] = tmp;
                    reverse(x, ++i, --j);
                }
        }
        string smallestNumber(string pattern) {
            vector<int> arr(pattern.length() + 1);
            for (int i = 0; i <= pattern.length(); i++) arr[i] = i + 1;
            for (int i = 0; i < pattern.length(); i++) {
                if (pattern[i] == 'D') {
                    int r = i;
                    while (r < pattern.length() && pattern[r] == 'D') r++;
                    reverse(arr, i, r);
                    i = r;
                }
            }
            string rtnStr = "";
            for (int i = 0; i <= pattern.length(); i++) rtnStr += to_string(arr[i]);
            return (rtnStr);
        }
    };

int main() {
    string pattern = "IIIDIDDD";
    Solution sol;
    cout << sol.smallestNumber(pattern) << endl;
    return 0;
}