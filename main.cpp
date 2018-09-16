#include <iostream>

using namespace std;

int main(){

    int option = 1;

    //This while loop will display our Main Menu where the user will be able to choose an action to perform
    while(option != 0)
    {
        
        cout << "=============================\n" 
             << "Welcome to THE SOCIAL NETWORK\n"
             << "=============================\n"
             << "(1) Create User\n"
             << "(2) List Users\n"
             << "(3) Show User\n"
             << "(4) Edit\n"
             << "(5) Resync\n"
             << "(6) Add Posting"
             << "(7) Statistics\n"
             << "(0) Exit\n"
             << endl;
        
        cin >> option;

        switch(option)
        {
            //We will exit out of the program
            case 0:
            break;

            //Allow the User to create a profile
            case 1:
            cout << "This will allow the user to create a profile" <<endl;
            break;

            //This command will print out all of the users
            case 2:
            cout << "This will print out all the users" << endl;
            break;

            //This command will show us any users information
            case 3:
            cout << "This will show any users information" << endl;
            break; 

            case 4: 
            cout << "This will allow a user to edit or enter in their information" << endl;
            break;

            case 5:
            cout << "This is a system test command where all the saved data is forgotten and sending of data is reset" << endl;
            break;

            case 6:
            cout << "Allow the user to add a new post" << endl;
            break;

            case 7:
            cout << "Prints how many other nodes are known and how much of the available content is in this node" << endl;
            break;

        }
    }

    return 0;
}