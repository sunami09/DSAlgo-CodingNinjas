#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int  i = 65;

    int * p = &i;

    char * c = (char*)p;

    cout << *c <<endl;
    cout << *p <<endl;
    cout << c[0] <<endl;
    cout << c[1] << endl;
    cout << c[2] << endl;
    cout << c[3] << endl;
    return 0;
}
/*
A
65
A



*/