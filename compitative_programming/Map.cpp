#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int > m;//-****syntax and declaration****
    int n;
    cout<<"Enter digts: and string ";
    cin>>n;
    for( int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

//***Simple code for binneing levels and declareation****
    // map<int ,string>m;
    // m[1]="vikas";
    // m[4]="kumar ";
    // m[6]="singh";
    // m.insert({5,"rajpoot"});
    // m.insert({7,"RD Engineering:"});
    // for(auto a:m){
    //     cout<<a.first<<" "<<a.second<<endl;
    // }
}