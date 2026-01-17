#include <iostream>
#include <vector>

int main() {
    std::vector<int> prime = {2, 3};
    std::vector<int> notprime = {4};
    bool is_prime = true;
    
  for (int i = 5; i <= 1000; i++) {
    is_prime = true;
    for (int j = 0; j < prime.size();j++) {
        if (i % prime[j] == 0) {
            is_prime = false;
        }
        // std::cout << i << " " << j << " " << prime[j] << " " << is_prime << "\n";
    }
    if (is_prime == true){
    prime.push_back(i);
    }
    else if (is_prime == false) {
    notprime.push_back(i);
    }
    
    
    
    //       notprime.push_back(i);
    //   prime.push_back(i);
    
}
std::cout << "Prime Numbers :\n";
for (int k = 0; k < prime.size();k++) {
std::cout << prime[k] << " ";
}
std::cout << "\n";
std::cout << "Not Prime Numbers :\n";
for (int l = 0; l < notprime.size();l++) {
std::cout << notprime[l] << " ";
}

}