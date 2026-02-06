#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

float fun(float x)
{
    return (pow(x,3)-x-1);
}

int main()
{
    float a,b,x,eps;
    int i=0;
    system("cls");  // Replaced clrscr() with system("cls") for modern compilers
    printf("Enter lower and upper limit\n");
    scanf("%f%f",&a,&b);
    printf("Enter epsilon value (required accuracy)\n");
    scanf("%f",&eps);

    if((fun(a)*fun(b))>0)
        printf("starting value is unsuitable\n");
    else
    {
        while(fabs(b-a)>eps)
        {
            x=(a+b)/2;
            i++;
            if((fun(x)*fun(a))>0)
                a=x;
            else
                b=x;
        }
    }
    printf("Solution converges to a root\n");
    printf("Number of Iterations = %d\n", i);
    printf("%f\n",x);
    getch();
}
