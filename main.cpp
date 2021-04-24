#include <iostream>
using namespace std;

int main() 
{
 int Idade;
 cout<<"Favor informar sua idade: ";
 cin>>Idade;
 cout<<endl;

 //Condição
 if(Idade >= 18){
  cout<<"Categoria Adulta"<<endl;
 }else if(Idade >= 14){
   cout<<"Categoria Juvenil"<<endl;
 }else if(Idade >= 9){
   cout<<"Categoria Ifantil"<<endl;
 }else{
   cout<<"Categoria Mirim"<<endl;
 }
 return 0; 
}