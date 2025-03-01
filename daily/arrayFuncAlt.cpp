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
            int foo = 0;
            for (int i = 0; i < nums.size() - foo; i++) {
                if (nums[i] == 0) {
                    for (int j = i; j < nums.size() - 1; j++) nums[j] = nums[j + 1];
                    nums[nums.size() - 1] = 0;
                    i--;
                    foo++;
                }
            }
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