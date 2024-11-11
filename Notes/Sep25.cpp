#include <iostream>
#include <string>
using namespace std;
#include <set>
#include <vector>
#include <unordered_set>
#include <list>

// Lists, Sets, Queues, Priority queues, stacks, maps
//SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS SETS
//NO DUPLICATE VALUES
//NO ORDER ITS ANARCHY AHHHH
//set commands: size(), isEmpty(), insert(o)(set wont add duplicates), remove(o), o=find(o)

//Program to see who gets into the pearly gates sheeee

int main() {

    set<string> nature;

    string line;
    cout << "Enter the attributes of the individual" << endl;
    while (true) {
        string attribute;
        getline(cin, attribute);
        if (attribute == "") {
            break;
        }
        nature.insert(attribute);
    }

    cout << "Of what does this individual repent:" << endl;
    string repent;
    getline(cin, repent);
    nature.erase(repent);

    cout << endl << "This is the person's nature" << endl;

    for (set<string>::iterator itr = nature.begin(); itr != nature.end(); itr++) {
        cout << *itr << endl;
    }
    cout << endl;

    if (nature.find("charity") != nature.end()) {
        cout << "Let them through them pearly gates" << endl;
    }
    else {
        cout << "who tf this dude" << endl;
        cout << "lmao gtfo with that stank" << endl;
    }

    return 0;
}
