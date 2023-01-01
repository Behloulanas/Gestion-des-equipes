#include<iostream>
#include<string>
#include <conio.h>
#include<windows.h>
#include"class.h"
#include<fstream>
using namespace std;

void gotoxy(short x, short y)
{		
   	COORD pos = {x, y};
  	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Joueur::ajouterJoueur()
{
	Joueur *j = new Joueur;
	system("cls");
	gotoxy(10,1);cout << "Equipe 1 " << endl << endl;
	fstream MyFile("Competition.txt",ios::app);
	fstream read("read.txt",ios::app);
	int t=2;
	for(int i=1; i<12 ;i++ )
	{
		gotoxy(10,t);cout<<" ->Nom Joueur " << i << ": "; cin >> j->nom;
		t++;
		MyFile << "Nom_Joueur: " << j->nom << endl; 
		read << j->nom << endl; 
		gotoxy(10,t);cout <<"->Poste:" ; cin >> j->poste ;
		t++;
		MyFile << "Poste:" << j->poste << endl;
		read << j->poste << endl;
		gotoxy(10,t);cout <<" ->Num_Maillot : " ; cin >> j->numero_maillot;
		MyFile << "Num_Maillot:" << j->numero_maillot << endl;
		read << j->numero_maillot << endl << endl;
		t++;
		cout <<"" << endl; 
	}
	system("cls");
	t = 2;
	gotoxy(10,1);cout << "Equipe 2 " << endl << endl;
	for(int i=1; i<12 ;i++ )
	{
		gotoxy(10,t);cout<<" ->Nom Joueur  " << i << ": "; cin >> j->nom;
		MyFile << "Nom_Joueur:" << j->nom << endl; 
		t++;
		gotoxy(10,t);cout <<" ->Poste : " ; cin >> j->poste ;
		MyFile << "Poste:" << j->poste << endl;
		t++;
		gotoxy(10,t);cout <<" ->Num Maillot : " ; cin >> j->numero_maillot ;
		MyFile << "Num_Maillot:" << j->numero_maillot << endl;
		MyFile<<"---------------------------" << endl;
		cout << "" << endl; 
		t++;
	}
	MyFile.close();
	read.close();
	getch();
}

void Joueur::MODIFIERJoueur()
{
	system("cls");
	fstream read("read.txt");
	fstream MyFile("Competition.txt");
	Joueur *j = new Joueur;
	string noun,newNoun,n1,n2;
	gotoxy(10,2);cout << "Donner le nom du Joueur a Modifier : ";
	cin >> noun;
	while(MyFile >> n1 >> n2)
	{
		if(noun == n2)
		{
			gotoxy(10,3);cout << "Donner le Nouveau nom du Joueur a Modifier : ";
			cin >> newNoun;
			j->setNom(newNoun);
			MyFile << newNoun;
			MyFile << "Nouveau_Nom:" << newNoun;
			getch();
			system("cls");
			break ;
		}
		else
		{
 			gotoxy(10,3);cout << "Non existe";
			getch();
			system("cls");
			break ;
		}
	}
	read.close();
	MyFile.close();
}
	
void Menu(){
	gotoxy(25,7);cout<<("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
    gotoxy(48,11);cout<<("ÄÄÄÄÄÄÄÄÄÄÄ");
	gotoxy(25,8);cout<<("³");
	gotoxy(25,10);cout<<("³");			
	gotoxy(25,11);cout<<("³");	
	gotoxy(25,12);cout<<("³");	
	gotoxy(25,13);cout<<("³");
	gotoxy(25,14);cout<<("³");
	gotoxy(25,15);cout<<("³");
	gotoxy(25,16);cout<<("³");
	gotoxy(25,17);cout<<("³");
	gotoxy(25,18);cout<<("³");
	gotoxy(25,19);cout<<("³");	
	gotoxy(25,20);cout<<("³");	
	gotoxy(25,21);cout<<("³");	
	gotoxy(25,22);cout<<("³");	
	gotoxy(25,23);cout<<("³");
	gotoxy(25,24);cout<<("³");		
	gotoxy(25,25);cout<<("³");	
	gotoxy(25,26);cout<<("³");	
	gotoxy(25,27);cout<<("³");	
	gotoxy(25,28);cout<<("³");	
	gotoxy(25,29);cout<<("³");	
	gotoxy(29,8);cout<<("               ");   
	gotoxy(25,9);cout<<("³");
	gotoxy(25,30);cout<<("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
	gotoxy(86,8);cout<<("³");
	gotoxy(86,9);cout<<("³");
	gotoxy(86,10);cout<<("³");
	gotoxy(86,11);cout<<("³");
	gotoxy(86,12);cout<<("³");
	gotoxy(86,13);cout<<("³");
	gotoxy(86,14);cout<<("³");
	gotoxy(86,15);cout<<("³");
	gotoxy(86,16);cout<<("³");
	gotoxy(86,17);cout<<("³");
	gotoxy(86,18);cout<<("³");
	gotoxy(86,19);cout<<("³");
	gotoxy(86,20);cout<<("³");
	gotoxy(86,21);cout<<("³");
	gotoxy(86,22);cout<<("³");
	gotoxy(86,23);cout<<("³");
	gotoxy(86,24);cout<<("³");
	gotoxy(86,25);cout<<("³");
	gotoxy(86,26);cout<<("³");
	gotoxy(86,27);cout<<("³");
	gotoxy(86,28);cout<<("³");
	gotoxy(86,29);cout<<("³");
	gotoxy(86,30);cout<<("Ù");
	gotoxy(86,7);cout<<("¿");	
	gotoxy(49,10);   cout<<("Bienvenue ")<<endl;
	gotoxy(37,14);  cout<<("1.Cree une competiton ")<<endl;
	gotoxy(37,16);	cout<<("2.Ajout et Modifier ")<<endl;
	gotoxy(37,18);  cout<<("3.Saisie du match ")<<endl;
	gotoxy(37,20);	cout<<("4.Affichage de la liste  ")<<endl;
	gotoxy(37,22);	cout<<("5.Quitter le programme ")<<endl;
	gotoxy(37,25);	cout<<(" \t Entrer votre choix: ");		
}

void Competition::cree_competition(){
	// objets
	Competition *c = new Competition;
	// var
	int n=0,choix,choix2;

	// design
	system("cls");
	gotoxy(10,3); cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
	gotoxy(10,4); cout<<"³";
	gotoxy(10,5); cout<<"³";
	gotoxy(10,6); cout<<"³";
	gotoxy(10,7); cout<<"³";
	gotoxy(10,8); cout<<"³";
	gotoxy(10,9); cout<<"³";
	gotoxy(10,10);cout<<"³";
	gotoxy(10,11);cout<<"³";
	gotoxy(10,12);cout<<"³";
	gotoxy(10,13);cout<<"³";
	gotoxy(10,14);cout<<"³";
	gotoxy(10,15);cout<<"³";
	gotoxy(10,16);cout<<"³";
	gotoxy(10,17);cout<<"³";
	gotoxy(10,18);cout<<"³";
	gotoxy(10,19);cout<<"³";
	gotoxy(10,20);cout<<"³";
	gotoxy(10,21);cout<<"³";
	gotoxy(10,22);cout<<"³";
	gotoxy(10,23);cout<<"³";
	gotoxy(10,24);cout<<"³";
	gotoxy(10,25);cout<<"³";
	gotoxy(10,26);cout<<"³";
	gotoxy(10,27);cout<<"³";
	gotoxy(10,28);cout<<"À";
	gotoxy(11,28);cout<<"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
	gotoxy(88,4); cout<<"³";
	gotoxy(88,5); cout<<"³";
	gotoxy(88,6); cout<<"³";
	gotoxy(88,7); cout<<"³";
	gotoxy(88,8); cout<<"³";
	gotoxy(88,9); cout<<"³";
	gotoxy(88,10);cout<<"³";
	gotoxy(88,11);cout<<"³";
	gotoxy(88,12);cout<<"³";
	gotoxy(88,13);cout<<"³";
	gotoxy(88,14);cout<<"³";
	gotoxy(88,15);cout<<"³";
	gotoxy(88,16);cout<<"³";
	gotoxy(88,17);cout<<"³";
	gotoxy(88,18);cout<<"³";
	gotoxy(88,19);cout<<"³";
	gotoxy(88,20);cout<<"³";
	gotoxy(88,21);cout<<"³";
	gotoxy(88,22);cout<<"³";
	gotoxy(88,23);cout<<"³";
	gotoxy(88,24);cout<<"³";
	gotoxy(88,25);cout<<"³";
	gotoxy(88,26);cout<<"³";
	gotoxy(88,27);cout<<"³";
	// recangle 2
	gotoxy(13,4);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
	gotoxy(13,5);cout<<"³";
	gotoxy(39,5);cout<<" Cree une Competition  ";
	gotoxy(13,6);cout<<"³";
	gotoxy(13,6);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
	gotoxy(84,5);cout<<"³";
	gotoxy(84,6);cout<<"Ù";
	gotoxy(84,4);cout<<"¿";
	gotoxy(14,7);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(14,8);cout<<"³";
    gotoxy(14,9);cout<<"³";
	gotoxy(14,10);cout<<"³";
	gotoxy(14,11);cout<<"³";
	gotoxy(14,12);cout<<"³";
	gotoxy(14,13);cout<<"³";
	gotoxy(14,14);cout<<"³";
	gotoxy(14,15);cout<<"³";
	gotoxy(14,16);cout<<"³";
	gotoxy(14,17);cout<<"³";
	gotoxy(14,18);cout<<"³";
	gotoxy(14,19);cout<<"³";
	gotoxy(14,20);cout<<"³";
	gotoxy(14,21);cout<<"³";
	gotoxy(14,22);cout<<"³";
	gotoxy(14,22);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(84,8);cout<<"³";
    gotoxy(84,7);cout<<"¿";
    gotoxy(84,9);cout<<"³";
    gotoxy(84,10);cout<<"³";
    gotoxy(84,11);cout<<"³";
    gotoxy(84,12);cout<<"³";
    gotoxy(84,13);cout<<"³";
    gotoxy(84,14);cout<<"³";
    gotoxy(84,15);cout<<"³";
    gotoxy(84,16);cout<<"³";
    gotoxy(84,17);cout<<"³";
    gotoxy(84,18);cout<<"³";
    gotoxy(84,19);cout<<"³";
    gotoxy(84,20);cout<<"³";
    gotoxy(84,21);cout<<"³";
    gotoxy(84,22);cout<<"Ù";
    gotoxy(18,9);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(18,10);cout<<"³";
    gotoxy(18,11);cout<<"³";
    gotoxy(18,12);cout<<"³";
    gotoxy(18,13);cout<<"³";
    gotoxy(18,14);cout<<"³";
    gotoxy(18,15);cout<<"³";
    gotoxy(18,16);cout<<"³";
    gotoxy(18,17);cout<<"³";
    gotoxy(18,18);cout<<"³";
    gotoxy(18,19);cout<<"³";
    gotoxy(18,20);cout<<"³";
    gotoxy(18,20);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(77,10);cout<<"³";
    gotoxy(77,9);cout<<"¿";
    gotoxy(77,11);cout<<"³";
    gotoxy(77,12);cout<<"³";
    gotoxy(77,13);cout<<"³";
    gotoxy(77,14);cout<<"³";
    gotoxy(77,15);cout<<"³";
    gotoxy(77,16);cout<<"³";
    gotoxy(77,17);cout<<"³";
    gotoxy(77,18);cout<<"³";
    gotoxy(77,19);cout<<"³";
    gotoxy(77,20);cout<<"Ù";
    gotoxy(19,11);cout<<"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(77,11);cout<<"´";
    gotoxy(18,11);cout<<"Ã";
    gotoxy(21,10);cout<<"Nombres d equipes : "; 
    gotoxy(18,13);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(77,13);cout<<"´";
    gotoxy(18,13);cout<<"Ã";
    gotoxy(21,12);cout<<"Nombres de tours : "; 
    gotoxy(19,17);cout<<"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(77,17);cout<<"´";
    gotoxy(18,17);cout<<"Ã"; 
    gotoxy(21,15);cout<<"Nombre d Arbitres : "; 
    // file Opening
     ofstream MyFile("Competition.txt",ios::app);

    gotoxy(44,10);cin>>c->nombre_equipes;
//    MyFile<<"Nombre_Equipes:"<<c->nombre_equipes<<endl;
    gotoxy(44,12);cin>>c->nombre_tours;
//    MyFile<<"Nombre_Tour:"<<c->nombre_tours<<endl;
    gotoxy(44,15);cin>>c->nombre_arbitres; 
//    MyFile<<"Nombre_Arbitres:"<<c->nombre_arbitres<<endl;
//    MyFile<<"---------------------------" << endl;
    //file closing
    MyFile.close();
    
    gotoxy(30,19);cout<<"Competition Cree Avec Succes ";
	gotoxy(14,23);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(14,24);cout<<"³";
	gotoxy(14,25);cout<<"³";
    gotoxy(14,25);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(84,23);cout<<"¿";
    gotoxy(84,24);cout<<"³";
    gotoxy(84,25);cout<<"Ù";
    gotoxy(30,24);cout<<"Tapez 0 pour revenir au Menu Principal";
    //
    gotoxy(14,25);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(14,26);cout<<"³";
	gotoxy(14,27);cout<<"³";
    gotoxy(14,27);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(84,25);cout<<"¿";
    gotoxy(84,26);cout<<"³";
    gotoxy(84,27);cout<<"Ù";
    gotoxy(30,26);cout<<"Tapez 99 pour Quitter";
    // reading informations 
    gotoxy(64,26);cin>>choix;
    if(choix==0)
    {
    	system("cls"); Menu();
	}
	else if(choix==99)
	{
		system("cls");exit(0);
	}
    // cleaning 
	system("cls");
}


void Equipe::saisie(){
	Equipe *e1 = new Equipe;
	Equipe *e2 = new Equipe;
	Arbitre *a = new Arbitre;
	Match *m = new Match;
	Competition *c = new Competition;
	char equipe_gagnant[20];
	system("cls");
	gotoxy(10,3); cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
	gotoxy(10,4); cout<<"³";
	gotoxy(10,5); cout<<"³";
	gotoxy(10,6); cout<<"³";
	gotoxy(10,7); cout<<"³";
	gotoxy(10,8); cout<<"³";
	gotoxy(10,9); cout<<"³";
	gotoxy(10,10);cout<<"³";
	gotoxy(10,11);cout<<"³";
	gotoxy(10,12);cout<<"³";
	gotoxy(10,13);cout<<"³";
	gotoxy(10,14);cout<<"³";
	gotoxy(10,15);cout<<"³";
	gotoxy(10,16);cout<<"³";
	gotoxy(10,17);cout<<"³";
	gotoxy(10,18);cout<<"³";
	gotoxy(10,19);cout<<"³";
	gotoxy(10,20);cout<<"³";
	gotoxy(10,21);cout<<"³";
	gotoxy(10,22);cout<<"³";
	gotoxy(10,23);cout<<"³";
	gotoxy(10,24);cout<<"³";
	gotoxy(10,25);cout<<"³";
	gotoxy(10,26);cout<<"³";
	gotoxy(10,27);cout<<"³";
	gotoxy(10,28);cout<<"À";
	gotoxy(11,28);cout<<"ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
	gotoxy(88,4); cout<<"³";
	gotoxy(88,5); cout<<"³";
	gotoxy(88,6); cout<<"³";
	gotoxy(88,7); cout<<"³";
	gotoxy(88,8); cout<<"³";
	gotoxy(88,9); cout<<"³";
	gotoxy(88,10);cout<<"³";
	gotoxy(88,11);cout<<"³";
	gotoxy(88,12);cout<<"³";
	gotoxy(88,13);cout<<"³";
	gotoxy(88,14);cout<<"³";
	gotoxy(88,15);cout<<"³";
	gotoxy(88,16);cout<<"³";
	gotoxy(88,17);cout<<"³";
	gotoxy(88,18);cout<<"³";
	gotoxy(88,19);cout<<"³";
	gotoxy(88,20);cout<<"³";
	gotoxy(88,21);cout<<"³";
	gotoxy(88,22);cout<<"³";
	gotoxy(88,23);cout<<"³";
	gotoxy(88,24);cout<<"³";
	gotoxy(88,25);cout<<"³";
	gotoxy(88,26);cout<<"³";
	gotoxy(88,27);cout<<"³";
 	//  2
	gotoxy(13,4);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
	gotoxy(13,5);cout<<"³";
	gotoxy(13,6);cout<<"³";
	gotoxy(13,6);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
	gotoxy(84,5);cout<<"³";
	gotoxy(84,6);cout<<"Ù";
	gotoxy(84,4);cout<<"¿";  
	gotoxy(39,5);cout<<" saisie Match  ";
	gotoxy(18,9);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(18,10);cout<<"³";
    gotoxy(18,11);cout<<"³";
    gotoxy(18,12);cout<<"³";
    gotoxy(18,13);cout<<"³";
    gotoxy(18,14);cout<<"³";
    gotoxy(18,15);cout<<"³";
    gotoxy(18,16);cout<<"³";
    gotoxy(18,17);cout<<"³";
    gotoxy(18,18);cout<<"³";
    gotoxy(18,19);cout<<"³";
    gotoxy(18,20);cout<<"³";
    gotoxy(18,20);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
    gotoxy(77,10);cout<<"³";
    gotoxy(77,9);cout<<"¿";
	gotoxy(77,11);cout<<"³";
    gotoxy(77,12);cout<<"³";
    gotoxy(77,13);cout<<"³";
    gotoxy(77,14);cout<<"³";
    gotoxy(77,15);cout<<"³";
    gotoxy(77,16);cout<<"³";
    gotoxy(77,17);cout<<"³";
    gotoxy(77,18);cout<<"³";
    gotoxy(77,19);cout<<"³";
    gotoxy(77,20);cout<<"Ù";
    gotoxy(19,10);cout<<" Equipe1 :  ";
    gotoxy(49,10);cout<<" Equipe2 : ";
    gotoxy(19,13);cout<<" Equipe Gagnant :  ";
    gotoxy(49,13);cout<<"NB Tour :";
    gotoxy(19,16);cout<<" Arbitre : ";
    gotoxy(50,16);cout<<" Resulat : ";
    gotoxy(30,10);cin>>e1->nom;
    gotoxy(61,10);cin>>e2->nom;
    gotoxy(37,13);cin>>equipe_gagnant;
    gotoxy(59,13);cin>>c->nombre_tours;
    gotoxy(31,16);cin>>a->getNom();
    gotoxy(61,16);cin>>m->resultat;
    gotoxy(64,16);cout<<" - ";
    gotoxy(68,16);cin>>m->resultat;
    int choix;
 	gotoxy(29,23);cout<<"Taper 0 pour revenir au Menu :";
 	gotoxy(29,25);cout<<"Taper 99 pour revenir Quitter :";
 	gotoxy(70,25);cin>>choix;
    if(choix==0)
    {
    	system("cls"); Menu();
	}
	else if(choix==99)
	{
		system("cls");exit(0);
	}
}
void ajout_modi(){
	int choix;
	system("cls");
	
	gotoxy(13,4);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
	gotoxy(13,5);cout<<"³";
	gotoxy(13,6);cout<<"³";
	gotoxy(13,6);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
	gotoxy(84,5);cout<<"³";
	gotoxy(84,6);cout<<"Ù";
	gotoxy(84,4);cout<<"¿"; 
	gotoxy(39,5);cout<<"1- Ajouter  ";
	
	gotoxy(13,8);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
	gotoxy(13,9);cout<<"³";
	gotoxy(13,10);cout<<"³";
	gotoxy(13,10);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ";
	gotoxy(84,9);cout<<"³";
	gotoxy(84,10);cout<<"Ù";
	gotoxy(84,8);cout<<"¿"; 
	gotoxy(39,9);cout<<"2- Modifier  ";
	
	gotoxy(35,12);cout<<"Donner votre choix  ";
	cin>>choix;

	Joueur *j = new Joueur;
	if(choix==1)
	{
		system("cls");
		j->ajouterJoueur();
		system("cls");
		Menu();
		// function add 
	}
	else if(choix==2)
	{
		system("cls");
		j->MODIFIERJoueur();
		system("cls");
		Menu();
		// function add 
		
	}
}


void Competition::afficher_competition()
{
	system("cls");
	fstream MyFile("Competition.txt",ios::in);
	
	string n;
	while(MyFile >> n){
		cout << "\t\t" << n << endl << endl; 
	}
	
	MyFile.close();
	getch();
	system("cls");
}
