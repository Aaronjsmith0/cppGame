#include <iostream>

int main()
{
    std::cout << "You are a computer hacker that has to break into secure files...";
    std::cout << std::endl;
    std::cout << "You need to enter the correct code to access the files..." << std::endl;

    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 6;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to: " << CodeProduct << std::endl;

    int PlayerGuess;

    return 0;
}