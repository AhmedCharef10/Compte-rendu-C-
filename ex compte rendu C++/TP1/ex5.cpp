#include <iostream>
#include <cmath>
using namespace std;
double racinCarre(double x,bool &OK){
    if ((x - 1) * (2 - x) >= 0) {
        OK = true;
        return sqrt((x - 1) * (2 - x));
    } else {
        OK = false;
        return 0.0;
}

}
int main(){
    double x=1;
    bool OK;
    double res = racinCarre(x, OK);
    if(OK){
         cout << "La fonction est définie avec la valeur : " << res << endl;
    }
    else{
        cout << "La fonction n'est pas définie "<< endl;
    }
    x=0.2;
    res = racinCarre(x, OK);
    if(OK){
         cout << "La fonction est définie avec la valeur : " << res << endl;
    }
    else{
        cout << "La fonction n'est pas définie "<< endl;
    }


}
