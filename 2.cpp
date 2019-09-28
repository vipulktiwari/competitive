/* Kadale's Algorithm
   find the contigous array with max sum
*/
#include<iostream>
using namespace std;

void maxSum(int a[],int n){
    int maxSum,curSum=0;
    maxSum = a[0];
    curSum = a[0];
    for(int i = 1; i< n; i++){
        if (curSum < 0){
            curSum = 0;
        }
        curSum += a[i];
        if (curSum > maxSum){
            maxSum = curSum;
        }
    }
    cout<<maxSum<<endl;
}
int main(){
    int testcases,i,n;

    cin>>testcases;

    for (i=0; i<testcases; i++){
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        maxSum(a,n);
    }
    return 0;
}