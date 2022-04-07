#include <iostream>
#include <string>
#include <ctime>
#include "CaminhoMatriz.hpp"
using namespace std;
int
main ()
{
  CaminhoMatriz j;
  int l, c, n, soma;
  l = 0;
  c = 0;
  cout << "manda o n" << endl;
  cin >> n;
  j.setN (n);
  j.create (n);
  soma = j.grade[l][c];
  cout << "Original:" << endl;
  j.mostra (n);

  do
    {

      if (l < n && j.grade[(l + 1)][c] >= j.grade[l][(c + 1)]
	  && j.grade[(l + 1)][c] >= j.grade[l][(c - 1)])
	{
	  j.setGrade (l, c);
	  l++;
	  soma = soma + j.grade[l][c];
	}

      else if (c < n && j.grade[l][(c + 1)] > j.grade[(l + 1)][(c)]
	       && j.grade[l][c + 1] >= j.grade[l][(c - 1)])
	{
	  j.setGrade (l, c);
	  c++;
	  soma = soma + j.grade[l][c];
	}
      else
	{
	  j.setGrade (l, c);
	  c--;
	  soma = soma + j.grade[l][c];
	}
    }
  while (l != (n - 1));


      while (c != (n - 1))
	{
	  j.setGrade (l, c);
	  c++;
	  soma = soma + j.grade[l][c];
	}


  

  j.setGrade (l, c);

  cout << "Matriz caminhada:" << endl;
  j.mostra (n);
  cout << "o tamanho do caminho foi: " << soma << endl;

  return 0;
}
