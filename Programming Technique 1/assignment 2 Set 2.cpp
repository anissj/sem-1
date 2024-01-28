#include <iostream>
using namespace std;

int main() 
{
  int n, i,integer, sum;

 cout<< "how many integer are there?"<< endl;
 cin>>n;
 i = 0,
 sum = 0;
 
 cout<< "enter all integer" <<endl;
 
   while (i<n)
   {
     cin>>integer;
     sum = sum + integer;
     i++;
   } 
 
 cout<<"sum = "<< sum << endl;
  
     if (sum % 2 == 0)
     {
       cout<<sum<< " is even number";
     }
     else
     {
       cout<<sum<<" is odd number";
     }
 
 if (sum%4==0 && sum%5==0)
      {
        cout<< " & multiples of 4 and 5" << endl;
      }
    
  else if (sum%4==0)
      {
        cout<< " & multiples of 4";
      }
  else if (sum%5==0)
      {
        cout<< " & multiples of 5";
      }
}