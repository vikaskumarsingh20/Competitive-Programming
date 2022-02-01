 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
     
     std::vector<int > v={2,6,8};
     //IF ANY NUMBER IS NEGATIVE THEN RETURN WHOLE IS NEGATIVE.

     cout<<all_of(v.begin(), v.end(),[](int x) {return x>0;})<<endl;
     //IF ANY NUMBER IS NEGATIVE THEN RETURN WHOLE IS NEGATIVE. 

     cout<<all_of(v.begin(), v.end(),[](int x) {return x%2==0;})<<endl; 
//IF MATCHED ANY NUMBER IS POSITIVE THEN RETURN POSITIVE .

     cout<<any_of(v.begin(), v.end(),[](int x) {return x>0;})<<endl; 
     // IF ANY NUMBER IS NOT PRESENT IS POSITIVE THE RETURN NONE IS HERE.
     
     
     cout<<none_of(v.begin(), v.end(),[](int x) {return x>0;})<<endl; 
 }