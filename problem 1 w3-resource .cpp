/* Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the circle's
area and circumference.   */
#include<iostream>
#include<cmath>
using namespace std;


class circle
{
private :
    float radius;
public:

   // float rad;

    float area(float r)
    {
        float area;
        area=3.1416*r*r;
        return area;
    }

    float circumfer(float r)
    {
        return 2*3.1416*r;
    }

};



int main()
{
    float rad;
    cout<<"Enter the radius value ";
    cin>>rad;

    circle Area;

    cout<<" Area of a circle : " <<Area.area(rad)<<endl;
    cout<< "Circumference of a circle : "<<Area.circumfer(rad);


}
