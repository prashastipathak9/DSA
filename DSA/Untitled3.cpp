//Prashasti Pathak
//Given an unsorted array of integers, design an algorithm and implement it using a program to sort an array of elements by partitioning the array into two subarrays based on a pivot element such that one of the sub array holds values smaller than the pivot element while another sub array holds values greater than the pivot element. Pivot element should be selected randomly from the array. Your program should also find number of comparisons and swaps required for sorting the array.
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int i,int j){
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}

int partition(int *a,int l,int h){
    int i=l-1;
    for(int j=l;j<=h;j++){
        if(a[j]<=a[h]){
            i++;
            swap(a,i,j);
        }
    }
    return i;
}

void quickSort(int *a,int l,int r){
    if(l<r){
        int pi=partition(a,l,r);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,r);
    }
}

void solve(){
    int n, a[n];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
