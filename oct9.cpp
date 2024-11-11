// RECURSION

#include <iostream>
using namespace std;

void toTen(int n) {
    n++;
    cout << "Number: " << n << endl;
    if (n < 10) {
        toTen(n);
    }
}

//recursives steps for maze
// if (solveMazeRec(Left) || solveMazeREc(Right) || solveMazeRec(Up)

int main(int argc, char* argv[]) {

    int number;
    toTen(number);



    return 0;


}
