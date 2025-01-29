#include <vector>
class PrimeNumbersUpToN{
public:
    std::vector <int> find_all_prime_numbers(int n){
        std::vector <bool> all_prime(n + 1, true);
        std::vector <int> prime_numbers;
        all_prime[0] = false;
        all_prime[1] = false;
        for(int i = 2; i * i <= n; i++){
            if(all_prime[i]){
                for(int j = i * i; j <= n; j+=i){
                    all_prime[j] = false;
                }
            }
        }
        for(int i = 2; i <= n; i++){
            if(all_prime[i]){
                prime_numbers.push_back(i);
            }
        }
        return prime_numbers;
    }
};
