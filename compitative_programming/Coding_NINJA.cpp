#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;cin>>n; // int n;cin>>n; //  int count=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count++ +i;
    //         // count++;
    //     }
    //     cout<<endl;
    // }
    // int i=1;int sum=1; int n;cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while (j<=i)
    //     {
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i+=1;
        
    // }
 
    for (int i = 1; i <<= n; i++)
    { 
        for (int j = 1; j <= n - 1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

}
