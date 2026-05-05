#include <iostream>

int main() {
    bool quit = false;

    std::string userInput = "";

    // SIMPLE WHILE LOOP JUST TO TEST IF EVERYTHINGS WORKING
    std::cout << "Hello Welcome to my task manager CLI\ntype add, list, delete or quit"
     << std::endl;
    // Getting the bare bones framework for the Task Manager CLI so i can improve

    // TODO: Need to be able to add tasks to a vector and able to print it to consol
    while (quit == false){
        std::cin >> userInput;

        if (userInput == "add"){
            std::cout << "\nyou added a Task!!!!\n" << std::endl;
        }
        else if (userInput == "list"){
            std::cout << "\nyou Showed the list of tasks youve added!\n" << std::endl;
        }
        else if (userInput == "delete"){
            std::cout << "\nyou deleted a task from the list\n" << std::endl;
        }
        else if (userInput == "quit"){
            quit = true;
        }
        std::cout << "Please type\n"
            << "add\n" << "list\n" << "delete\n" << "quit\n\n" << std::endl;
             
    } 
    



    return 0;
}