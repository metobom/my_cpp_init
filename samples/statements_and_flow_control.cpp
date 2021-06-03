#include <iostream>
#include <vector>



int main()
{
    // if, else if, else, for, while (DONE!)

    /* ******************************************************************************************************************* */

    // do statement while condition
    int x = 0;
    do 
    {
        printf("x is still smaller than 5. It is %d \n", x);
        x++;
    } while(x < 5);
    printf("x is not smaller than 5 anymore\n");



    /* ******************************************************************************************************************* */

    // the cpp eqv of for i in something: in python
    std::vector<int> vec = {1, 2, 3 ,4 ,5};
    for(auto i : vec)
    {
        printf("vec includes %d \n", i);
    }
    /* ************************************************ continue ***************************************************************** */

    // continue statement skips rest of the loop and goes to start of loop

    std::vector<int> some_vec = {1, 2, 3, 4 ,5 ,6};
    for(auto i : some_vec)
    {
        if(i == 3) continue;
        printf("Contents of some_vec: %d\n", i);
    }

    /* ******************************************** goto like in assembly ************************************************************ */

    
    for(int j = 0; j < 5; j++)
    {
        printf("J is %d \n", j);
        if(j == 3) goto loop1;
    }

    loop1:
        printf("WE ARE IN loop1! \n");
        for(int i = 0; i < 2; i++)
        {
            printf("i is: %d \n", i);
        }
        printf("loop1 finished. Going to end\n");
        goto end;

    end:
        printf("WE ARE IN end!\n");


    /* ******************************************** switch - case (DONE!) ************************************************************ */
    int state = 0;

    switch (state)
    {
    case 0:
        printf("You are in case 0! \n");
        break;
    
    case 1:
        printf("You are in case 1! \n");

    default:
        break;
    }
}