#include <iostream>



int main()
{
    int x = 5; // holds 5
    int *x_ptr = &x; // holds address of x
    // printing x_ptr will give adress (0xF5...), printing *x_ptr will give value (5)

    std::cout << x << "   " << *x_ptr << "\n";


    int a, b;
    int *ptr;
    
    // get loc of a
    ptr = &a;
    // assign 25 to loc, which is a
    *ptr = 25;

    // get loc f b
    ptr = &b;
    // assign 50 to loc, which is b
    *ptr = 50;

    printf("a is: %d, b is %d \n", a, b);


    /* ******************************************** arrays and pointers ************************************************************ */

    int arr[5] = {1, 2, 3, 4, 5};
    int *arrptr;
    arrptr = arr - 1;

    // this will make arr equal to 1, 2, 3, 4, 5  
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        arrptr++; *arrptr = i; // If I would not do arr - 1 in line 34, when I to arrptr++ I was gonna miss the first element
        std::cout << arrptr << "\n";
        printf("new value: %d \n", arr[i]);
    }

    // NOTE: POINTERS CAN BE const TOO!
}