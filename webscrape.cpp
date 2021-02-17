#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream file1("txt.txt");
    string ending = " ";
    string holder = " ";
    string str = " ";
    int counter = 0;
    int pointer = 0;
    while(!file1.eof()) {
        getline(file1, ending);
        getline(file1, holder);
        str = "thebat " + to_string(counter) + " " + ending + holder;
        system(str.c_str());
        counter++; 
    }
    file1.close();
    return 1;
}