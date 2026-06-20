#include<iostream>
using namespace std;

void print(int x)
{
    cout<< x<<endl;
}

void print(string name, int x)
{
    cout<< name<<endl;
    cout<< x;
}

int main()
{
    print(10);
    print( "Emon ",20);
    return 0;
}
