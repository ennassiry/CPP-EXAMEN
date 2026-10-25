#include<iostream>
using namespace std;
class  CompteBancaire{
private:
    string numero;
    string titulaire;
    double solde;
public:
    CompteBancaire(string numero,string titulaire,float solde) {
        this->numero = numero;
        this->solde = solde;
        this->titulaire = titulaire;
    }
    void deposer(double montant){
           if(montant > 0){
            solde += montant;
            cout<<"vous etes deposer "<<montant<<" DH avec success , votre solde "<<solde<<"\n";

           }
           else{
            cout<<"montant doit etre positive \n";
           }
    }
    void retirer(double montant){
        if(montant > 0 && solde >= montant){
            solde -= montant;
            cout<<"vous etes retirer "<<montant<<" Dh avec success, votre solde "<<solde<<"\n";
        }else{
        cout<<"Erreur \n";
        }
    }
    void afficher(){
        cout<<"je suis "<<titulaire<<" mon solde "<<solde<<" DH \n";
    }
};

int main(void){
     
    CompteBancaire c1("A98998","Mohammed",1000);
    c1.afficher();
    c1.deposer(500);
    c1.retirer(200);
}