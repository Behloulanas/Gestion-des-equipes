    
  
// Baaaaaader              
   
using namespace std;                        
#include<iostream>                   
#include<string>                       
#include <conio.h>                  
#include<windows.h>                       
#include"fonctions.h"              
             
int main(){        
	system("color 60");
	int choix = -1;        
	Competition *c = new Competition;  
	Equipe *e1 = new Equipe; 
	m: // on recommence le programme ici   
	do 
	{
		Menu();  
		gotoxy(62,25);cin>>choix;         
		switch(choix)
		{   
			case 1:{c->cree_competition();goto m;	break;}
			case 2:{ajout_modi(); goto m;	break;}
			case 3:{e1->saisie(); goto m;	break;}
			case 4:{c->afficher_competition();  goto m;	break;}
			case 5:{system("cls");break;}
		}
	}while(choix<1 || choix>5);
    
	return 0;
}
