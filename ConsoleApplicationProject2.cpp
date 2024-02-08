#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("SalaryData.txt");
    ofstream outFile;
    outFile.open("Salary.out");

    string lastName, firstName;
    double salary, increase;

    outFile << fixed << setprecision(2) << showpoint;

    while (inFile >> lastName >> firstName >> salary >> increase) {
        double updatedSalary = salary * (1 + increase / 100);
        outFile << firstName << " " << lastName << " " << updatedSalary << endl;
    }

    inFile.close();
    outFile.close();
    return 0; 

}
