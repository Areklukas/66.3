#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 1000;

void display(int a, int b, int c) 
{
	cout <<a<< " " <<b<< " " <<c<<endl;
}
bool trojkat_prostokatny(int a, int b, int c) 
{
 	return ((a*a)+(b*b)==(c*c)|| 
 	(a*a)+(c*c)==(b*b)|| 
 	(c*c)+(b*b)==(a*a));
}
void zadanie3() 
{
 	ifstream in("trojki.txt");
 	int tab[SIZE][3];
 	for (int i=0; i<SIZE; i++) 
	{
 		in>>tab[i][0]>>tab[i][1]>>tab[i][2];
 	}
 	for (int i=1; i < SIZE; i++) 
	{
 		if (trojkat_prostokatny(tab[i - 1][0], tab[i - 1][1], tab[i - 1][2]) &&
 		trojkat_prostokatny(tab[i][0], tab[i][1], tab[i][2])) 
		{
 			display(tab[i - 1][0], tab[i - 1][1], tab[i - 1][2]);
 			display(tab[i][0], tab[i][1], tab[i][2]);
 		}
	}
	in.close();
	cout << endl;
}
int main() 
{
 	zadanie3();
}
