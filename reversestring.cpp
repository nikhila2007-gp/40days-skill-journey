#include <iostream>
using namespace std;
int main() {
    string stg;
    cin >> stg;
    for (int i = stg.length() - 1; i >= 0; i--)
        cout << stg[i];
    cout << endl;
    return 0;
}
