#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] == nums[i + 1]) {
                    nums[i] *= 2;
                    nums[i + 1] = 0;
                }
            }
            unsigned int count = 0;
            for (int num : nums) if (num != 0) nums[count++] = num;
            for (count; count < nums.size(); count++) nums[count] = 0;
            return nums;
        }
    };

int main() {
    vector<int> nums = {2, 2, 0, 4, 0, 8};
    Solution sol;
    vector<int> result = sol.applyOperations(nums);
    for (int num : result) cout << num << " ";
    return 0;
}