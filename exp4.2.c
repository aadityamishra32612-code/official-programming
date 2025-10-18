
#include <stdio.h>

int global_var = 100; 

void demo(void)
{
    int local_var = 50; 
    printf("Inside demo(): local_var = %d, global_var = %d\n", local_var, global_var);
    global_var += 10; 
}


int main(void)
{
    demo();

    
    printf("After demo(): global_var = %d\n", global_var);

    

    printf("In main(): local_var = %d\n", local_var); 

    return 0;
}