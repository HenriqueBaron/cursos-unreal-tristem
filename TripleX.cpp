#include <iostream>

int main()
{
    // Game introduction text
    std::cout << "You are a secret agent breaking into a secure server room.";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";

    // Get the code answers
    int CodeA = 4;
    int CodeB = 2;
    int CodeC = 3;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // Print the sum and the product to the terminal
    std::cout << std::endl << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The numbers sum-up to " << CodeSum << std::endl;
    std::cout << "The numbers multiply to give " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    return 0;
}