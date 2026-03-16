#include<stdio.h>
int main()
{
    int choise;
    float temperature,convertedtemperature;
    printf("Temperature conversion manue\n");
    printf("1. Fahrenhit to celsius\n");
    printf("2. celsius to Fahrenhit\n");
    printf("Enter your choise : ");
    scanf("%d", &choise);

    switch(choise)

    {
    case 1:
    {
        printf("Enter the Fahrenhit temperature : ");
        scanf("%f", &temperature);
        convertedtemperature =(1.8*temperature)+32;
        printf("The temprature in celsius is : %f\n",convertedtemperature);
        break;
    }

    case 2:
    {
        printf("Enter the celsius temperature : ");
        scanf("%f", &temperature);
        convertedtemperature =(temperature-32)/1.8;
        printf("The temperature in  Fahrenhit is : %f\n",convertedtemperature);

    }
    default:
        printf("Not a correct temprature ");

    }
    return 0;
}

