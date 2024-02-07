#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("SalaryData.txt");

    string lastName, firstName;
    double salary, increase;

    inFile >> lastName >> firstName >> salary >> increase;
    cout << lastName << " " << firstName << " " << salary << " " << increase << endl;

}
