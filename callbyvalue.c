// difference between call by value and call by reference



#include <stdio.h>
void addFive(int x);
void addsix(int *x);



int main() {
    int a = 10;
    addFive(a);  // a is passed by value, so changes are not reflected outside
    printf("Outside function: %d\n", a);  // Output: 10
    

    addsix(&a);  // Pass the address of a
    printf("Outside function: %d\n", a);  // Output: 15
    return 0;
}

/* In CALL BY VALUE, the function gets a copy of the actual value of the variable.
 Any changes made to this copy inside the function do not affect the original
variable outside the function.*/

void addFive(int x) {
    x = x + 5;  // Modify the copy of x
    printf("Inside function: %d\n", x);  // Output: 15

}
 
 /* In call by reference, the function gets the memory address (or reference) of the variable, not a copy.
  This allows the function to modify the original variable.
To use call by reference in C, you need to pass the address of the variable (using pointers).*/



void addsix(int *x) {
    *x = *x + 5;  // Modify the value at the address x points to
    printf("Inside function: %d\n", *x);  // Output: 15
}


