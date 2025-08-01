#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter no of elements:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
