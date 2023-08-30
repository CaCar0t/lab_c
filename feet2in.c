#include <stdio.h> //Change Feet to Inches
int Feet2Inch(int);
int feet,inches;
void main() //main function
{              //Start
    feet = 6;
    inches = Feet2Inch(feet);
    printf("Height in inches is %d",inches);
}               //Stop
int Feet2Inch(int f)
{
    return f*12;
}