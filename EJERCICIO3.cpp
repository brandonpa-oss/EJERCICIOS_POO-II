#include<iostream>
#include<array>
#include<fstream>
using namespace std;

class Estudiante{
private:
string nombre;
int a_nacimiento;
double promedio;
int edad;
public:
Estudiante(){
    nombre="";
    a_nacimiento=0;
    promedio=0;
    edad=0;
}
Estudiante(string nombre_,int a_nacimiento_,double promedio_){
    nombre=nombre_;
    a_nacimiento=a_nacimiento_;
    promedio=promedio_;
    edad=2026-a_nacimiento;
}
void setEstudiante(){
    cout<<"Ingrese el nombre del Estudiante:";cin>>nombre;
cout<<"Ingrese el anio de nacimiento:";cin>>a_nacimiento;
a_nacimiento=validarAnio(a_nacimiento);
cout<<"Ingrese el Promedio:"; cin>>promedio;
promedio=validarPromedio(promedio);
edad=2026-a_nacimiento;
}
double getPromedio(){
    return promedio;
}
string getNombre(){
    return nombre;
}
double validarPromedio(double num){
    while(num<0 || num>4 || cin.fail()){
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"Ingrese un numero que se encuentre en el rango de 0-4"<<endl;
        cin>>num;}
        return num;}

int validarAnio(int a){
    while(a<2000 || a>2008 || cin.fail()){
            cin.clear();
            cin.ignore(1000,'\n');
        cout<<"Ingrese un anio valido entre 2000-2008"<<endl;
            cin>>a;}
    return a;
}
void mostrar(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Anio de nacimiento:"<<a_nacimiento<<endl;
    cout<<"Promedio:"<<promedio<<endl;
    cout<<"Edad:"<<edad<<endl;
}

};
void Llenar(array<Estudiante,10> &arr){
    ifstream leer("Datos.txt");
        string nom;
        int anio;
        double prom;
        for(int i=6;i<10;i++){
            leer>>nom>>anio>>prom;
            arr.at(i)=Estudiante(nom,anio,prom);

        }
        leer.close();
    
}
void Califican(array<Estudiante,10> &arr){
for(auto x: arr){
    if(x.getPromedio()>=3.5){
        cout<<"El estudiante "<<x.getNombre()<<" tiene un promedio de "<<x.getPromedio()<<" "<<":Clasifico"<<endl;
    }
}
}

int main(){
array<Estudiante,10> arr={Estudiante("Juan",2000,3.4),Estudiante("Maria",2005,2.8)};
array<string,3> nombres = {"Gaby", "Patty", "Diana"}; 
array<int,3> nacimientos={2002, 2004, 2006}; 
array<double,3> gps={3.8, 3.0, 2.9};

//cout<<"Inserte el tercer y cuarto elemento usando los datos ingresados desde el teclado."<<endl<<endl;
arr.at(2).setEstudiante();
arr.at(3).setEstudiante();

//cout<<"Inserte el quinto y sexto elemento usando los datos de los siguientes arrays basicos:"<<endl<<endl;
arr.at(4)=Estudiante(nombres.at(0),nacimientos.at(0),gps.at(0));
arr.at(5)=Estudiante(nombres.at(1),nacimientos.at(1),gps.at(1));

//cout<<"Inserte los elementos restantes usando los datos contenidos en un archivo txt"<<endl<<endl;

Llenar(arr);

for(auto x: arr){
    x.mostrar();
}
Califican(arr);

return 0;
}