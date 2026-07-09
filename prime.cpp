#include <iostream>
using namespace std;

int main() {
    int i, num;

    cin >> num;

    if (num <= 1) {
        cout << "Not Prime";
        return 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << "Not Prime";
            return 0;
        }
    }

    cout << "Prime";

    return 0;
}
