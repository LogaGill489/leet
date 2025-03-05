#include <iostream>
using namespace std;

class Solution {
    public:
        bool checkPowersOfThree(int n) {
            //checks if the input 'n' can be written as a combination of 3^i for any combo of i
            while (n > 0) {
                if (n % 3 == 2) return false;
                n /= 3;
            }
            return true;
        }
    };

int main() {
    int n = 21;
    Solution sol;
    cout << sol.checkPowersOfThree(n) << endl;
    return 0;
}