#include <iostream>
using namespace std;

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

int main() {
    int a = 12, b = 18;
    int gcdValue = GCD(a, b);
    int lcmValue = LCM(a, b);

    cout << "Numbers a = " << a << " and b = " << b << endl;
    cout << "GCD = " << gcdValue << endl;
    cout << "LCM = " << lcmValue << endl;

    return 0;
}

