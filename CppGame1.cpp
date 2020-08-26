#include <iostream>
#include <ctime>

void PrintIntro (int Difficulty) {
    std::cout << "\n\nYou are a computer hacker that has to break into level " << Difficulty << " security files...\n";
    std::cout << "You need to enter the correct three digit code to access the files...\n";
    std::cout << "To enter code seperate the three numbers with spaces...\n\n";
}

bool PlayGame (int Difficulty) {

    PrintIntro (Difficulty); 

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to: " << CodeProduct << "\n";

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You Hacked In!!! Try to hack into harder files!";
        return true;
    } else {
        std::cout << "The computer exploded destroying the files!!! Be careful and try again.";
        return false;
    }
}

int main() {
    
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete) {
            ++LevelDifficulty;
        }
    }
    std::cout << "\nGood work hacker! You recovered the files now run!";
    return 0; 
}