#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<double> student_marks(20);
 
    for (vector<double>::size_type i = 0; i < 3; i++)
    {
        cout << "Enter marks for student #" << i+1 
             << ": " << flush;
        cin >> student_marks[i];
    }
    for 
    // ... Do some stuff with the values
 
    return 0;
}
