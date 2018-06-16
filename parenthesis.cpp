#include<iostream>
#include<stack>
#include<string.h>

using namespace std;
int main()
{

	int i,flag=0;
	
	char str[100];
	cout<<"enter parenthesis"<<endl;
	cin>>str;
	//cout<<str;
    stack<char>s1;
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='(')
			s1.push(str[i]);
		else if(str[i]==')' && !s1.empty())
			s1.pop();
		else if(str[i]==')' && s1.empty()){
			flag=1; break;
		}
	}
	if(s1.empty() && !flag)
	cout<<"balaced parenthesis"<<endl;
	else
	cout<<"unbalanced parenthesis"<<endl;
	
	
}
	
	//cout<<a;
	/*while(a!=0)
	{
	s1.push(charat())	
	}*/
	
