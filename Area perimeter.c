#include <stdio.h> 

int main() 

{ 

 prinƞ("Program to find area and perimeter of some geometrical shapes:\n"); 

 int n1,n2; 

 prinƞ("Enter length and width of a rectangle:\n"); 

 scanf("%d%d",&n1,&n2); 

 prinƞ("For the given input of rectangle, perimeter is: %d and area is: %d\n",2*(n1+n2),n1*n2); 

 prinƞ("Now Enter side of a square:\n"); 

 scanf("%d",&n1); 

 prinƞ("For the given input of Square, perimeter is: %d and area is: %d\n", 4*n1,n1*n1); 

 prinƞ("Now Enter radius of a circle:\n"); 

 scanf("%d",&n1); 

 prinƞ("For the given input of Circle, perimeter is: %f and area is: %f\n", 2*3.141*n1, 3.141*n1*n1); 

 return 0; 

}
