#include <iostream>
#include <string>
#include <ctime>
#include "CaminhoMatriz.hpp"
using namespace std;



void CaminhoMatriz::setN (int n)
{
  
  grade = new int *[n];
  for (int i = 0; i < n; ++i)
    grade[i] = new int[n];

}


void
CaminhoMatriz::create (int n)
{
  int l, c;
  srand (time (NULL));
  for (l = 0; l < n; l++)
    {
      for (c = 0; c < n; c++)
	grade[l][c] = rand () % 100;

    }
}



void
CaminhoMatriz::setGrade (int l, int c)
{

  grade[l][c] = -1;

}


void
CaminhoMatriz::mostra (int n)
{
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  if (grade[i][j] == -1)
	    cout << "x | ";
	  else
	    cout << grade[i][j] << " | ";
	}
      cout << endl << "-----------------------------------------------" <<
	endl;
    }

}
