#include<iostream>
using namespace std;
int main(){
    int op1,op2,r;
    char op;
    cout<<"Primer operando: "; cin>>op1;
    cout<<"Segundo operando: "; cin>>op2;
    cout<<"Operador: "; cin>>op;
    switch(op){
        case '+':
        r=op1+op2;
        break;
        case '-':
        r=op1-op2;
        break;
        case '*':
        r=op1*op2;
        break;
        case '/':
        r=op1/op2;
        break;
    }
    cout<<"Resultado: "<<r<<endl;
    return 0;
}