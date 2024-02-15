/* Example 9.8e nodiscard attribute */
#include <stdio.h>

// struct nodiscard example:
struct [[nodiscard]] error_info { int status; };
struct error_info enable_missile_safety_mode() 
{
     return (struct error_info){0}; 
}

void test_missiles() 
{
   enable_missile_safety_mode(); // warning
}

// simple function with: nodiscard( string-literal ):
[[nodiscard("trajectory")]] int trajectory_value(int x, int y) 
{ 
    return x ^ y; 
}

int main(void)
{
    trajectory_value(4, 2); // warning
    int z = trajectory_value(5, 6);  // ok

    test_missiles();

    return z;
}

