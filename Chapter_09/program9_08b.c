/* Example 9.8b deprecated attribute */
#include <stdio.h>

[[deprecated("Use mobile_phone() instead.")]]
void payphones()
{
    printf("Payphones are deprecated.\n");
}

int main(void)
{
    payphones();

    return 0;
}


