#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1;
    for(int i = 1; i <= 10; i++) {
        cout << a << endl;
        int next = a + b;
        a = b;
        b = next;
    }
}
