#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"donner les cordonn�es de Premier Point"<<endl;
    double xa,ya,xb,yb;

    cout<<"donner l'abscisse :"<<endl;
    cin>> xa;

    cout<<"donner l'ordonn�e :"<<endl;
    cin>> ya;

    cout<<"donner les cordonn�es de Deuxi�me Point"<<endl;

    cout<<"donner l'abscisse :"<<endl;
    cin>> xb;

    cout<<"donner l'ordonn�e :"<<endl;
    cin>> yb;
    double d=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));

    cout<<"La distance est : "<<d;
}
