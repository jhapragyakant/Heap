#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> maxh;
        for(int i=l;i<=r;i++){
            maxh.push(arr[i]);
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        return maxh.top();
    }

