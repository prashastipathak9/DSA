#include <bits/stdc++.h>
using namespace std;
 
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
 
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main()
{
    int n, arr[n];
	cout<<"Enter array size and elements: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
     
    rvereseArray(arr, 0, n-1);
    cout << "Reversed array is" << endl;
    printArray(arr, n);
     
    return 0;
}
/*using namespace std;
void reverseArray(int a[], int s, int e)
{
	while(s<e)
	{
		int temp= a[s];
		a[s]= a[e];
		a[e]= temp;
		
		s++;
		e--;
	}
}

int main()
{
	int n, a[n];
	cout<<"Enter array size and elements: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	reverseArray(a, 1, n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
	
	return 0;
}*/


