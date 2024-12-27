#include <iostream>
using namespace std;

const int modi = 1e9 + 7;

int power(int a, int b, int m) {
    int num = 1;
    while (b > 0) {
        if (b % 2 != 0) {
            num = (1LL * num * a) % m;
        }
        a = (1LL * a * a) % m;
        b = b / 2;
    }
    return num;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        int exp_b_c = power(b, c, modi-1);
        int result = power(a, exp_b_c, modi);

        cout << result << endl;
    }
}
