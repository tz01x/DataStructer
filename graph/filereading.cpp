#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream file("filename.txt");
    string content;

    while(file >> content) {
        cout << content << ' ';
    }
    return 0;
}
