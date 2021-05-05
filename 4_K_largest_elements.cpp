#include<bits/stdc++.h>
using namespace std;

vector<int> kLargest(int arr[], int n, int k) {
	    vector<int> ans;
	    priority_queue<int,vector<int>,greater<int>> minh;
	    for(int i=0;i<n;i++){
	        minh.push(arr[i]);
	        if(minh.size()>k){
	            minh.pop();
	        }
	    }
	    while(!minh.empty()){
	        ans.push_back(minh.top());
	        minh.pop();
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}