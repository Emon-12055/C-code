#include<iostream>
using namespace std;
class B;
class A
{
private:

    int value1;
public:
    void indata(int a)
    {
        value1=a;
    }
        void display(void )
        {
            cout<< value1 << endl;
        }
        friend void exchange(class A &, class B &);

};

class B
{

    int value2;
public:
    void indata(int a)
    {
        value2=a;
    }
        void display(void )
        {
            cout<< value2 << endl;
        }
        friend void exchange(class A &, class B &);

};
void exchange(class A &x, class B &y)
{
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}

int main()
{
    A Emon;
    B sakib;
    Emon.indata(150);
    sakib.indata(152);
    cout<< "------value before exancage------- \n";
    Emon.display();
    sakib.display();
    exchange(Emon , sakib );
    cout<< "------- after swaping--------  \n ";
    Emon.display();
    sakib.display();


    return 0;
}
