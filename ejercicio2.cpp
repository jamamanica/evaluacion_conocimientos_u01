#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"<<PESI>>"<<endl;
    cout<<"Primer numero: "; cin>>n1;
    cout<<"Segundo numero: "; cin>>n2;
    int c=0;
    for(int i=1;i<=n1&&i<=n2;i++){
        if(n1%i==0&&n2%i==0){
            c++;
        }
    }
    if(c>1){
        cout<<"No son PESI";
    } else 
        cout<<"Son PESI";
    return 0;
}