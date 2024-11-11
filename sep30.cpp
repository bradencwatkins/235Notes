#include <iostream>
using namespace std;
#include <stack>
#include <queue>

int main() {

    stack<string> ds;

    ds.push("Rock");
    ds.push("Paper");
    ds.push("Scissors");
    ds.push("Lightning");

    while(!ds.empty()) {
        cout << ds.top() << endl;
        ds.pop();
    }

return 0;
}

//HW2C HINTS
//if pop or top, make sure that the priority queue is not empty
//push strings into your priority queue
//name: Alice Krandall
//priority: 3
//construct a string: "03 - Alice Krandall"
//push the string onto the priority queue

//priority_queue<pair<int, string>> -> pq.push(pair(priority, str))
// pair<int, string> p
//p.first is the integer
//p.second is the string