// Datatype -- int*, float*, string*

// address of a variable -- &p


// value of pointer - p -- *p 


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    // int i = 10;

    // cout<<&i<<endl;

    int i = 9;
    int* p = &i;

    i++;
    (*p)++;
    cout << p << endl;

    cout<< *p <<endl;

    cout<< &p <<endl;

    return 0;
}