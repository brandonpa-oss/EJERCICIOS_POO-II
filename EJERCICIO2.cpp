#include<iostream>
#include<array>
#include<algorithm>
#include<string>
using namespace std;

int main(){

array<string,12> arr={"Bolivia","Argentina","Brasil","Chile","Colombia","Ecuador","Paraguay","Peru","Uruguay","Venezuela"};

arr.at(10)="Guyana";
arr[11]="Surinam";

cout<<"Imprima solo los paises que inician con C o P."<<endl<<endl;
for(auto x: arr){
if(x[0] =='C' || x[0] =='P'){
    cout<<x<<endl;}
}

cout<<"Imprima el primer y ultimo elemento."<<endl<<endl;
cout<<arr.front()<<endl;
cout<<arr.back()<<endl;

cout<<"Ordene los elementos del grupo e imprima todos sus elementos"<<endl<<endl;

sort(arr.begin(),arr.end());
for(auto x:arr){
    cout<<x<<endl;
}

return 0;
}