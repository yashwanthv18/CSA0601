#include<stdio.h>
#include<math.h>
int countDigits(int num) { 
int count = 0; 
while (num != 0) { 
num /= 10; 
count++; 
} 
return count; 
} 
// Function to check if a number is an Armstrong number 
int isArmstrong(int num) { 
int sum = 0, temp, remainder, n = 0; 
// Calculate the number of digits 
n = countDigits(num); 
temp = num; 
while (temp != 0) { 
remainder = temp % 10; 
sum += pow(remainder, n); 
temp /= 10; 
} 
if (sum == num) 
return 1; 
else 
return 0; 
} 
int main() { 
int num; 
printf("Enter a number: "); 
scanf("%d", &num); 
if (isArmstrong(num)) 
printf("%d is an Armstrong number.\n", num); 
else 
printf("%d is not an Armstrong number.\n", num); 
return 0; 
} 
