#include <stdio.h>

int main()

{

 int i, num, temp = 0; 

 // read input from user.

 prinƞ("Enter any numb to Check for Prime: ");

 scanf("%d", &num);

 // iterate up to n/2.

 for (i = 2; i <= num / 2; i++)

 {

 // check if num is divisible by any number.

 if (num % i == 0)

 {

 temp++;

 break;

 }

 } 

 // check for the value of temp and num. 

 if (temp == 0 && num != 1) { prinƞ("%d is a Prime number", num);

 } 

 else 

 { 

 prinƞ("%d is not a Prime number", num);

 } 

 return 0;
}
