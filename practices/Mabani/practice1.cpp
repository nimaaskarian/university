#include <iostream>
#define MAX 5

// I don't like repeating myself, so
// even tho prof didn't teach us thoroughly
// about functions, imma use them

void printStarsInTheSpace(int i)
{
  // j: spaces
  for (int j{0}; j < MAX-i; j++)
    std::cout << '\t';
  
  // j: stars
  for (int j{0}; j < i*2-1; j++)
    std::cout << "*\t";
  std::cout << '\n';
}

int main ()
{
  // i: rows
  for (int i{0}; i < MAX; i++)
  {
    printStarsInTheSpace(i);
  }

  // i: rows, reversed
  for (int i{MAX}; i > 0; i--)
    printStarsInTheSpace(i);
  return 0;
}
