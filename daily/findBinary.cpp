#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

class Solution {
    public:
        string findString(unsigned int bin, vector<string>& nums) {
            for (string& val : nums) {
                if (stoi(val, nullptr, 2) == bin) {
                    return findString(++bin, nums);
                }
            }
            return bitset<32>(bin).to_string().substr(32 - nums.size());
        }
    
        string findDifferentBinaryString(vector<string>& nums) {
            return findString(0, nums);
        }
    };

    int main() {
        Solution sol;
        vector<string> nums = {"01", "10"};
        cout << sol.findDifferentBinaryString(nums) << endl;
        return 0;
    }