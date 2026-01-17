#include <iostream>
#include <vector>

int main() {
    std::vector<int> prime = {2, 3};
    std::vector<int> notprime = {4};

  for (int i = 5; i <= 20; i++) {
    std::cout << i << " mod 2 = " << i % 2 << "\n";
    std::cout << i << " mod 3 = " << i % 3 << "\n";
    std::cout << i << " mod 4 = " << i % 4 << "\n";
    std::cout << i << " mod 5 = " << i % 5 << "\n";
  }
   
 
}