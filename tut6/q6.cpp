//question 6

#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string "<<endl;
    getline(cin,s);
    int l = s.length();
    char* ptr = &s[0];
    for(int i=0;i<l;i++)
	{		
		for(int j=i+1;j<l;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				char a  =*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=a;
			}
		}
	}
 cout<<"\nString in Ascending Order: "<<s;
 cout<<endl;
 return 0;
}