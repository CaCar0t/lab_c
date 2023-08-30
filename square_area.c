#include <stdio.h>
float squareArea(float side){
    return side * side;
}

void main(){
    float side, area;
    printf("Enter Side : ");
    scanf("%f",&side);

    area = squareArea(side);
    printf("Square Area is %.2f",area);
}
