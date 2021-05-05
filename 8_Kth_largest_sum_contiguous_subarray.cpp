#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n,int k){
    int sum[n+1];
    sum[0] = 0;
    sum[1] = arr[0];
    for(int i=2;i<=n;i++){
        sum[i] = sum[i-1] + arr[i-1];
    }
    priority_queue<int,vector<int>,greater<int>> minh;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int x = sum[j] - sum[i-1];      // way to get contiguous sum in O(n^2)
            minh.push(x);
            if(minh.size()>k){
                minh.pop();
            } 
        }
    }
    return minh.top();
}

int main(){
    int arr[] = {10, -10, 20, -40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =6;
    cout << solve(arr,n,k);
}