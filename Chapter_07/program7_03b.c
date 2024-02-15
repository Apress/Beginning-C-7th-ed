// Program 7.3b  Using nullptr + auto
#include <stddef.h>
#include <stdio.h>
 
// idea taken from the example at https://en.cppreference.com

// function_test accepting a pointer (most null pointer)
void function_test(int*)
{
    printf("Function function_test called\n");
}
 
int main(void)
{
    function_test(nullptr);         // Fine
    function_test(NULL);            // Fine
    function_test(0);               // Fine
  
    auto cloned_nullptr = nullptr;
    auto cloned_NULL    = NULL;
    auto cloned_zero    = 0;

    function_test(cloned_nullptr);  // Fine
    function_test(cloned_NULL);     // Fine
    //function_test(cloned_zero);   // ERROR

    return 0; 
 }

