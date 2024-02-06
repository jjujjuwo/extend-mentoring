#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x,temp;
    cin>>x;
    vector<int> v(x);
    for(int i=1; i<=x; i++){
        v[i-1]=i;
    }
    while(v.size()!=1){
        v.erase(v.begin());
        for(int j=0; j<v.size()-1; j++){
            temp=v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
        }
    }
    cout<<v[0];
}//queue 에 대해 몰라서 만들었던 코드(시간 초과)
#include <iostream>
#include <queue>
using namespace std;

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    queue<int> q;
    int a;
    cin>>a;
    for(int i=1; i<=a; i++){
        q.push(i);
    }
    while(q.size()!=1){
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout<<q.front();
}//queue 사용 및 답지 참조
