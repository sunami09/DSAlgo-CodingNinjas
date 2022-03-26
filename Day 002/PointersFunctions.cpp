#include<bits/stdc++.h>
using namespace std;

void pincr(int* p){
    p = p + 1;
}

int main()
{

    int i = 10;

    int* p = &i;

    cout << p << endl;

    pincr(p);

    cout << p << endl;

    return 0;
}