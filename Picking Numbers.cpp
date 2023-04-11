#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int pickingNumbers(vector<int> a) {
    sort(begin(a), end(a));
    int maxLenght=0;
    for (int i=0; i<a.size(); i++){
        vector<int> arr;
        arr.push_back(a[i]);
        for (int j=i+1; j<a.size(); j++){
            if (abs(a[i]-a[j])<=1){
                arr.push_back(a[j]);
            }
        }
        if (arr.size()>maxLenght){
            maxLenght = arr.size();
        }
    }
    return maxLenght;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    cout<<pickingNumbers;
    return 0;
}
