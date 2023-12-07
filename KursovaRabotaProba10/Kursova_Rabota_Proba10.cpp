// Kursova_Rabota_Proba10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

int LitseNaTriygylnik(int strA, int strB, int strC, int p);//4.Deklaratsiya na funktsiyata


using namespace std;

int main()
{
    int a, b, c, p, multiply;//1.Definirane na nuzhnite promenlivi
	char daIline;//9.Promenliva ot tip simvol
	int masivZaLitsa[5];//6.Syzdavane na masiva, koito shte sydyrzha polushenite litsa
	int segashnaStoinost = 0;//7.Initsializatsiya na promenliva, s koyato shte se proveryava dali e napylnen masiva

	do//10.Tsikal do-while
	{
		printf_s("Vavedete strana a:");//2.Vavezhdat se stoinosti za stranite na triygylnika
		scanf_s("%d", &a);
		printf_s("Vavedete strana b:");
		scanf_s("%d", &b);
		printf_s("Vavedete strana c:");
		scanf_s("%d", &c);

		p = (a + b + c) / 2;
		printf_s("p = (a + b + c)/2 = %d\n", p);
		multiply = LitseNaTriygylnik(a, b, c, p);//5.Izvikvane na funktsiyata
		printf_s("S = sqrt(p * (p * a) * (p * b) * (p * c) = %d\n", multiply);
		printf_s("Resultat: %d\n", multiply);

		if (segashnaStoinost < 5)//8.Proverka na kapatsiteta na masiva
		{
			masivZaLitsa[segashnaStoinost] = multiply;
			segashnaStoinost++;
		}
		else
		{
			printf_s("Masiva e pylen!!!\n");
			break;
		}

		printf_s("Iskate li da vavezhdate oshte strani: D/N ");
		cin >> daIline;
	}
	while (daIline != 'n' && daIline != 'N');//11.Proveryava kakvo e vavedeno i spored vavedenoto shte izpalnyava tyaloto na do-while ili shte prekratyava po-natatashnite iteratsii

	std::sort(masivZaLitsa, masivZaLitsa + segashnaStoinost, std::greater<int>());//12.Sortira tyaloto na masiva
	printf_s("Vsichki litsa v masiva podredeni v nizhodyasht red:\n");
	for (int i = 0; i < segashnaStoinost; i++)//13.Izvezhda vsichkite zapisani litsa v masiva kato gi podrezhda v niZhodyasht red
	{
		printf_s("%d ", masivZaLitsa[i]);
	}
}

int LitseNaTriygylnik(int strA, int strB, int strC, int p)//3.Difinitsiya na funktsiyata za presmyatane na litsata na triygylnitsite
{
	int S = sqrt(p * (p * strA) * (p * strB) * (p * strC));
	return S;
}