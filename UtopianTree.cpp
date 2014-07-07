#include <iostream>
using namespace std;

int height(int n) {
    int h = 1;
    for (int i = 0; i < n; ++i)
        h = (i % 2) ? (h + 1) : 2*h;
    return h;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}