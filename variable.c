#include <stdio.h>

int global_variable = 10;


void function_one() {
    printf("Inside function_one: global_variable = %d\n", global_variable);
    global_variable += 5;
    printf("Inside function_one (after modification): global_variable = %d\n", global_variable);
}


void function_two() {
    printf("Inside function_two: global_variable = %d\n", global_variable);
    global_variable *= 2; 
    printf("Inside function_two (after modification): global_variable = %d\n", global_variable);
}

int main() {
    printf("In main (initial): global_variable = %d\n", global_variable);

    function_one();

    printf("In main (after function_one): global_variable = %d\n", global_variable);

    function_two(); 

    printf("In main (after function_two): global_variable = %d\n", global_variable);

    return 0;
}