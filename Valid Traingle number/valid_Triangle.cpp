#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = n - 1; i >= 2; i--) {
            int lo = 0, hi = i - 1;
            while (lo < hi) {
                if (nums[lo] + nums[hi] > nums[i]) {
                    ans += (hi - lo);
                    hi--;
                } else {
                    lo++;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    
    // Sample input
    vector<int> nums = {2, 2, 3, 4};
    
    // Call the function
    int result = solution.triangleNumber(nums);
    
    // Output the result
    cout << "Number of valid triangles: " << result << endl;
    
    return 0;
}
