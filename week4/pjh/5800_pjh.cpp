#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int a,big=0;
    cin>>a;
    for(int i=1; i<=a; i++){
        int y;
        cin>>y;
        int x[y];
        cout<<"Class "<<i<<endl;
        for(int j=0; j<y; j++){
            cin>>x[j];
        }
        sort(x,x+y);
        for (int k=0; k<y-1; k++){
            if((x[k+1]-x[k])>big) big=x[k+1]-x[k];
        }
        cout<<"Max "<<x[y-1]<<", Min "<<x[0]<<", Largest gap "<<big<<"\n";
        big=0;
    }
}
