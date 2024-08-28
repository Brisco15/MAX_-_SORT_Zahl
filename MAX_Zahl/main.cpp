#include <iostream>
using namespace std;
int max_zahl(int& x, int& y, int& z);
void sortierung(int x, int y, int z) ;

 int main ()
 {
	 int a;
	 int b;
	 int c;
	 char stop;
	do
	{ 

			//Eingabe
			cout << endl;
			cout << "Geben Sie bitte drei Zahlen ein: " << endl;
			cout << endl;
			cin >> a;
			cout << endl;
			cin >> b;
			cout << endl;
			cin >> c;
			cout << endl;

			//Ausgabe
			cout << "Max.Zahl ist: " << max_zahl(a, b, c)  << endl << endl;
			sortierung(a, b, c) ;

			cout << "Noch ein mal? j/n: ";
			cin >> stop;
	} while (stop != 'n' && stop != 'N');

	 return 0;

}

 int max_zahl(int& x, int& y, int& z)
 {
	// int max = 0;
	 if (x > y && x > z)
		 // max = x;
		 return x;
	 if (y > x && y > z)
		 //max = y;
		 return y;
	 if (z > x && z > y)
		 //max = z;
		 return z;

	 return 0;
 }

 void sortierung(int x, int y, int z)
 {
	 if (x < y && y < z)
	 {
		 cout << "aufsteigende sortierung : " << x << " " << y << " " << z << endl << endl;
	 }

	 if (x < z && z < y && x < y)
	 {
		 cout << "aufsteigende sortierung : " << x << " " << z << " " << y << endl << endl;
	 }

	 if (y < x && y < z && x < z)
	 {
		 cout << "aufsteigende sortierung : " << y << " " << x << " " << z << endl << endl;
	 }

	 if (x > y && y < z && x > z)
	 {
		 cout << "aufsteigende sortierung : " << y << " " << z << " " << x << endl << endl;
	 }

	 if (x < y && y > z && x > z)
	 {
		 cout << "aufsteigende sortierung : " << z << " " << x << " " << y << endl << endl;
	 }

	 if (x > y && y > z)
	 {
		 cout << "aufsteigende sortierung : " << z << " " << y << " " << x << endl << endl;
	 }



 }
