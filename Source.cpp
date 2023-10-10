#include <iostream>
#include<iomanip>


using namespace std;

int main()
{

	int a, b, brojac;

	cout << "Vnesi ja vrednosta na a : ";
		cin >> a;

	cout << "Vnesi ja vrednosta na b : ";
		cin >> b;

	
		brojac = a;

		while (brojac <= b)
		{
		
			if (brojac % 2 == 1) {

				cout << "\n" << setw(3) << brojac;

				brojac++;
			}

			else if
				    (brojac % 2 == 0) {

					cout << "\n" << setw(3) << brojac;

					brojac++;
				}

			
				
		
		
		}




	cin.get(); cin.get();

	return 0;



}