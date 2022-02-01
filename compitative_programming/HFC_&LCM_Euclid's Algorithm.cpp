// #include<bits/stdc++.h>
// using namespace std;
//   int gcd(int a, int b){
//       if(b==0) return a;
//       return gcd(b,a%b);
//   }
// int main(){ 
//   cout<<"Enter your value for LCM % GCD"<<endl;
//    int a, b;
//    cin>>a>>b;
//     cout << gcd(a,b)<< endl; 
//     cout<<"GCD="<<__gcd(a,b)<< endl;
//     cout<<"LCM ="<<a*b/gcd(a,b)<< endl;
//     cout<<gcd(a,b)<<" "<<((a*b)/gcd(a,b))<<endl;
// }

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main()
{
  unsigned long long t = 0;
  cin >> t;

  while (t--)
  {
    int a = 0, b = 0;
    cin >> a >> b;
    cout << gcd(a, b) << " " << ((a * b) / gcd(a, b)) << endl;
  }
  return 0;
}