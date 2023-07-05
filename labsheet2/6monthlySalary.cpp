// //Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
// Chief executive officer Rs. 35000/m
// Information officer Rs. 25000/m
// System analyst Rs. 24000/m
// Programmer Rs. 18000/m
// Make a function that takes two arguments; one salary and the other increment. Use proper default argument.

#include <iostream>
using namespace std;

float convertSalary(float previousSalary, float increament = 12.0)
{
    return previousSalary + (previousSalary * increament) / 100;
}

int main()
{
    float chief = 35000, infoOfficer = 25000, sysAnalyst = 24000, programmer = 18000;
    cout << "Old salary of chief: " << chief << " New salary is " << convertSalary(chief, 9)<<endl;
    cout << "Old salary of infoOfficer: " << infoOfficer << " New salary is " << convertSalary(infoOfficer, 10)<<endl;
    cout << "Old salary of sysAnalyst: " << sysAnalyst << " New salary is " << convertSalary(sysAnalyst)<<endl;
    cout << "Old salary of programmer: " << programmer << " New salary is " << convertSalary(programmer)<<endl;
    return 0;
}