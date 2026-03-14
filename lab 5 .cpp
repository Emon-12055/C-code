#include <iostream>
using namespace std;

void maxHeapify(int A[], int n, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && A[left] > A[largest])
        largest = left;

    if(right < n && A[right] > A[largest])
        largest = right;

    if(largest != i)
    {
        swap(A[i], A[largest]);
        maxHeapify(A, n, largest);
    }
}

void buildMaxHeap(int A[], int n)
{
    for(int i = n/2 - 1; i >= 0; i--)
        maxHeapify(A, n, i);
}

void insertPriority(int A[], int &n, int value)
{
    A[n] = value;
    int i = n;
    n++;

    while(i > 0 && A[(i-1)/2] < A[i])
    {
        swap(A[i], A[(i-1)/2]);
        i = (i-1)/2;
    }
}

int dhp(int A[], int &n)  // dhp = deleteHighestPriority
{
    int root = A[0];
    A[0] = A[n-1];
    n--;

    maxHeapify(A, n, 0);

    return root;
}

void display(int A[], int n)
{
    for(int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main()
{
    int A[100], n;
    cout << "Enter number of aircraft: ";
    cin >> n;

    cout << "Enter priority values:\n";
    for(int i = 0; i < n; i++)
        cin >> A[i];

    buildMaxHeap(A, n);

    cout << "Priority Queue (Max Heap): ";
    display(A, n);

    int value;
    cout << "Enter new aircraft priority: ";
    cin >> value;

    insertPriority(A, n, value);

    cout << "Heap after insertion: ";
    display(A, n);

    int deleted = dhp(A, n);

    cout << "Deleted highest priority aircraft: " << deleted << endl;

    cout << "Heap after deletion: ";
    display(A, n);

    return 0;
}
