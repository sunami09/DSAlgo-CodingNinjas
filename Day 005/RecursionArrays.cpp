#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int n){
    if(n == 0 || n == 1){
        return true;
    }else if(arr[0] > arr[1]){
        return false;
    }else{
        return check(arr + 1, n - 1);
    }
}

int main()
{
    int arr[] = {1,2,3,4,3,6};
    if(check(arr, 6)){
        cout << "Sorted" <<endl;
    }else{
        cout << "Unsorted" << endl;
    }
    return 0;
}