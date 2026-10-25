#include<iostream>
using namespace std;
class Vehicule{
protected:
    string immatriculation,marque;
    int vitesseMax;
public:
   Vehicule(string immatriculation,string marque, int vitesseMax){
    this->immatriculation = immatriculation;
    this->marque = marque;
    this->vitesseMax = vitesseMax;
   }
   virtual void afficherDetails(){
    cout<<" immatriculation : "<<immatriculation<<" marque :"<<marque<<"vitesseMax :"<<vitesseMax <<"\n";
   }
};

class Voiture : public Vehicule{
private:
   int nombrePortes;
   string typeCarburant;  
public:
       Voiture(string immatriculation,string marque, int vitesseMax,int nombrePortes,string typeCarburant)
            :Vehicule(immatriculation,marque,vitesseMax)
        {
        this->nombrePortes = nombrePortes;
        this->typeCarburant = typeCarburant;
       };
       void afficherDetails() override{
    cout<<" immatriculation : "<<immatriculation<<" marque :"<<marque<<"vitesseMax :"<<vitesseMax 
    <<"nombrePortes "<<nombrePortes<<" typeCarburant "<<typeCarburant<<" \n";

       }
};

class Camion : public Vehicule{
private:
   int capaciteCharge;
   float nombreEssieux;  
public:
       Camion(string immatriculation,string marque, int vitesseMax,int capaciteCharge,float nombreEssieux)
        : Vehicule(immatriculation,marque,vitesseMax)
         {
         this->capaciteCharge = capaciteCharge;
         this->nombreEssieux = nombreEssieux;

       };
       void afficherDetails() override{
    cout<<" immatriculation : "<<immatriculation<<" marque :"<<marque<<"vitesseMax :"<<vitesseMax 
    <<"capaciteCharge "<<capaciteCharge<<" nombreEssieux "<<nombreEssieux<<" \n";

       }
};

int main(){
     Vehicule* tab[] = {
          new Voiture("P989","Dacia",120,4,"Test1"),
          new Camion("N7989","Reyzen",180,400,12)
     };
     for(int i = 0 ; i<2 ; i++){
        tab[i]->afficherDetails();
     }
}