/*
 * princi.cpp
 *
 *  Created on: 2017-02-04
 *      Author: etudiant
 */


#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<algorithm>

#include "validationFormat.h"

using namespace std;

int main()

{
	string numerol;
	char buffer[256];
	cout << "entrer un numero de telephone" << endl;
	cin.getline(buffer, 255);
	numerotel = buffer;
	bool validation = validerTelephone(numerotel);
	cout << validation << endl;

	string numeroRAMQ;
	char buffer2[256];
	cout << "entrer un numero de RAMQ" << endl;
	cin.getline(buffer2, 255);
	numeroRAMQ = buffer2;

	string nom;
	char buffer3[256];
	cout << "entrer un nom" << endl;
	cin.getline(buffer3, 255);

	nom = buffer3;

	string prenom;
	char buffer4[256];
	cout << "entrer un prenom" << endl;
	cin.getline(buffer4, 255);
	prenom = buffer4;

	int jour;
	char buffer5[256];
	cout << "entrer le jour de naissance" << endl;
	cin.getline(buffer5, 255);
	string c = buffer5;
	jour = conversionChaineEnEntier(c);

	int mois;
	char buffer6[256];
	cout << "entrer le mois de naissance" << endl;
	cin.getline(buffer6, 255);
	string d = buffer6;
	mois = conversionChaineEnEntier(d);


	int anne;
	char buffer7[256];
	cout << "entrer l'année de naissance" << endl;
	cin.getline(buffer7, 255);
	string e = buffer7;
	anne = conversionChaineEnEntier(e);


	char sexe;
	cout << "entrer le sexe" << endl;
	cin >> sexe;
	bool validation2 = validerNumRAMQ(numeroRAMQ,nom,prenom,jour,mois,anne,sexe);
	cout << validation2 << endl;

	return 0;
}

/*
KARB 9052 2016
KAramoko
bRakys
20
02
1990
f
m*/
