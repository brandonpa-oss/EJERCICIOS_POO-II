#include<iostream>
#include<array>
#include <algorithm>
using namespace std;


int main(){

array<int,20> arr={21,27,25,43,37,89,69,91,77,85,99,63,97,51,55,1,19,3,9,15};
array<int,20> arr_c;

arr_c=arr;
cout<<"IMPRIMIENDO TODOS LOS ELEMENTOS"<<endl;
for(auto x: arr){
    cout<<x<<endl;    
}
cout<<"IMPRIMIENDO LOS NUMERO MAYORES A 20 Y MENORES A 50"<<endl;
for(auto x:arr){
    if(x>20&&x<50){
        cout<<x<<endl;
    }
}

cout<<"ORDENANDO EL ARREGLO"<<endl;
sort(arr_c.begin(),arr_c.end());  
for(auto x:arr_c){
cout<<x<<endl;
}
cout<<"IMPRIMIENDO LOS NUMEROS DE LOS INDICES IMPARES MENORES A 10 DEL ARREGLO ORIGINAL"<<endl;
int i=1;
while(i<10){
if(i%2!=0){
    cout<<i<<"->"<<arr.at(i)<<endl;
}
i++;
}
    return 0;
}