#include <iostream>

void PrintIntro()
{
    //print welcome and game intro to terminla
    std::cout << "You are a computer hacker that has to break into secure files...\n";
    std::cout << "You need to enter the correct code to access the files...\n\n";
}

void PlayGame()
{
    PrintIntro();
    //set variables
    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 6;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //print codesum and codeproduct to terminal
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to: " << CodeProduct << "\n";

    //store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //check if player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You Hacked In!!!";
    } else {
        std::cout << "The computer exploded destroying the files!!!";
    }
}

int main()
{
    PlayGame();
    return 0;
}