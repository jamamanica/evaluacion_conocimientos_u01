#include<iostream>
using namespace std;

int suma(int a);
int factorial(int b);

int main(){
    int n,sum;
    cout<<"Valor de n: "; cin>>n;
    sum=suma(n);
    cout<<"La sumatoria es: "<<sum;
    return 0;
}
int factorial(int b){
    int f=1;
    for(int j=2;j<=b;j++){
        f=f*j;
    }
    return f;
}
int suma(int a){
    float s=0;
    for(int i=1;i<=a;i++){
        s=s+(float(factorial(i))/(2*i));
    }
    return s;
}