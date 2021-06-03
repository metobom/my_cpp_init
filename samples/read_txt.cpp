#include <iostream>
#include <fstream>



int main()
{
    // define file to read -> ifstream for reading ofstream for writing
    std::ifstream myfile; 
        
    // open the defined file
    /* modes
     1 - std::ios::out -> used for writing to file
     2 - std:ios::in -> used for reading from file
     3 - std:ios::app -> used for appending to end of the file */
     myfile.open("my.txt", std::ios::in);

    // define variable to hold string
    std::string data;

    // read here
    while(std::getline(myfile, data))
    {
        std::cout << data + "\n";
    }

    std::cout << data; // print out data

    // close the file
     myfile.close();
       
}
