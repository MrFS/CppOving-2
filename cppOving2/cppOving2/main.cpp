//ø = ›
//å = †
//æ = ‘


#include <iostream>

using namespace std;

void main() 
{

	double samtaletid;
	double a;
	double b;

	cout << "Vennligst oppgi din gjennomsnittlige samtaletid pr. mnd:" << endl;
	
	cin >> samtaletid;

	a = 50 + (samtaletid * 1);
	b = samtaletid * 2.50;

	cout << "Abonnement A blir † koste deg: " << a << ",-" << endl;
	cout << "Abonnement B blir † koste deg: " << b << ",-" << endl;

	system("pause");

}