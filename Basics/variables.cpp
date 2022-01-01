#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no_of_projects; // Variable Declaration
    // We can also declare and intialize variable in one line like this
    // int a = 5;
    // Variables are just containers for data
    // data can be anything object,string, number and booleans, etc.
    // In memory a particular amount of memory is assigned to variable
    // that you created based on its type and given a address value
    // which is completely random and is in hexadecimal form.
    cout << "User input: ";
    cin >> no_of_projects; // cout is object of istream class which is used to take input from user.

    cout << &no_of_projects << endl;

    cout << "You have currently " << no_of_projects << " projects in your Resume." << endl;
    // You can also use variables in cout to print them.

    return 0;
}

// Output
// User input: 30
// 0x7fff051df9e4 // this address can be random.
// You have currently 30 projects in your resume.