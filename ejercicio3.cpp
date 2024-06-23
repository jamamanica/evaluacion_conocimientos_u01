#include<iostream>
using namespace std;

void suma(int a);
int factorial(int b);

int main(){
    int n,sum;
    cout<<"<<SUMATORIA>>"<<endl;
    cout<<"Numero natural para el valor de n: "; cin>>n;
    if(n>0){
        suma(n);
    } else
        cout<<"ERROR. Numero no valido";
    return 0;
}
int factorial(int b){
    if(b==0){
        b=1;
    } else
        b=b*factorial(b-1);
    return b;
}
void suma(int a){
    float s=0;
    for(int i=1;i<=a;i++){
        s=s+(float(factorial(i))/(2*i));
    }
    cout<<"La sumatoria es: "<<s;
}