//Code for finding the queue if by every person, the information about his left and right person is given.
#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <set>
using namespace std;

map <long  ,long > back,front,mr,ml;
set <long > s;

int main()
{
   long n,a,b,i,j,k,s1;
   back.clear();
   front.clear();
   cin>>n;
   long q[n];
   std::set < long > ::iterator it,st;
   if(n%2==0)
   {
      for(i=0;i<n;i++)
      {
         cin>>a>>b;
         back[a]=b;
         front[b]=a;
      }
      
      j=0;
      for(i=1;i<n;i+=2)
      {
      	q[i]=back[j];
      	//back.erase(j);
      	j=q[i];
      }

      j=0;
      for(i=n-2;i>=0;i-=2)
      {
      	q[i]=front[j];
      	//front.erase(j);
      	j=q[i];
      }


   }


   else
   {
      for(i=0;i<n;i++)
      {
      	cin>>a>>b;
      	back[a]=b;
      	front[b]=a;
      	s1=s.size();
      	s.insert(a);

      	if(s1==s.size())
      		s.erase(a);
        
        s1=s.size();
      	s.insert(b);

      	if(s1==s.size())
      		s.erase(b);

      }
      
      j=0;
      for(i=1;i<n;i+=2)
      {
      	q[i]=back[j];
      	back.erase(j);
      	j=q[i];
      }
    
     it=s.begin();
     j=*it;
     // cout<<endl;
     // for(st=s.begin();st!=s.end();st++)
     //  {
     //    cout<<*st<<" ";
     //  }

     if(back.find(j)==back.end())
     {
     	it++;
     	j=*it;
     }
     for(i=0;i<n;i+=2)
     	{
     		q[i]=j;
     		j=back[j];

     	}


   }
   
  for(i=0;i<n;i++)
  printf("%ld ",q[i]);
  

	return 0;

}
