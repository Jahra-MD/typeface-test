
#include  <iostream>
using namespace std;

int main() {
    string str1,str2;
    cout<<"enter first string"<<endl;
    getline (cin,str1);
    cout<<"enter second string"<<endl;
    getline (cin,str2);
    int n =str1.length();
    int m =str2.length();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(str1[i]==str2[m-1])
        {
            count +=1;
        }
    }
    cout<<count<<endl;
}
