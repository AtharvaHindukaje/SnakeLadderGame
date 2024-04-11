#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDie() {
    return rand() % 6 + 1;
}

// Function to play a turn
int playTurn(string  player, int currentPosition) {
    cout << "\n" << player << ", press Enter to roll the dice...";
    cin.get();

    int roll = rollDie();
    cout <<player<< " got a " << roll << " on the dice. " << endl;

    if (currentPosition + roll <= 100) {
        currentPosition += roll;
        switch (currentPosition) {
            // Snake positions
            case 16: currentPosition = 6;cout<<"Oh No! it's a snake, "; break;
            case 47: currentPosition = 26;cout<<"Oh No! it's a snake, "; break;
            case 49: currentPosition = 11;cout<<"Oh No! it's a snake, "; break;
            case 56: currentPosition = 53;cout<<"Oh No! it's a snake, "; break;
            case 62: currentPosition = 19;cout<<"Oh No! it's a snake, "; break;
            case 64: currentPosition = 60;cout<<"Oh No! it's a snake, "; break;
            case 87: currentPosition = 24;cout<<"Oh No! it's a snake, "; break;
            case 93: currentPosition = 73;cout<<"Oh No! it's a snake, "; break;
            case 95: currentPosition = 75;cout<<"Oh No! it's a snake, ";break;
            case 98: currentPosition = 78;cout<<"Oh No! it's a snake, "; break;
            
            // Ladder positions
            case 1: currentPosition = 38; cout<<"Yeah! "<<player<<" you got ladder, "; break;
            case 4: currentPosition = 14; cout<<"Yeah! "<<player<<" you got ladder, ";break;
            case 9: currentPosition = 31; cout<<"Yeah! "<<player<<" you got ladder,  ";break;
            case 21: currentPosition = 42;cout<<"Yeah! "<<player<<" you got ladder, "; break;
            case 28: currentPosition = 84;cout<<"Yeah! "<<player<<" you got ladder, "; break;
            case 36: currentPosition = 44;cout<<"Yeah! "<<player<<" you got ladder, "; break;
            case 51: currentPosition = 67; cout<<"Yeah! "<<player<<" you got ladder, ";break;
            case 71: currentPosition = 91; cout<<"Yeah! "<<player<<" you got ladder, ";break;
            case 80: currentPosition = 100;cout<<"Yeah! "<<player<<" you got ladder, "; break;
        }
        cout << player<<"'s new position is " << currentPosition << endl;
    } else {
        cout << "You need " << 100 - currentPosition << " to win. Try again next turn." << endl;
    }

    return currentPosition;
}

int main() {
    
    srand(time(nullptr));
    int PlayerOnePosition = 0;
    int PlayerTwoPosition = 0;
    string Player1,Player2;
    cout << "Welcome to Snake and Ladder Game!\n\n";
    cout<<"Enter name of the first player"<<endl;
    cin>> Player1;
    cout<<"Enter name of the second player"<<endl;
    cin>> Player2;

    cout << "Alright! Let's begin\n";
    // Clear input buffer
    cin.ignore();

    while (PlayerOnePosition < 100 && PlayerTwoPosition < 100) {
        PlayerOnePosition = playTurn(Player1, PlayerOnePosition);
        if (PlayerOnePosition == 100) {
            cout <<Player1<<" won" << endl;
            break;
        }

        PlayerTwoPosition = playTurn(Player2, PlayerTwoPosition);
        if (PlayerTwoPosition == 100) {
            cout <<Player2<<" won"<< endl;
            break;
        }
    }

    cout << "Game Over!" << endl;
    return 0;
}
