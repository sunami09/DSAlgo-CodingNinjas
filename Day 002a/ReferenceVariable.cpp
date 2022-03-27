#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i = 10;
    int& j = i;

    cout << j << endl;

    int k = 50;

    j = k;

    cout << j << endl;

    k = 70;

    cout << j << endl;

    cout << i << endl;

    return 0;   
}
/*
10
50
50
50
*/