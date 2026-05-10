#include <iostream>
#include <vector>
#include <string>

// COMPLETED: Need to be able to add tasks to a vector and able to print it to consol
/*
TODO: Make delete feature work. first just make it delete most recent and then after 
let the user decide what task to delete
*/

void BorderLine();

int main() {
    bool quit = false;
    std::vector<std::string> taskListVec;

    std::string userInput = "";
    int indexSelect; 

    // SIMPLE WHILE LOOP JUST TO TEST IF EVERYTHINGS WORKING
    std::cout << "Hello Welcome to my task manager CLI\ntype add, list, delete or quit"
     << std::endl;
    // Getting the bare bones framework for the Task Manager CLI so i can improve

    
    while (quit == false){
        std::cin >> userInput;

        if (userInput == "add"){
            std::cout << "\nType the task you want to add!" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear leftover newline
            std::getline(std::cin, userInput);
            if (userInput == "quit"){
                return 0;
            }
            else{
                taskListVec.push_back(userInput);
                std::cout << "You added " << userInput << " to the list!" << std::endl;
            }

        }
        else if (userInput == "list"){
            std::cout << "\nTASKS YOU NEED TO COMPLETE!\n" << std::endl;
            BorderLine();
            for (int i = 0; i < taskListVec.size(); i++){
                std::cout << "[" << i + 1 << "] " << taskListVec[i] << std::endl; 
            }
            BorderLine();
        }
        else if (userInput == "delete")
        {
            BorderLine();

            if (taskListVec.empty())
            {
                std::cout << "LIST IS EMPTY NOTHING TO DELETE!" << std::endl;
            }
            else
            {
                for (int i = 0; i < taskListVec.size(); i++)
                {
                    std::cout << "[" << i + 1 << "] "
                            << taskListVec[i] << std::endl;
                }

                BorderLine();

                std::cout << "\nPICK A TASK TO DELETE!" << std::endl;

                std::cin >> indexSelect;

                if (std::cin.fail() || indexSelect < 1 || indexSelect > taskListVec.size())
                {
                    std::cout << "Invalid input.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                }
                else
                {
                    std::cout << "You deleted Task '" << taskListVec[indexSelect - 1] << "'" << std::endl;

                    taskListVec.erase(taskListVec.begin() + (indexSelect - 1));
                }
            }

            BorderLine();
        }
        else if (userInput == "quit"){
        quit = true;
        }
        std::cout << "Please type\n"
        << "add, " << "list, " << "delete, " << "quit\n\n" << std::endl;
             
    }   
    
    return 0;
}

void BorderLine(){
    std::cout << "\n**********************************************\n" << std::endl;

}