/* Write a program that asks the user time in minutes and then
reprint it to the screen in hours and minutes. */
#include<iostream>
using namespace std;
int main()
{
    double timeMinutes, timeHours;

    cout << "Please enter the time in minutes: ";
    cin >> timeMinutes;
    
    timeHours = timeMinutes/60;
    cout << "The time in hours is " << timeHours << endl;

    return 0;
}