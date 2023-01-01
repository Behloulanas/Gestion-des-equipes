#include<iostream>
#include<string>
#include <conio.h>
#include<windows.h>
using namespace std;

class Competition{
	private:
		int nombre_equipes;
		int nombre_arbitres;
	public:
		Competition(){}
		Competition(int ne,int nt,int na){
			nombre_equipes = ne;
			nombre_tours = nt;
			nombre_arbitres = na;
		}
		int nombre_tours;
		void cree_competition();
		void afficher_competition();
		int getNombre_equipes(){	return nombre_equipes;}
	//	int getNombre_tours(){	return this->nombre_tours;}
		int getNombre_arbitres(){	return nombre_arbitres;}
};
class Match{
   private:
	int numero_tour;
	string nom_Arbitre;
	
   public:
	Match(){} // constructeur par defaut
	Match(int n,string nom){
	numero_tour = n;
	nom_Arbitre = nom;
} //constructeur avec parametres
~Match(){} // destructeur 
string resultat;
int getNumero_tour(){	return numero_tour;} // getter
};
class Joueur{
   private:
   	int p;
   	string n;
   public:
   	string nom;
   	string poste;
	int numero_maillot;
	Joueur(){} // constructeur par defaut
	Joueur(int p,int  n){
	poste = p;
	numero_maillot = n;
} //constructeur avec parametres
~Joueur(){} // destructeur 
	void ajouterJoueur();
	void MODIFIERJoueur();
	string getNom(){	return nom;}
	void setNom(string n){	this->nom = n;}
};	
class Arbitre{
   private:
	char id[20];
	char nom[20];
   public:
	Arbitre(){} // constructeur par defaut
	Arbitre(char i[20],char  n[20]){
	strcpy(id,i); // copy
	strcpy(nom,n); // copy
} //constructeur avec parametres
char* getId(){
	return id;
}
char *getNom(){
	return this->nom;
}
~Arbitre(){} // destructeur 

};	
class Equipe{
	private:
		char nom[20];
	public:
		Equipe(){}
		Equipe(char n[20]){
			strcpy(nom,n); // on copie n dans nom
		}
		void saisie();
		char* getNom(){
			return this->nom;
		}
		~Equipe(){}
};

