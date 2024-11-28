#include <stdio.h> 

int main() { 

 float temperature, convertedTemp; 

 int sourceUnit, targetUnit; 

 int conƟnueConversion = 1;

 while (conƟnueConversion) {

 // Input the temperature to convert 

 printf("Enter the temperature: ");

 scanf("%f", &temperature); 

 // Select source unit 

 printf("Select the source unit:\n"); 

 printf("1. Celsius\n"); 

 printf("2. Fahrenheit\n"); 

 printf("3. Kelvin\n"); 

 printf("Enter choice (1-3): "); 

 scanf("%d", &sourceUnit); 

 // Select target unit 

 prinƞ("Select the target unit:\n"); 

 prinƞ("1. Celsius\n"); 

 prinƞ("2. Fahrenheit\n"); 

 prinƞ("3. Kelvin\n"); 

 prinƞ("Enter choice (1-3): "); 

 scanf("%d", &targetUnit); 

 // Conversion logic based on source and target units 

 if (sourceUnit == 1 && targetUnit == 2) { // Celsius to Fahrenheit 

 convertedTemp = (temperature * 9 / 5) + 32; 

 } else if (sourceUnit == 1 && targetUnit == 3) { // Celsius to Kelvin 

 convertedTemp = temperature + 273.15; 

 } else if (sourceUnit == 2 && targetUnit == 1) { // Fahrenheit to Celsius 

 convertedTemp = (temperature - 32) * 5 / 9; 

 } else if (sourceUnit == 2 && targetUnit == 3) { // Fahrenheit to Kelvin 

 convertedTemp = (temperature - 32) * 5 / 9 + 273.15; 

 } else if (sourceUnit == 3 && targetUnit == 1) { // Kelvin to Celsius 

 convertedTemp = temperature - 273.15; 

 } else if (sourceUnit == 3 && targetUnit == 2) { // Kelvin to Fahrenheit 

 convertedTemp = (temperature - 273.15) * 9 / 5 + 32; 

 } else if (sourceUnit == targetUnit) { // Same unit conversion 

 convertedTemp = temperature; 

 printf("Source and target units are the same.\n"); 

 } else { 

 printf("Invalid choice. Please try again.\n"); 

 conƟnue;

 } 

 // Display result
prinƞ("Converted Temperature: %.2f\n", convertedTemp); 

 // Ask if the user wants to perform another conversion 

 prinƞ("Do you want to convert another temperature? (1 for Yes, 0 for No): ");

 scanf("%d", &conƟnueConversion);

 } 

 prinƞ("Temperature conversion program terminated.\n"); 

 return 0; 

}
