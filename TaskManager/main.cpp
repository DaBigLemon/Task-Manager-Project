// TaskManager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    bool quit = false;
    std::string userInput;

    std::cout << "Hello Please type Add, List or Quit\n" << std::endl;

    while (!quit) {
        std::cin >> userInput;

        if (userInput == "Add") {
            std::cout << "you added a Task!\n" << std::endl;

            std::cout << "Please type Add, List or Quit\n" << std::endl;
        }
        else if (userInput == "List") {
            std::cout << "Here is your List of Tasks.....\n" << std::endl;

            std::cout << "Please type Add, List or Quit\n" << std::endl;
        }
        else if (userInput == "Quit") {
            quit = true;
        }
        else {
            std::cout << "'" << userInput << "'" << "Is not a valid Input\nPlease type a valid command such as\nAdd, List or Quit\n" << std::endl;
        }
    }

    

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
