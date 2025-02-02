#include <vector>
#include <algorithm>
class NumbersSmallerThanTheCurrentNumber{
public: 
    std::vector <int> find_smaller_numbers(std::vector <int>& nums){
        std::vector <int> sorted = nums;
        std::vector <int> result;
        std::sort(sorted.begin(), sorted.end());
        for(int num : nums){
            auto it = std::lower_bound(sorted.begin(), sorted.end(), num);
            int count = static_cast<int>(std::distance(sorted.begin(), it));
            result.push_back(count);
        }
        return result; ;
    }
};
