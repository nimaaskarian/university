#include <iostream>

int main()
{
  int count{};
  while (std::cin.get() != 'm'){
    count++;
  }
  std::cout << count << '\n';
  return 0;
}
