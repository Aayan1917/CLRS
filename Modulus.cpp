// Based on Modulus of Number(string) whose length is upto 10^6 
#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <set>
using namespace std;
# define max  1000003
int a[max],b[max];
int main()
{
   string s;
   int n1,n2,i,p;
   cin>>s;
   cin>>n1>>n2;
   int n=s.length();
   
   for(i=0;i<n;i++)   
        a[i+1]= (a[i]*10+ (s[i]-'0')) %n1;
   for(i=n-1, p=1; i>=0;i--, p=(p*10)%n2 )
        b[i]=(b[i+1] + p*(s[i]-'0'))%n2; 
   for(i=1;i<n;i++)
   {
    if(a[i]==0 && b[i]==0 && s[i]!='0')
    {
      cout<<"YES"<<endl;
      cout<<s.substr(0,i)<<endl<<s.substr(i,n-1);
      return 0;
    }
   }  
   cout << "NO" << endl;
    return 0;
  
  
}