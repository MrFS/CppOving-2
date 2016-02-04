//ø = ›
//å = †
//æ = ‘

#include <iostream>

using namespace std;

void main() 
{

	//Nødvendige variabler
	double samtaletid;
	double a;
	double b;

	//Ber brukeren skrive inn gjennomsnittlig samtaletid.
	cout << "Vennligst oppgi din gjennomsnittlige samtaletid pr. mnd:" << endl;
	
	//Leser hva brukeren skrev og lagrer det i variabelen samtaletid
	cin >> samtaletid;

	//Formler for utregning av abbo a & b
	a = 50 + samtaletid;
	b = samtaletid * 2.50;

	//Printer resultatet til console
	cout << "Abonnement A blir † koste deg: " << a << ",-" << endl;
	cout << "Abonnement B blir † koste deg: " << b << ",-" << endl;

	system("pause");

}