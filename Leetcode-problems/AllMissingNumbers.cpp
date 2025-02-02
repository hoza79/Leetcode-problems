#include <vector>
class AllMissingNumbers{
public:
    std::vector <int> find_all_missing_numbers(std::vector <int>& nums, int n){
        std::vector <int> missing_numbers;
        std::vector <bool> seen (n + 1, false);
        for(int num : nums){
            seen[num] = true;
        }
        for(int i = 0; i <= n; i++){
            if(seen[i] == false){
                missing_numbers.push_back(i);
            }
        }
        return missing_numbers;
    }
};
