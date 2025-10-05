#include <iostream>
using namespace std;

int main(){

    char move;
    int x = 0, y = 0;  // Starting position (0,0)

    // Ask the user for a move
    cout<< "Enter move (W/A/S/D): ";
    cin>> move;

    // Change of coordinates based on the move
    if (move == 'W' || move == 'w'){
        y += 1;  // Move up
    } else if (move == 'S' || move == 's'){
        y -= 1;  // Move down
    } else if (move == 'A' || move == 'a'){
        x -= 1;  // Move left
    } else if (move == 'D' || move == 'd'){
        x += 1;  // Move right
    } else ={
        cout<< "Invalid input!" << endl;
        return 0;
    }

    // Output the new location
    cout<< "The location of the player is (" << x << ", " << y << ")" << endl;

    return 0;
}
