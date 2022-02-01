 #include<bits/stdc++.h>
  using namespace std;
 
    int main()
    {
    // 	int n;
    // cin>>n;
    // vector<int >v;
    //    v.push_back(1);
    //    v.push_back(6);
    //    v.push_back(10);
    //    v.push_back(8);
    //    v.push_back(4);
    
    // int a=sort(v.begin(),v.end());
    // cout<<a;
     // cout<<sort(2,3);
        // int n;
        // cin>>n;
         int n;cin>>n;
         char str='A';
         for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<str;
                str++;
            }
            cout<<endl;
            str++;
         }
    }