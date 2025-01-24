#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an ofstream object to write to a file
    ofstream outFile("example.txt");
    outFile << "Hello, File I/O in C++!" << endl;
    outFile.close(); // Close the file

    // Create an ifstream object to read from the file
    ifstream inFile("example.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close(); // Close the file

    return 0;
}
