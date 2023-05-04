#include <iostream>

int main()
{
  std::cout << "Number to reverse: ";
  // defining variables
  int inputNum{},outputNum{},currentDigit{};
  // ex: inputNum = 123
  std::cin >> inputNum;
  
  // 1: 123 [x]
  // 2: 12  [x]
  // 3: 1   [x]
  // 4: 0   [ ]
  while (inputNum)
  {
    // 1: currentDigit = 3
    // 2: currentDigit = 2
    // 3: currentDigit = 1
    currentDigit=inputNum%10;
    // 1: outputNum = 0*10+3  = 3
    // 2: outputNum = 3*10+2  = 32
    // 3: outputNum = 32*10+1 = 321
    outputNum=outputNum*10+currentDigit;

    // 1: inputNum = 123
    // 2: inputNum = 12
    // 3: inputNum = 1
    inputNum/=10;
  }
  // output reveresed number
  // horizontally align the output 
  std::cout << "Reversed number:   "<< outputNum << '\n';
  return 0;
}
