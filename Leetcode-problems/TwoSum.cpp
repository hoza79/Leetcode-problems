#include <vector>
#include <unordered_map>

class twoSum {
public:
    std::vector<int> find_two_sum(std::vector <int> nums, int target){
        std::unordered_map <int, int> map;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(map.find(complement) != map.end()){
                return {map[complement], i};
            }
            map.insert({nums[i], i});
        }
        return {};
    }
};
