#pragma once

//double moms(double pris)
//{
//	const int matMoms = 13;
//	const int vanligMoms = 25;
//	const char jaSvar = 'J';
//	const char neiSvar = 'N';
//
//	cout << "Skriv prisen uten moms: ";
//	double utenMoms;
//	cin >> utenMoms;
//	cout << "Er dette en matvare? Svar " << jaSvar << " eller " << neiSvar << ": ";
//	char valg;
//	cin >> valg;
//
//	int moms;
//	if (valg == jaSvar) moms = matMoms;
//	else moms = vanligMoms;
//
//	double medMoms = utenMoms * (1.0 + moms / 100.0);
//	cout << "Prisen med moms blir " << medMoms << " kroner." << endl;
//
//}

double mat(double pris) {
	
	double res;
	
	res = pris * 1.13;

	return res;
}

double vanlig(double pris) {

	double res;

	res = pris * 1.25;

	return res;
}