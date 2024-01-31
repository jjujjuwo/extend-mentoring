#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int a,b,x=0,y=0;
    cin>>a>>b;
    for(int i=1; i<=b; i++){
        for(int j=0; j<i; j++){
            y++;
            if(a<=y&&y<=b) x+=i;
        }
    }
    cout<<x;
}
