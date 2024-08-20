#include <iostream>

using namespace std;

int main()
{
	//const int size = 5;
	//int ededler[size] = { };
	//for (unsigned int i = 0; i < size; i++)
	//{
	//	cin >> ededler[i];
	//}
	//for (unsigned int i = 5; i < 6; i--)
	//{
	//	cout << ededler[i] << ' ';
	//}



	//const int size = 20;
	//int ededler[size] = { };
	//for (unsigned int i = 0; i < size; i++)
	//{
	//	cin >> ededler[i];
	//}
	//for (unsigned int i = 0; i < size; i++)
	//{
	//	if (ededler[i] % 2 == 0)
	//	{
	//		cout << ededler[i] << ' ';
	//	}
	//}


	//const int size = 10;
	//int sum = 0;
	//int count = 0;
	//int ededler[size] = { };
	//for ( int i = 0; i < size; i++)
	//{
	//	cout << "-20 ve 20 arasinda 10 eded daxil edin: ";
	//	cin >> ededler[i];
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	if (ededler[i] > 0)
	//	{
	//		sum += ededler[i];
	//		count++;
	//	}
	//}
	//	if (count > 0)
	//	{
	//		double edediorta = sum / count;
	//		cout << "Musbet ededlerin ededi ortasi" << edediorta << endl;
	//	}
	//	else cout << "Musbet eded yoxdur!" << endl;
	//	return 0;


	//const int size = 20;
	//int menfi = 0;
	//int musbet = 0;
	//int sifir = 0;
	//int ededler[size] = { };
	//for (int i = 0; i < size; ++i) {
	//	if (ededler[i] < 0) {
	//		menfi++;
	//	}
	//	else if (ededler[i] > 0) {
	//		musbet++;
	//	}
	//	else sifir++;
	//}
	//cout << "menfilerin sayi " << menfi << std::endl;
	//cout << "musbetlerin sayi " << musbet << std::endl;
	//cout << "sifirlarin sayi " << sifir << std::endl;


	//const int size = 10;
	//int ededler[size] = { };
	//int tekindex = 0;
	//int cutindex = 0;
	//int say = 0;
	//for (int i = 0; i < size; ++i) {
	//	if (i % 2 == 0) {  
	//		cutindex += ededler[i];
	//	}
	//	else {
	//		tekindex += ededler[i];
	//		say++;
	//	}
	//}
	//double edeiorta2 = 0;
	//if (say > 0) {
	//	edeiorta2 = (double)cutindex / say;
	//}
	//std::cout << "İndeksi cut olanlarin cemi " << cutindex << std::endl;
	//std::cout << "Indeksi tek olanlarin cemi " << edeiorta2 << std::endl;


	//const int size = 10;
	//char simvol[size] = { };
	//int reqem = 0;
	//int herf = 0;
	//int punktonasiya = 0;
	//for (int i = 0; i < size; ++i)
	//{
	//	if (64 < simvol[i] < 91) herf++;
	//	else if (47 < simvol[i] < 58) reqem++;
	//	else if (32 < simvol[i] < 48) punktonasiya++;
	//}
	//cout << "herf: " << herf << endl;
	//cout << "reqem: " << reqem << endl;
	//cout << "punkt: " << punktonasiya << endl;


	//const int size = 50;
	//int array[size] = { };
	//int numfind = 0;
	//int count = 0;
	//for (int i = 0; i < size; ++i) {
	//	array[i] = (i % 100) + 1;
	//}
	//cout << "Eded yazin (1-100): ";
	//cin >> numfind;
	//if (numfind < 1 || numfind > 100)
	//{
	//	cout << "Yazdiginiz eded yoxdur. 1-100 arasi eded lazimdir." << endl;
	//	return 1;
	//}
	//for (int i = 0; i < size; ++i)
	//{
	//	if (array[i] == numfind)
	//	{
	//		++count;
	//	}
	//}
	//cout << "Yazdiginiz sayi " << numfind << " araligda " << count << " eded var" << endl;
	//cout << "Araligdaki ededler: ";
	//for (int i = 0; i < size; ++i) {
	//	cout << array[i] << " ";
	//}
	//cout << endl;
	//return 0;


/*	const int size = 10;
	int ededler[size];
	int ucebolunen = 0;
	int besebolunen = 0;
	int yeddiyebolunen = 0;
	srand(time(0));

	for (int i = 0; i < size; ++i) {
		ededler[i] = rand() % 100 + 1;
	}

	cout << "Random ededler: ";
	for (int i = 0; i < size; ++i) {
		cout << ededler[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; ++i) {
		if (ededler[i] % 3 == 0) {
			ucebolunen++;
		}
		if (ededler[i] % 5 == 0) {
			besebolunen++;
		}
		if (ededler[i] % 7 == 0) {
			yeddiyebolunen++;
		}
	}
	cout << "3-e bolune bilenlerin sayisi: " << ucebolunen << endl;
	cout << "5-e bolune bilenlerin sayisi: " << besebolunen << endl;
	cout << "7-ye bolune bilenlerin sayisi: " << yeddiyebolunen << endl;
	return 0;*/	

	//const int size = 10;
	//int ededler[size];
	//int ucebolunen = 0;
	//srand(time(0));

	//for (int i = 0; i < size; ++i) 
	//{
	//	ededler[i] = rand() % 100 + 1;
	//}

	//cout << "Random ededler: ";

	//for (int i = 0; i < size; ++i) 
	//{
	//	cout << ededler[i] << " ";
	//}
	//cout << endl;

	//for (int i = 0; i < size; ++i)
	//{
	//	if (ededler[i] % 3 == 0 || ededler[i] % 5 != 0) {
	//		ucebolunen++;
	//	}
	//}
	//cout << "3-e bolunen ve 5-e bolunmeyen ededlerin sayi: " << ucebolunen << endl;


}