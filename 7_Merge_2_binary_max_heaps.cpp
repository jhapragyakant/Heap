#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
    int lar = i;
    int l = 2*i+1;
    int r = 2*i+2;
    
    if(l<n && arr[l]>arr[lar]){
        lar = l;
    }
    if(r<n && arr[r]>arr[lar]){
        lar = r;
    }
    if(lar!=i){
        swap(arr[i],arr[lar]);
        heapify(arr,n,lar);
    }
}

void buildHeap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}

// the idea here is to copy the two heaps in one heap and then build the new heap itself

void mergeHeaps(int arr[], int a[], int b[], int n, int m) {
    for(int i=0;i<n;i++){
        arr[i]=a[i];
    }
    for(int i=0;i<m;i++){
        arr[n+i] = b[i];
    }
    buildHeap(arr,n+m);
}