/***
 * 3x + 5y = N
 ***/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string beast(int n) {
        int i, j;
        for (i = n/3; i >= 0; --i)
            for (j = (n - 3*i)/5; j >= 0; --j)
                if (3*i + 5*j == n) {
                    string key;
                    int cnt = 3*i;
                    while (cnt--)
                        key += "5";
                    cnt = 5*j;
                    while (cnt--)
                        key += "3";
                    return key;
                }
        return "-1";
    }
};

int main() {
    int T;
    int N;
    cin >> T;
    while (T--) {
        cin >> N;
        Solution so;
        cout << so.beast(N) << endl;
    }
    return 0;
}