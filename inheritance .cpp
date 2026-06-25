 /*Create a class named Shape with data members to store the width and height of a shape. Create
another class named Color with a data member to store the color of a shape. Create a third class
named ColoredShape that inherits from both the Shape and Color classes and has a method to
print out the width, height, and color of the shape. Write a program to create a ColoredShape
object and print out its width, height, and color. solve in c++ in eassy way   */



#include<iostream>
using namespace std;
class shape
{
   protected:
    double height;
    double width;
 public:
    shape(double h, double w)
    {
        height=h;
        width=w;
    }
};

class color
{
protected:

    string colour;
  public:
      color(string c)
      {
          colour=c;
      }
};

class color_shape : public shape, public color
{
public:

     color_shape(double h, double w, string c) : shape(w,h), color(c)
     {

     }

     void display()
     {
         cout<< " The color is : "<< colour<<endl;
         cout<< " The shape Height is :  "<< height <<endl;
         cout<< " The shape width is : "<< width << endl;
     }

};
int main()
{
   color_shape E(20, 10, "Red");
   E.display();

    return 0;
}
