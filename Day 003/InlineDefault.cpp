#include<bits/stdc++.h>


using namespace std;



inline int max(int a, int b){
    return (a > b) ? a : b;
}


int main()
{
    int i = 9, j = 90;

    int c = (i > j) ? i : j;

    cout << c << endl;

    c = max(j , i);

    cout << c << endl;

    return 0;
}
/*
90
90
*/