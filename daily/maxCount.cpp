#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int neg = 0, pos = 0;
            for (int n : nums) {
                if (n < 0) neg++;
                else if (n > 0) pos++;
            }
            return max(neg, pos);
        }
    };

int main() {
    Solution sol;
    vector<int> nums = {1, -2, -3, 4};
    cout << sol.maximumCount(nums) << endl;
    return 0;
}