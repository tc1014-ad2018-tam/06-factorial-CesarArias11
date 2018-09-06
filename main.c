/*
 * Thi program will ask the user for a number.
 * The program will automatically display the resulting factorial of that number.
 * Considering that there's no factorial for negative numbers, that the factorial of 1 = 1, and factorial of 0 = 0.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date> September 6th, 2018
 * Email: a01411995@itesm.mx
 *
 */
#include <stdio.h>
    // Here's were I declare the variables.
    int main() {
    int fact = 1;
    int n;
    int i = 1;

    // This is were I ask the user for the number.
    printf("Which number would you like to know the factorial of?\n");
    scanf("%i", &n);

    // If the number is smaller than 0 the program will display a message.
    if (n<0) {
        printf("Factorial of negative numbers doesn't exist.");
    } else { // The program will start to generate factorials of the given number.
        while (i <= n){
            fact *= i;
            i++;
        }
        printf("The factorial of %i is %i.",n, fact); // Here's were I display the result.
    }

    return 0;
}