#include <iostream>



// Giving functions as parameters.

int add(int a, int b)
{return a + b;}

int sub(int a, int b)
{return a - b;}

int operate(int a, int b, int (*foo)(int, int))
{
    int result = (*foo)(a, b);
    return result;
}

int main()
{
    int *foo_ptr;
    int out = operate(5, 10, add);
    printf("OUT IS: %d \n", out);

}