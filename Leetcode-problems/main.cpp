#include <iostream>
#include "DuplicateNumbersInAnArray.cpp"
#include "PrimeNumbersUpToN.cpp"
#include "TwoSum.cpp"
#include "MissingNumber.cpp"
#include "AllMissingNumbers.cpp"
#include "NumbersSmallerThanTheCurrentNumber.cpp"

int main(int argc, const char * argv[]) {
    /*
    DuplicateNumbersInAnArray duplicate;
    std::vector<int> array_with_duplicate = {1,2,3,1};
    std::vector<int> array_without_duplicate = {1,2,3,4};
    bool duplicate_found = duplicate.find_duplicates(array_with_duplicate);
    bool no_duplicate_found = duplicate.find_duplicates(array_without_duplicate);
    std::cout <<  std::boolalpha << duplicate_found << "\n";
    std::cout << std::boolalpha << no_duplicate_found << "\n";
     */
    /*PrimeNumbersUpToN prime;
    int n = 10;
    std::vector <int> prime_numbers = prime.find_all_prime_numbers(n);
    std::cout << "Prime numbers up to " << n << " are: " << "\n";
      for(int i = 0; i < prime_numbers.size(); i++){
          std::cout << prime_numbers[i] << " ";
      }
    std::cout << "\n";
     */
    
    /*twoSum ts;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> two_sum = ts.find_two_sum(nums, target);
    for(int e : two_sum){
        std::cout << e << " ";
    }
    std::cout << "\n";
     */
    /*
    // Testing missing number
    MissingNumber missing;
    std::vector <int> nums = {2,3,4,5,6,7,8,9,10};
    int n = 10;
    int missing_number = missing.find_missing_number(nums, n);
    std::cout << missing_number << "\n";
    
    // Testing all missing numbers
    AllMissingNumbers all;
    std::vector <int> new_nums = {2,4,5,6,7,9,10};
    std::vector <int> all_missing = all.find_all_missing_numbers(new_nums, n);
    for(int num : all_missing){
        std::cout << num << " ";
    }
    std::cout << "\n";
    */
    
    // Testing NumbersSmallerThanTheCurrentNumber
    std::vector <int> nums = {8,1,2,2,3};
    NumbersSmallerThanTheCurrentNumber n;
    std::vector <int> all_nums = n.find_smaller_numbers(nums);
    for(int num : all_nums){
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
