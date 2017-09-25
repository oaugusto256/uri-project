#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
	char p[50], s[50], t[50];

	cin >> p;
	cin >> s;
	cin >> t;

	if (!strcmp(p, "vertebrado")) {
		if (!strcmp(s, "ave")) {
			if (!strcmp(t, "carnivoro")) {
				cout << "aguia\n";
			} else if (!strcmp(t, "onivoro")) {
				cout << "pomba\n";
			}
		} else if (!strcmp(s, "mamifero")) {
			if (!strcmp(t, "onivoro")) {
				cout << "homem\n";
			} else if (!strcmp(t, "herbivoro")) {
				cout << "vaca\n";
			}
		}
	} else if (!strcmp(p, "invertebrado")) {
		if (!strcmp(s, "inseto")) {
			if (!strcmp(t, "hematofago")) {
				cout << "pulga\n";
			} else if (!strcmp(t, "herbivoro")) {
				cout << "lagarta\n";
			}

		} else if (!strcmp(s, "anelideo")) {
			if (!strcmp(t, "hematofago")) {
				cout << "sanguessuga\n";
			} else if (!strcmp(t, "onivoro")) {
				cout << "minhoca\n";
			}
		}
	}

	return 0;
}