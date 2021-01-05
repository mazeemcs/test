#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double funcceil (double x)
{
    int y;
    if (x>0 && x>(int)x)
    {
        x++;
        y=(int) x;
    }
    else if (x<0 && x<(int)x)
    {
        y=(int) x;
    }
    else
    {
        y=(int) x;
    }
    
    return y;
}
double funcfloor (double x)
{
    int y;
    if (x>0 && x>(int)x)
    {
        y=(int) x;
    }
    else if (x<0 && x<(int)x)
    {
        x--;
        y=(int) x;
    }
    else
    {
        y=(int) x;
    }
    
    return y;
}
int main()
{
    char decision;
    double number;
    printf("Operations Available:\nFloor(f)\nCiel(c)\nWhat do you want to do(f/c):");
    scanf("%c",&decision);
    printf("Enter number: ");
    scanf("%lf",&number);
    switch (decision)
    {
        case 'c': printf("Ciel of a number is %f\n",funcceil(number));
                  break;
        case 'f': printf("Floor of a number is %f\n",funcfloor(number));
                  break;
        default: printf("option is not available");
    }
    getchar();
    getchar();
    return 0;
}