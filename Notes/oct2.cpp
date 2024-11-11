//MAPS MAPS MAPS MAPS

//empty, size
//insert(key, value)
//remove(key)
//findValue(key)

#include <iostream>
#include <set>\
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <vector>
#include<istream>
using namespace std;

// void printMap(unordered_map<string, vector<int>> m) {
//     cout << "This do be the map" << endl;
//     for (map<string, int>::iterator itr = m.begin; itr != m.end; itr++) {
//         cout << itr->first << ": " << itr->second << endl;
//
//     }
// }
//
// int main() {
//
//     unordered_map<string, vector<int>> mp;
//
//     mp["Mary"] = (16);
//
//     mp["Guido"] = 1;
//     mp["Rosa"] = 33;
//
//     printMap(mp);
//
//
//
//
//     return 0;
// }

//HW2D

unordered_map<string, vector<string>> simpleTraining(istream& input) {
    unordered_map<string, vector<string>> mp;

    string prev = "";
    string curr;
    while (input >> curr) {

        mp[prev].push_back(curr);
        prev = curr;
    }
    return mp;

}

int main(int argc, char* argv[]) {

    stringstream ss("one fish two fish red fish blue fish");

    unordered_map<string, vector<string>> m = simpleTraining(ss);

    for (auto pair : m) {
        cout << pair.first << ": ";
        for (int i = 0; i < pair.second.size(); i++) {
            cout << pair.second[i] << ", ";
        }
        cout << endl;
    }

    return 0;
}
