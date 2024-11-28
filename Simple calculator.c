#include <stdio.h>

int main() {

 float num1, num2, result;

 char operaƟon;

 int conƟnueCalc = 1;

 while (conƟnueCalc) {

 // Prompt user to enter two numbers

 prinƞ("Enter first number: ");

 scanf("%f", &num1);

 prinƞ("Enter second number: ");

 scanf("%f", &num2);

 // Prompt user to select an operaƟon

 prinƞ("Choose an operaƟon (+, -, *, /): ");

 scanf(" %c", &operaƟon);

 // Perform the operaƟon using switch-case

 switch (operaƟon) {

 case '+':

 result = num1 + num2;
prinƞ("Result: %.2f\n", result); 

 break; 

 case '-': 

 result = num1 - num2; 

 prinƞ("Result: %.2f\n", result); 

 break; 

 case '*': 

 result = num1 * num2; 

 prinƞ("Result: %.2f\n", result); 

 break; 

 case '/': 

 if (num2 != 0) { 

 result = num1 / num2; 

 prinƞ("Result: %.2f\n", result); 

 } else { 

 prinƞ("Error: Division by zero is not allowed.\n"); 

 } 

 break; 

 default: 

 prinƞ("Error: Invalid operaƟon.\n"); 

 break; 

 } 

 // Ask if the user wants to perform another calculaƟon

 prinƞ("Do you want to perform another calculaƟon? (1 for Yes, 0 for No): ");

 scanf("%d", &conƟnueCalc);

 } 

 prinƞ("Calculator program terminated.\n"); 

 return 0; 

}
