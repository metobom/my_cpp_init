#include <iostream>
#include <torch/torch.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "metolib.hpp"
#include <csignal>
#include <unistd.h>


void signal_handler(int signum)
{
    std::cout << "Signal catched: " << signum << '\n';
    exit(signum);
}

double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
} 

int main()
{    
    float val = 0;
    std::signal(SIGINT, signal_handler);
    std::system("../sources/subwork.py");
    sleep(1);
    std::cout << "Sleep is over!" << '\n';
    try
    {
        val = division(5, 0);
    }
    catch(const char* ERR)
    {
        val = 15;
        std::cout << "Val assigned to 15!" << '\n';
        std::cout << "Exception is: " << ERR << '\n';
    }

    std::cout << val << '\n';

}
