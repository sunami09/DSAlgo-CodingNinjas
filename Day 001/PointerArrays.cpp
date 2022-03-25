#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    cout << p << endl;
    p = &arr[0];
    cout << p << endl;
    cout<< 4[arr] << endl;
    cout << &arr << endl;
    return 0;
}

/*
0x61fef8
0x61fef8
5
0x61fef8
*/