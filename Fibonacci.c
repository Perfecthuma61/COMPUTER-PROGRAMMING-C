#include <stdio.h> 

int main() { 

 int i, n; 

 // iniƟalize first and second terms

 int t1 = 0, t2 = 1; 

 // iniƟalize the next term (3rd term)

 int nextTerm = t1 + t2; 

 // get no. of terms from user 

 prinƞ("Enter the number of terms: ");

 scanf("%d", &n); 

 // print the first two terms t1 and t2 

 prinƞ("Fibonacci Series: %d, %d, ", t1, t2);

 // print 3rd to nth terms 

 for (i = 3; i <= n; ++i) { 

 prinƞ("%d, ", nextTerm);
t1 = t2; 

 t2 = nextTerm; 

 nextTerm = t1 + t2; 

 } 

 return 0; 

}
