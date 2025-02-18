#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m + i + 1; j++) {
                    if (nums2[i] <= nums1[j]) {
                        for (int k = m + i; k > j; k--) nums1[k] = nums1[k - 1];
                        nums1[j] = nums2[i];
                        break;
                    }
                    if (j >= m + i - 1) nums1[m + i] = nums2[i];
                }
            }
        }
    };

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    return 0;
}