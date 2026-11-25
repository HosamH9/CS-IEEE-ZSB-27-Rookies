#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int r1, c1, r2, c2;
    bool found = false;

    for (int i = 0; i < H; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < W; j++) {
            if (s[j] == 'o') {
                if (!found) {
                    r1 = i;
                    c1 = j;
                    found = true;
                }
                else {
                    r2 = i;
                    c2 = j;
                }
            }
        }
    }

    cout << abs(r1 - r2) + abs(c1 - c2);

    return 0;
}