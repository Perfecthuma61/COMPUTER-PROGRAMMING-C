#include<stdio.h>

int main() { 

 int n, i; 

 

 // Input the number of elements in the list 

 prinƞ("Enter the number of elements: ");

 scanf("%d", &n); 

 

 int arr[n]; 

 

 // Input the list of integers 

 prinƞ("Enter the elements: \n"); 

 for (i = 0; i < n; i++) { 

 scanf("%d", &arr[i]); 

 } 

 // IniƟalize largest and smallest to the first element

 int largest = arr[0]; 

 int smallest = arr[0]; 

 // Traverse the list to find the largest and smallest 

 for (i = 1; i < n; i++) { 

 if (arr[i] > largest) { 

 largest = arr[i]; 

 } 

 if (arr[i] < smallest) { 

 smallest = arr[i]; 

 } 

 } 

 // Output the largest and smallest numbers 

 prinƞ("Largest number: %d\n", largest); 

 prinƞ("Smallest number: %d\n", smallest); 

 return 0; 

}
