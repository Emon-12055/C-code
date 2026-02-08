#include<iostream>
using namespace std;

class Employee
{
private:
    string name;
    int age;
public:
    void get_data();
    void put_data();


};
void Employee :: get_data()
{
    cout<< "Enter Name : ";
    cin>>name;
    cout<< " Enter age ";
    cin>> age;
}
void Employee :: put_data()
{
    cout<< name << "  \n ";
    cout<< age << "  ";
    cout<< endl;
}

int main()
{
    Employee emp [30];
    int n;
    cout<< " Enter the Employee number : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<< "Item number  : "<< i+1 << endl;
     for(int i=0; i<n; i++)
     {
          emp[i].get_data();
     }
     for(int i=0; i<n; i++)
     {
          emp[i].put_data();
     }
    }




    return 0;
}
