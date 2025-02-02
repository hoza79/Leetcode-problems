#include <vector>
class MissingNumber{
public:
    int find_missing_number(std::vector <int> nums, int n){
        int sum_up_to_n = (n * (n + 1)) / 2;
        int actual_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            actual_sum += nums[i];
        }
        return sum_up_to_n - actual_sum;
    }
};
