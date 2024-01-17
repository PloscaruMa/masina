#include <iostream>
#include<cstring> 

 using namespace std ; 
class masina_electrica {
public:
int an_fabricatie ;
int nivelBaterie ; 
string tip_baterie ; 

masina_electrica () {  // constructor implicit 
  an_fabricatie = 0 ; 
    nivelBaterie = 0 ;   
   km = 2030 ; 
   model=" " ; 
  tip_baterie = " " ;
  marca= " " ; 
}
masina_electrica (string _model, string _marca) : masina_electrica() { // constructor cu parametri
  model=_model;  
  marca= _marca; 

}
protected: 
 string marca; 
private : 
int km ; 
string model ; 
} ; 

int main() {
   masina_electrica masina_personala; 

 masina_electrica masina_de_lucru ("BMW", "X5") ; 
}