#include<iostream>
using namespace std;
int main(){
    int op1,op2;
    float r;
    char op;
    cout<<"<<CALCULADORA>>"<<endl;
    cout<<"Primer operando: "; cin>>op1;
    cout<<"Segundo operando: "; cin>>op2;
    cout<<"Operador: "; cin>>op;
    switch(op){
        case '+':
        r=op1+op2;
        cout<<"Resultado: "<<r;
        break;
        case '-':
        r=op1-op2;
        cout<<"Resultado: "<<r;
        break;
        case '*':
        r=op1*op2;
        cout<<"Resultado: "<<r;
        break;
        case '/':
        if(op2!=0){
            r=op1/op2;
            cout<<"Resultado: "<<r;
        } else
            cout<<"Indeterminado";
        break;
        default:
            cout<<"ERROR. Operador desconocido";
        break;
    }
    return 0;
}