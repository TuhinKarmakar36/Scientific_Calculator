#include <stdio.h> 
#include <math.h> 
int main() 
{ 
int choice; 
double num1, num2, result; 
printf("------ Scientific Calculator ------\n"); 
printf("1. Addition\n"); 
printf("2. Subtraction\n"); 
printf("3. Multiplication\n"); 
printf("4. Division\n"); 
printf("5. Square Root\n"); 
printf("6. Exponentiation\n"); 
printf("7. Logarithm\n"); 
printf("Enter your choice (1-7): "); 
scanf("%d", &choice); 
switch (choice) 
{ 
case 1:{ 
// Addition 
printf("Enter two numbers: "); 
scanf("%lf %lf", &num1, &num2); 
result = num1 + num2; 
printf("Result: %.2lf\n", result); 
break; 
} 
case 2: 
{ 
// Subtraction 
printf("Enter two numbers: "); 
scanf("%lf %lf", &num1, &num2); 
result = num1 - num2; 
printf("Result: %.2lf\n", result); 
break; 
} 
case 3: 
{ 
// Multiplication 
printf("Enter two numbers: "); 
scanf("%lf %lf", &num1, &num2); 
result = num1 * num2; 
printf("Result: %.2lf\n", result); 
break; 
} 
case 4: 
{ 
// Division 
printf("Enter two numbers: "); 
scanf("%lf %lf", &num1, &num2); 
if (num2 == 0) 
{ 
printf("Error: Division by zero!\n"); 
} else 
{ 
result = num1 / num2; 
printf("Result: %.2lf\n", result); 
} 
break; 
} 
case 5: 
{ 
// Square Root 
printf("Enter a number: "); 
scanf("%lf", &num1);if (num1 < 0) 
{ 
printf("Error: Invalid input for square 
root!\n"); 
} else 
{ 
result = sqrt(num1); 
printf("Result: %.2lf\n", result); 
} 
break; 
} 
case 6: 
{ 
// Exponentiation 
printf("Enter base and exponent: "); 
scanf("%lf %lf", &num1, &num2); 
result = pow(num1, num2); 
printf("Result: %.2lf\n", result); 
break; 
} 
case 7: 
{ 
// Logarithm 
printf("Enter a number: "); 
scanf("%lf", &num1); 
if (num1 <= 0) 
{ 
printf("Error: Invalid input for logarithm!\n"); 
} 
else 
{ 
result = log10(num1); 
printf("Result: %.2lf\n", result); 
} 
break; 
} 
default: { 
printf("Error: Invalid choice! Please try 
again.\n"); 
break; 
} 
} 
return 0; 
}
