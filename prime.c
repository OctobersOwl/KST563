#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int a){
    for(int i=2; i <= a/2; i++)
    {
        if(a%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int x;
    scanf("%d",&x);

    if(is_prime(x))
    {
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }

    return EXIT_SUCCESS;
}
