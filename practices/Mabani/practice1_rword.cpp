#include <iostream>

int main ()
{
  // i: rows
  for (int i{0}; i < 5; i++)
  {
    // j: spaces
    for (int j{0}; j < 5-i; j++)
      std::cout << '\t';

    // j: stars
    for (int j{0}; j < i*2-1; j++)
      std::cout << "*\t";
    std::cout << '\n';
  }

  // i: rows, reversed
  for (int i{5}; i > 0; i--)
  {
    // j: spaces
    for (int j{0}; j < 5-i; j++)
      std::cout << '\t';

    // j: stars
    for (int j{0}; j < i*2-1; j++)
      std::cout << "*\t";
    std::cout << '\n';
  }
  return 0;
}
