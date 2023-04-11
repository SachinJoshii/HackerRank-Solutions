#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> frequencies(6, 0);
    for (int i=0; i<arr.size(); i++){
        frequencies[arr[i]]++;
    }
    int maxFrequency=0, maxType=0;
    for (int i=1; i<=5; i++){
        if (frequencies[i]>maxFrequency){
            maxFrequency = frequencies[i];
            maxType = i;
        }
    }
    cout<<maxType;
    return 0; 
}
