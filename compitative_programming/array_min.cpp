#include<bits/stdc++.h>
 using namespace std;
 
int main() {
	 
	 int n;
	 cin>>n;
	 //vector<int> v(n);
     int v[n];
	 for( int i=0;i<n;i++){
	     cin>>v[i];
	 }
     // ELEMNENT FIND MINIMUM****
	 int min= * min_element(v,v+n);
	 cout<<"min_element: "<<min<<endl;
} 