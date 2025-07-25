#include <iostream>
using namespace std;

int main() {
    int n = 7; 

    for (int i = 0; i < n; i++) {
        cout << "*"; 

  
        if ((i == 0) || (i == n / 2)) {
            for (int j = 0; j < n - 2; j++)
                cout << "*";
        } else if (i < n / 2) {
            for (int j = 0; j < n - 2; j++) {
                if (j == n - 3)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        if (i > n / 2) {
            for (int j = 0; j <= i - (n / 2); j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
