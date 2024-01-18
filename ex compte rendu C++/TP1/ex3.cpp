#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"donner les cordonnées de Premier Point"<<endl;
    double xa,ya,xb,yb;

    cout<<"donner l'abscisse :"<<endl;
    cin>> xa;

    cout<<"donner l'ordonnée :"<<endl;
    cin>> ya;

    cout<<"donner les cordonnées de Deuxième Point"<<endl;

    cout<<"donner l'abscisse :"<<endl;
    cin>> xb;

    cout<<"donner l'ordonnée :"<<endl;
    cin>> yb;
    double d=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));

    cout<<"La distance est : "<<d;
}
