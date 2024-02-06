#include <iostream>
#include <deque>
using namespace std;

int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    deque<int> q;
    int x,z;
    string y;
    cin >> x;
    
    for(int i=0; i<x; i++){
        
        cin>>y;
        if (y == "push_front") {
			cin >> z;
			q.push_front(z);
		}
        else if (y == "push_back") {
			cin >> z;
			q.push_back(z);
		}
        else if(y=="pop_front"){
            if (q.size() == 0) {
				cout <<-1<<"\n";
			}
            else{
            cout<<q.front()<<"\n";
            q.pop_front();
            }
        }
        else if(y=="pop_back"){
            if (q.size() == 0) {
				cout <<-1<<"\n";
			}
            else{
            cout<<q.front()<<"\n";
            q.pop_back();
            }
        }
        else if(y=="size"){
            cout<<q.size()<<"\n";
        }
        else if(y=="empty"){
            if (q.empty() == 1){
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
}//분명 틀린게 없다고 생각하고 vscode에서는 정상 작동하는데 백준에서는 계속 틀렸다고 하는데 어디에서 반례가 생기는지 이해가 안가는 부분
