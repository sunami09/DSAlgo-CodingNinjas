#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[] = {1,2,3};
    char c[] = "abc";

    cout << a << endl;

    cout << c << endl;

    char* b = c;

    cout << b << endl;

    char k = 'a';

    char* g = &k;

    cout << k << endl;

    cout << g << endl;

    return 0;
}