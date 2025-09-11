#include <iostream>
#include <fstream>


//openGl
//


int main()
{
    std::ifstream in;
    std::ofstream out;

    in.open("input.txt");

    out.open("output.txt");


    std::cout << "Hello World!\n";
    out << "Hello World!\n";




}