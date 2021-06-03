#include <iostream>
#include <fstream>


int main()
{
    // define file -> ifstream for reading ofstream for writing
    std::ofstream myfile;
    
    // open the defined file
    /* modes
     1 - std::ios::out -> used for writing to file
     2 - std:ios::in -> used for reading from file
     3 - std:ios::app -> used for appending to end of the file */
    myfile.open("my.txt", std::ios::out);
   
    // do reading writing to here 
    for(int i = 0; i < 10; i ++)
    {
        myfile << "XD: " + std::to_string(i) + "\n";
    }
    
    // close the file
    myfile.close();
}
