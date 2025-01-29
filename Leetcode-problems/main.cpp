#include <iostream>
#include "DuplicateNumbersInAnArray.cpp"
#include "PrimeNumbersUpToN.cpp"
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
    PrimeNumbersUpToN prime;
    int n = 10;
    std::vector <int> prime_numbers = prime.find_all_prime_numbers(n);
    std::cout << "Prime numbers up to " << n << " are: " << "\n";
      for(int i = 0; i < prime_numbers.size(); i++){
          std::cout << prime_numbers[i] << " ";
      }
    std::cout << "\n";
    return 0;
}
