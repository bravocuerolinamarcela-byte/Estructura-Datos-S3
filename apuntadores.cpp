#include <iostream>
using namespace std;
int x = 5;
int *apuntador;
int array[5] = { 10, 20, 30, 40, 50};

int main(){
    //cout<<"X tiene un valor de: "<<x<<endl;
    //cout<<"Array en su posición sup-0 tiene un valor de: "<<array[0]<<endl;
    //cout<<"Array en su posición sup-1 tiene un valor de: "<<array[1]<<endl;
    //cout<<"Array[0] : "<<&array[0]<<endl;
    //cout<<"Array[1] : "<<&array[1]<<endl;
    //cout<<"Array[2] : "<<&array[2]<<endl;
    //cout<<"X tiene un valor de: "<<x<<endl;
    apuntador = &array[10];
    cout<<"Apuntador tiene un valor de: "<<apuntador<<endl;
    return 0;