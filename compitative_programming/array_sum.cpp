#include<bits/stdc++.h>
using namespace std;
int main()
{ int sum = 0,i; int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    for ( i = 1; i < n; i++)
    {
        if (arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    int rem = sum % arr[i];
    cout << rem;

}