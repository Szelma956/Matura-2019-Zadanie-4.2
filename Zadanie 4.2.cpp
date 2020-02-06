// Zadanie 4.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

const int rozmiar_tablicy = 500;
int tablica[rozmiar_tablicy];
int liczba_wczytanych_liczb = 0;


int silnia(int n) {
	int wynik = 1;
	for (int i = 1; i <= n; i++) {
		wynik = wynik * i;
	}
	return wynik;
}

bool sprawdz(int liczba) {
	int do_spr = liczba;
	int suma_s = 0;
	while (do_spr > 0) {
		int cyfra = do_spr % 10;
		do_spr = do_spr / 10;
		int wynik_s = silnia(cyfra);
		suma_s = suma_s + wynik_s;
	}
	if (liczba == suma_s) {
		return true;
	}
	else {
		return false;
	}

}

int main()
{
	while (!cin.eof() && liczba_wczytanych_liczb < rozmiar_tablicy) {
		cin >> tablica[liczba_wczytanych_liczb];
		bool czy_koniec = cin.eof();
		liczba_wczytanych_liczb = liczba_wczytanych_liczb + 1;
	}
	for (int i = 0; i < liczba_wczytanych_liczb; i++) {
		int liczba = tablica[i];
		bool czy_szukana = sprawdz(liczba);

		if (czy_szukana) {
			cout << liczba << endl;
		}
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
