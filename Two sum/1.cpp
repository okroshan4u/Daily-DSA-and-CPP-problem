#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store: Key = number, Value = its index
        std::unordered_map<int, int> num_map;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // If the complement exists in the map, we found the pair
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }
            
            // Otherwise, store the current number and its index
            num_map[nums[i]] = i;
        }
        
        // Return empty vector if no solution is found (per constraints, this won't be reached)
        return {};
    }
};
