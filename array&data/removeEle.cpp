#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            unsigned int dow = 1;
            for (int i = 0; i < nums.size() - dow + 1; i++) {
                if (nums[i] == val) {
                    for (int j = i; j < nums.size() - dow; j++) nums[j] = nums[j+1];
                    nums[nums.size() - dow++] = '\0';
                    i--;
                }
            }
            return nums.size() - dow + 1;
        }
    };

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    Solution sol;
    cout << sol.removeElement(nums, val) << endl;
    return 0;
}