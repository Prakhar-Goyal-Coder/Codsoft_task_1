#include<iostream>
#include<random>
using namespace std;
int main(){
    int x = rand() %100+1;
    cout<<"guess a number"<<endl;
    
    while(true){
        int y;
        cin>>y;
        
        if(y>x) cout<<"too high"<<endl;
        else if(y==x){ 
            cout<<"correct";
            break;
        }
        else cout<<"too low"<<endl;

    }
    return 0;
}

