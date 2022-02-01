 #include<bits/stdc++.h>
using namespace std;
int main(){
	 
	 // std::vector<int> v(10,5);
	// std::vector<char> v;
// 	v.push_back(5);
// 		v.push_back(3);
// 	v.push_back(2);
//   cout<<v.back()<<endl;

// for(int i=0;i<v.size();i++){
// 	 	cout<<v[i]<<endl;
// 	 }
// 	string a = "hatti";
// string b = a+a;
// cout << b << "\n"; // hattihatti
// // b[5] = ’v’;
// cout << b << "\n"; // hattivatti
// string c = b.substr(2,4);
// cout << c << "\n"; // tiva
	set<int> s={1,2,3,6,3,4,5,12,24,53,12,3};
// s.insert(3);
// s.insert(2);
// s.insert(10);
// s.insert(21);
// s.insert(5);
// cout << s.count(3) << "\n"; // 1
// cout << s.count(4) << "\n"; // 0
// s.erase(3);
// s.insert(4);
// cout << "count "<<s.count(3) << "\n"; // 0
// cout<<"Erase "<<s.erase(3)<<endl;
//  for(auto x:s)
//  {
//  	cout<<x<<endl;
//  }
//  multiset<int> s;
// s.insert(5);
// s.insert(5);
// s.insert(2);
// s.insert(5);
// s.erase(5);
// cout << s.count(5) << "\n";
// for(auto x:s){
// 	cout<<x<<endl;
// }
	// std::vector<int> v={1,3,5,3,2,6,8,4};
	// sort(v.begin(), v.end());
// reverse(v.begin(), v.end());
// random_shuffle(v.begin(), v.end());

// 	auto it = s.end();
// cout << *it << "\n";
 
//  for (auto it = s.begin(); it != s.end(); it++) {
// cout << *it << "\n";
// }
// 	for(auto x:s){
// 		cout<<x<<endl;
// 	}

// auto it = s.end(); it++;
// cout <<"Largest number:"<< *it << "\n";

  // for(auto vi:v){
  // 	cout<<vi<<endl;
  // }

// ALL THE IMPORTANT SO RECALL THIS AGAIN AND AGAIN *****
// 	int x=10;
// 	auto it = s.lower_bound(x);
// if (it == s.begin()) {
// cout << *it << "\n";
// } else if (it == s.end()) {
// it--;
// cout << *it << "\n";
// } else {
// int a = *it; it--;
// int b = *it;
// if (x-b < a-x) cout << b << "\n";
// else cout << a << "\n";
// }

	//********_______-******** BITSET OPERATION****
// 	bitset<10> a(string("0010110110"));
// bitset<10> b(string("1011011000"));
// cout << (a&b) << "\n"; // 0010010000
// cout << (a|b) << "\n"; // 1011111110
// cout << (a^b) << "\n"; // 1001101110
  
  //PRIORTY QUEUE OPERATION IN C++ STL****
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