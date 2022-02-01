#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n>1)
       return(fibonacci(n-1)+fibonacci(n-2));
else
return 1;
}
int main(){ 
    int n,i;
    cout<<"Enter the nmber:"<<endl;
    cin>>n;
    cout<< "fibonacci is of "<< n<< "= "<<fibonacci(n)<<endl;
    cout<<"squareRoot:"<<sqrt(n)<<endl;
    cout<<"power:"<<pow(n,i)<<endl;
    // int i=[1,2,3,4,2,4,6,3,8,98,6]
    // cout<<sort(i)<<endl; 
}
