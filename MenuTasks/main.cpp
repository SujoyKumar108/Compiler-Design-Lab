#include <iostream>
#include "labTask1.h"
#include "labTask2.h"
#include "labTask3.h"
#include "labTask4.h"
#include "labTask5.h"
#include "labTask6.h"
#include "labTask7.h"
using namespace std;

int main()
{
    cout << "Here is the List of the Tasks: " << endl;
    cout << "Task 1 - Numeric Constant Or Not" <<endl;
    cout << "Task 2 - Operators Or Not" <<endl;
    cout << "Task 3 - Single Comment Or Multiple Comments" <<endl;
    cout << "Task 4 - Identifier Checker" <<endl;
    cout << "Task 5 - Average Value" <<endl;
    cout << "Task 6 - Min And Max Value" <<endl;
    cout << "Task 7 - Concatenate Your Name" <<endl;
    cout << endl;

    int t;
    cout << "Enter Your Action Time: ";
    cin >> t;

    while( t--)
    {
        int x;
        cout << "Enter Your Task No: ";
        cin >> x;

        switch (x)
        {
        case 1:
            labTask1();
            cout << endl;
            break;
        case 2:
            labTask2();
            cout << endl;
            break;
        case 3:
            cin.ignore();
            labTask3();
            cout << endl;
            break;
        case 4:
            labTask4();
            cout << endl;
            break;
        case 5:
            labTask5();
            cout << endl;
            break;
        case 6:
            labTask6();
            cout << endl;
            break;
        case 7:
            labTask7();
            cout << endl;
            break;
        default:
            cout << "Enter Correct Task No"<< endl;
            break;
        }

    }

    return 0;
}
