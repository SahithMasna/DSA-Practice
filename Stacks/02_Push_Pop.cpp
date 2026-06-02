#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top Before Pop: " << s.top() << endl;

    s.pop();

    cout << "Top After Pop: " << s.top() << endl;

    return 0;
}
