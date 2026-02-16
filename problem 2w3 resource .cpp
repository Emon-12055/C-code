/*Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to calculate
the rectangle's area and perimeter.   */


#include<iostream>
#include<cmath>
using namespace std;

class rectangle
{
private:
    float length;
    float width;

public:
    float cal_area(float l, float w)
    {
        float area;
        area= l*w;
        return area;
    }

    float cal_perameter(float l,float w)
    {
        float perameter,s;
        s=l+w;
        perameter= 2*s;
        return perameter;
    }


};
int main()
{
    rectangle A;
    float x,y;
    cout<< "Enter the value of length X: ";
    cin>>x;
    cout<< "Enter the value of width y: ";
    cin>>y;

    cout<< "Area of reatangle "<<A.cal_area(x,y)<<endl;
    cout<< " Perametar of a rectangle : "<< A.cal_perameter(x,y) <<endl;


    return 0;
}
