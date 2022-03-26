#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int  i = 10;

    int* p = &i;

    int** q = &p;
    cout << p << endl;
    cout << q << endl;
    cout << **q <<endl;
    return 0;
}
/*
0x61ff08
0x61ff04
10
*/