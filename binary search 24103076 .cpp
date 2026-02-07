#include <iostream>
using namespace std;

int main() {
    int n, i, key;
    int A[100];
    int low, high, mid;

    cout << "Enter number of elements: ";
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter search key: ";
    cin >> key;
    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(A[mid] == key) {
            cout << "Element found at position " << mid;
            return 0;
        }
        else if(key < A[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << "Element not found";

    return 0;
}
