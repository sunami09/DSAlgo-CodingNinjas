#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    const int i = 10;

    int const * p = &i;

    cout << &i << endl;

    cout << p << endl;

    cout << *p << endl;

    return 0;
}