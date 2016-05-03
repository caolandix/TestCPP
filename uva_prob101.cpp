#include <iostream>
#include <map>
#include <string>

#include "uva_prob101.h"

using namespace std;

typedef enum { MOVE = 0, PILE, QUIT } ActionDefs;
typedef enum { ONTO = 0, OVER } DirectionDefs;
typedef map<ActionDefs, string> ActionMap;
typedef map<DirectionDefs, string> DirectionMap;

// prototypes...
void uva_Prob101();     // The block problem
void help();
ActionMap createActionMap();
DirectionMap createDirectionMap();


ActionMap createActionMap() {
    ActionMap tmp;
    tmp[MOVE] = "move";
    tmp[PILE] = "pile";
    tmp[QUIT] = "quit";
}
DirectionMap createDirectionMap() {
    DirectionMap tmp;
    tmp[MOVE] = "onto";
    tmp[PILE] = "over";
}

void help() {

}


void uva_Prob101() {

    ActionMap mapActions = createActionMap();
    DirectionMap mapDirections = createDirectionMap();

    cout << "This program manages commands from a robotic arm by entering commands for the robot arm..." << endl;
    cout << "First enter the number of blocks in the block world: ";
    int numBlocks;
    string action, direction;
    int srcBlks, tgtBlks;
    cin >> numBlocks;
    while (numBlocks < 1 || numBlocks > 25) {
        cout << "Block range is from 1 to 25." << endl;
        cout << "First enter the number of blocks in the block world: ";
        cin >> numBlocks;
    }
    cin >> action >> srcBlks >> direction >> tgtBlks;

}

int main(void) {
    uva_Prob101();
    return 0;
}
