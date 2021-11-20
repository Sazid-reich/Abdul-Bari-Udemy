//wap to get the salary after allowances and deducting.

#include <iostream>
using namespace std;

int main()
{
    float bS, pOA, pOD, netSal;
    cout << "Basic Salary: ";
    cin >> bS;
    cout << "Percentage of Allowances: ";
    cin >> pOA;
    pOA /= 100;
    cout << "Percentage of Deduction: ";
    cin >> pOD;
    pOD /= 100;

    netSal = bS + (bS * pOA) - (bS * pOD);
    cout << "Net Salary: " << netSal << "\n";

    return 0;
}