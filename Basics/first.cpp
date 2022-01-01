#include <bits/stdc++.h>
// Preprocessor - which gets executed before the main function
// and gives the necessary code we need like cout, cin, endl and vectors and many more.
// bits/stdc++.h files include all the Standard template library and as a beginner it's ok
// to include this file, but for performance and optimization it is a bad practice
// we should only include the files we need.

using namespace std;
// Namespaces are used to avoid naming conflicts between the functions with same name;

int main() // Main function is the crux of any C/C++ program all execution of code starts from here.
{
    cout << "Hello world" << endl; // cout is just object of ostream class which is used to output some thing to console.

    for (int i = 0; i < 6; i++)
    {
        cout << i << " "; // endl is also object of ostream class which is used to insert a new line characters and flushes the stream.
    }

    return 0; // return type should always match with function type
    // if we don't include it here, compiler does it for us implicitly.
}

// Output
// Hello world
// 0 1 2 3 4 5