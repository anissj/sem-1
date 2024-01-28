#include <iostream>
using namespace std;

int main() 
{
  int n, i,integer, ans;

 cout<< "how many integer are there?"<< endl;
 cin>>n;
 i = 0,
 ans = 1;
 
 cout<< "enter all integer"<<endl;
 
  do
   {
     cin>>integer;
     ans = ans * integer;
     i++;
   } while (i<n);
 
 cout<<"ans = "<< ans << endl;
  
     if (ans % 2 == 0)
     {
       cout<<ans<< " is even number";
     }
     else
     {
       cout<<ans<<" is odd number";
     }
 
 if (ans%3==0 && ans%5==0)
      {
        cout<< " & multiples of 3 and 5" << endl;
      }
    
  else if (ans%3==0)
      {
        cout<< " & multiples of 3";
      }
  else if (ans%5==0)
      {
        cout<< " & multiples of 5";
      }
}