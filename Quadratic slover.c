#include <stdio.h>

#include <math.h>

int main() {

 double a, b, c;

 double discriminant, root1, root2, realPart, imaginaryPart;

 // Taking user input for coefficients

 printf("Enter coefficients a, b, and c: ");

 scanf("%lf %lf %lf", &a, &b, &c);

 // Checking if 'a' is zero to avoid division by zero error

 if (a == 0) {

 printf("The coefficient 'a' cannot be zero in a quadraƟc equaƟon.\n");

 return 1; // Exit the program if 'a' is zero

 }

 // CalculaƟng the discriminant

 discriminant = b * b - 4 * a * c;

 // Checking the nature of the roots based on the discriminant 

 if (discriminant > 0) {/

 // Two disƟnct real roots

 root1 = (-b + sqrt(discriminant)) / (2 * a);

 root2 = (-b - sqrt(discriminant)) / (2 * a);

 printf("The equaƟon has two disƟnct real roots: %.2lf and %.2lf\n", root1, root2);
} 

 else if (discriminant == 0) { 

 // Two idenƟcal real roots

 root1 = -b / (2 * a); 

 printf("The equaƟon has one real repeated root: %.2lf\n", root1); 

 } 

 else { 

 // Complex roots 

 realPart = -b / (2 * a); 

 imaginaryPart = sqrt(-discriminant) / (2 * a); 

 printf("The equaƟon has complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", 

 realPart, imaginaryPart, realPart, imaginaryPart); 

 } 

 return 0; 

}
