#include <iostream>
#include <queue>
using namespace std;

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    queue<int> q;
    int x,z;
    string y;
    cin >> x;
    
    for(int i=0; i<x; i++){
        
        cin>>y;
        if (y == "push") {
			cin >> z;
			q.push(z);
		}
        else if(y=="pop"){
            if (q.size() == 0) {
				cout <<-1<<"\n";
			}
            else{
            cout<<q.front()<<"\n";
            q.pop();
            }
        }
        else if(y=="size"){
            cout<<q.size()<<"\n";
        }
        else if(y=="empty"){
            if (q.size() == 0){
                cout <<1<<"\n";
            }
            else cout<< 0 <<"\n" ;
        }
        else if(y=="front"){
            if (q.size() == 0) {
				cout <<-1<<"\n";
			}
            else{
            cout<<q.front()<<"\n";
            }
        }
        else if(y=="back"){
            if (q.size() == 0) {
				cout <<-1<<"\n";
			}
            else{
            cout<<q.back()<<"\n";
            }
        }
    }
}
