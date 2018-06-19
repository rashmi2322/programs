#include<iostream>
#include<algorithm>
using namespace std;


int binary_search(int arr[],int l,int r,int value)
{
	
while(l<=r)
{
	int mid=l+((r-l)/2);
if(arr[mid]==value)
{

   // cout<<"mid"<<mid<<endl;
	return mid;	

}
else if(value>arr[mid])

	return binary_search(arr,mid+1,r,value);
	else
	return binary_search(arr,l,mid,value);
}
}

void frequency(int arr[],int l,int r,int no,int pos)
{
	int	c = 1;
    int left = pos-1;
    int right =pos+1;
    while (left >= 0 && arr[left] == no)
    {
		c=c+1;
		left=left-1;
	//	cout<<"left "<<c<<endl;
	}
     // cout<<"left "<<c<<endl;  
   // int right =pos+1;
    while (right<r && arr[right] == no)
    {
		c=c+1;
		right=right+1;
		
	}
	//cout<<"right"<<c<<endl;
	cout<<"FREQUENCY OF "<<no<<" is "<<c<<endl;
	
}

int main()
{
	int arr[100],i,n,no,a;
	cout<<"Enter array size"<<endl;
	cin>>n;
	cout<<"Enter array elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number whose frequency is to be counted"<<endl;
	cin>>no;
sort(arr,arr+n);
	a=binary_search(arr,0,n-1,no);
	if(a==-1)
	{
		
		cout<<"not present"<<endl;
		
	}
 
	else
		frequency(arr,0,n-1,no,a);

}
