// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n,i,res;
    cout<<"enter the decimal value \n";
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        if(n<pow(3,i))
        {
            break;
        }
    }
     for(i=i-1;i>=0;i--)
     {
            if((n-pow(3,i)) >= 0)
            {   cout<<1;
                res =n -pow(3,i);
            }
            else
                 cout<<0;
            n =res;
     }
        
}

