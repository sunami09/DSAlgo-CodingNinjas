#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> & arr, int n){
    if(n == 0){
        return arr[0];
    }else{
        return arr[n] + sum(arr, n - 1);
    }
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    cout << sum(arr, 4) << endl;
    return 0;
}