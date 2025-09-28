#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = n - 3; i >= 0; i--) {
            if(nums[i] + nums[i+1] > nums[i+2]) {
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return 0;
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int result = sol.largestPerimeter(nums);
    cout << "Largest Perimeter: " << result << endl;

    return 0;
}
