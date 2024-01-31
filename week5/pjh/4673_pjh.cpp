#include <iostream>
#include<algorithm>
using namespace std;
int d(int a){
    int sum=0;
    while(a != 0) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
int main() {
    int arr[10001]={};
    for(int i=1; i<=10000; i++){
        int x=d(i)+i;
        if(x<=10000) arr[x]=1;
    }
    for(int j=1; j<=10000; j++){
        if(arr[j]==0) cout<<j<<"\n";
    }
}
