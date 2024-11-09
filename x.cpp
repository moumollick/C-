#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a>> b;

        int totalHours = (4 * a) + b;
        cout << totalHours << endl;
    }

    return 0;
}
