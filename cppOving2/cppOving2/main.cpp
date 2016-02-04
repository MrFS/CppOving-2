//ø = ›
//å = †
//æ = ‘

#include <iostream>
#include <conio.h>

#include "oppg1.h"
#include "oppg2.h"

#define OPPG1 97
#define OPPG2 98

#define MAT 109
#define VANLIG 118
#define FRI 102

using namespace std;

int main()
{

	cout << "Trykk 'a' p† tastaturet for Oppgave 1 - Abbonement" << endl << "Trykk 'b' p† tastaturet for Oppgave 2 - MOMS" << endl;

	int c = 0;
	while (1)
	{

		//c = 0;

		switch ((c = _getch())) {

		case OPPG1:
			cout << "Oppgave 1" << endl;

			//Nødvendige variabler
			double samtaletid;

			//Ber brukeren skrive inn gjennomsnittlig samtaletid.
			cout << "Vennligst oppgi din gjennomsnittlige samtaletid pr. mnd:" << endl;

			//Leser hva brukeren skrev og lagrer det i variabelen samtaletid
			cin >> samtaletid;

			//Printer resultatet til console
			cout << "Abonnement A blir † koste deg: " << aboA(samtaletid) << ",-" << endl;

			cout << "Abonnement B blir † koste deg: " << aboB(samtaletid) << ",-" << endl;

			break;
		case OPPG2:
			cout << "Oppgave 2" << endl;

			cout << "Regn ut moms på  en vare" << endl;

			cout << "Trykk M for matvare." << endl << "Trykk V for vanlig vare." << "Trykk F for vare fritatt for moms." << endl;

			double pris;

			switch ((c = _getch())) {

			case MAT:

				cout << "Angi pris på matvare:" << endl;

				cin >> pris;

				cout << "Prisen på din vare er: " << mat(pris);

				break;

			case VANLIG:

				cout << "Angi pris på vanlig vare:" << endl;

				cin >> pris;

				cout << "Prisen på din vare er: " << vanlig(pris);

				break;

			case FRI:

				cout << "Angi pris på vare fritatt for moms:" << endl;

				cin >> pris;

				cout << "Prisen på din vare er: " << pris;

				break;
			}
			break;

		}
	}
}