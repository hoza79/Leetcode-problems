#include <vector>
#include <unordered_set>

class DuplicateNumbersInAnArray{
public:
    bool find_duplicates(std::vector <int> nums){
      std::unordered_set<int> seen;
      for(int i = 0; i < nums.size(); i++){
        if(seen.find(nums[i]) != seen.end()){
          return true;
        }
        seen.insert(nums[i]);
      }
      return false;
    }
};
