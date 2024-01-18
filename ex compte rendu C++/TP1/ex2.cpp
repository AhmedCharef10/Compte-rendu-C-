#include <iostream>
using namespace std;
int main(){
    cout<<"donner 10 entiers"<<endl;
    int i,x,y;
    cout<<"donner l'entier n° 0"<<endl;
    cin>>x;
    int min=x;
    for(i=1;i<10;i++){
        cout<<"donner l'entier n°"<<i<<endl;
        cin>>y;
        if(min>y){
            min=y;
        }

    }
    cout<<"Le petit entier est :"<<min<<endl;
}
