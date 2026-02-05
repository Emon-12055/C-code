#include <iostream>
using namespace std;

int main() {
    long long s, x, n;
    cin >> s >> x >> n;

    long long min_dump = (s +  n - 1) / n;

    if (min_dump <= x)
	{
      cout << min_dump << endl;
    }
	else 
	{
        cout << "Rip you Po!" << endl;
    }

    return 0;
}
