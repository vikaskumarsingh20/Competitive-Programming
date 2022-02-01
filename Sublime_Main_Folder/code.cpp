#include<bits/stdc++.h>
using namespace std;

int main(){
	// char a='aaaa';

	// string str="hello";
	// cout<<str<<endl;

	// string str1;
	// cin>>str1;
	// cout<<str1<<endl;
	// string result=str+str1;
	// cout<<result;
	// if(str==str1){
	// 	cout<<"equal:"<<endl;
	// }
	// else{
	// 	cout<<"not equal:"<<endl;
	// }

	 // string str1 ;
	 // string str2;
	 // getline(cin,str1);
	 // cout<<str1;
// int t;
// cin>>t;
// cin.ignore();
// while(t--){
// 	string s;
// 	getline(cin,s);
// 	cout<<s<<endl;
// }
	

	//PALINDROME PROGRAM WITH LESS TIME COMPLEXITY
	// string str;
	// cin>>str;
	// string reverse;
	// for(int i=str.size()-1;i>=0;--i ){
	// 	reverse.push_back(str[i]);
	// }
	// if(str==reverse){
	// 	cout<<"YES:";
	// }
	// else{
	// 	cout<<"NO:";
	// }
// 	queue<int> q;
// q.push(3);
// q.push(2);
// q.push(5);
// cout << q.front()<<endl; // 3
// q.pop();
// cout << q.front()<<endl;
//  int n;
// std::vector<int > v;
//  for (int i = 0; i < 10; ++i)
//  {
//  	 v.push_back(i);
//  }
//  for(auto print :v){
//  	cout<<print<<endl;
//  }

 // std::vector<int> v={1,4,3,4,55,6};
 //  sort(v.begin(), v.end());
 // reverse(v.begin(), v.end());
 // random_shuffle(v.begin(), v.end());
// for(auto print :v){
// 	cout<<print<<endl;
//    }
priority_queue<int> q;
q.push(3);
q.push(5);
q.push(7);
q.push(2);
cout << q.top() << "\n"; // 7
q.pop();
cout << q.top() << "\n"; // 5
q.pop();
q.push(6);
cout << q.top() << "\n"; // 6
q.pop();
}
