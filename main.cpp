#include<fstream>
#include<iostream>
int main() {
    std::ofstream myfile;
    myfile.open("Testfile.txt");
    myfile << "This is a test!";
    myfile.close();
    return 0;
}