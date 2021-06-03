#include <iostream>


namespace meto
{
    int meto_var = 5;

    void meto_foo()
    {
        printf("You are in meto foo!\n");
    }
}


int main()
{
    printf("This is meto var! %d \n", meto::meto_var);
    meto::meto_foo();
}