#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //random generatot
    srand(time(0));

    char PlayerChoice;
    char computerChoice;
    
    do {
        // display the options

        cout << "Choose your move:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "4. Quit" << endl;

        // player has to choose 
        cout << "Enter your choice (1-4): ";
        cin >> PlayerChoice;

        // Player wants to quit checking
        if (PlayerChoice == '4') {
            cout << "Thanks for playing. Goodbye!" << endl;
            break;
        }

        // Player input
        if (PlayerChoice < '1' || PlayerChoice > '3') {
            cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
            continue;  
        }

    
        char choices[] = {'R', 'P', 'S'};
        PlayerChoice = choices[PlayerChoice - '1'];

        // Generate a random choice for the computer
        int randomIndex = rand() % 3;
        computerChoice = choices[randomIndex];

       
        cout << "Your move: " << PlayerChoice << endl;
        cout << "Computer's move: " << computerChoice << endl;

        // Winner declaration
        
        if (PlayerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((PlayerChoice == 'R' && computerChoice == 'S') ||
                   (PlayerChoice == 'P' && computerChoice == 'R') ||
                   (PlayerChoice == 'S' && computerChoice == 'P')) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

    } while (true);

    return 0;
}
