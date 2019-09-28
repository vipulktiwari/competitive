#include <iostream>
using namespace std;

void solve(int a[],int s, int n){
    int i=0,j=0,sum=0;
    sum =a[j];
    for(i = 1; i< n; i++){
        sum += a[i];
        while(sum > s){
            sum -= a[j];
            j++;
        }
        if(sum == s){
            break;
        }
    }
    if (sum == s){
        cout<<j+1<<" "<<i+1<<endl;    
    }else{
        cout<<-1<<endl;
    }
}

int main() {
	//code
    int testcases;
    cin>>testcases;
    for(int i = 0; i<testcases; i++){
        int s,n;
        cin>>n>>s;
        int a[s];
        for(int i =0; i< n; i++){
            cin>>a[i];
        }

        solve(a,s,n);
    }

	return 0;
}