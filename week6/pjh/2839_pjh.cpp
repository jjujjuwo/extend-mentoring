#include <iostream>
using namespace std;

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a,count=0;
    cin>>a;
    while(a>=0){
        if(a%5==0){
            count=count+a/5;
            a/=5;
            break;
        }
        a-=3;
        count++;
    }
    if(a<0) cout<<-1;
    else cout<<count;
}//솔직히 형꺼 참조함..🥲
