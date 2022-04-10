#include <iostream>
#include <string>
#include <ctime>
#include "CaminhoMatriz.hpp"
using namespace std;
int
main ()
{
  CaminhoMatriz j;
  int l, c, n, soma, val, decidir;

  l = 0;
  c = 0;
  val = 0;

  cout << "Manda o n de linhas e colunas da matriz" << endl;
  cin >> n;

  j.setN (n);
  j.create (n);

  soma = j.grade[l][c];

  cout << "Original:" << endl;
  j.mostra (n);

  int valores[(n * n)];

  valores[val] = j.grade[l][c];

  do
    {

      if (l < n && j.grade[(l + 1)][c] >= j.grade[l][(c + 1)]
	  && j.grade[(l + 1)][c] >= j.grade[l][(c - 1)])
	{
	  val++;
	  j.setGrade (l, c);
	  l++;
	  soma = soma + j.grade[l][c];
	  valores[val] = j.grade[l][c];
	}

      else if (c < n && j.grade[l][(c + 1)] > j.grade[(l + 1)][(c)]
	       && j.grade[l][(c + 1)] >= j.grade[l][(c - 1)])
	{
	  val++;
	  j.setGrade (l, c);
	  c++;
	  soma = soma + j.grade[l][c];
	  valores[val] = j.grade[l][c];
	}
      else
	{
	  val++;
	  j.setGrade (l, c);
	  c--;
	  soma = soma + j.grade[l][c];
	  valores[val] = j.grade[l][c];
	}
    }
  while (l != (n - 1));


  while (c != (n - 1))
    {
      val++;
      j.setGrade (l, c);
      c++;
      soma = soma + j.grade[l][c];
      valores[val] = j.grade[l][c];
    }




  j.setGrade (l, c);

  cout << "Matriz caminhada:" << endl;
  j.mostra (n);
  cout << "O tamanho do caminho foi: " << soma << endl;

  cout <<
    "Deseja ver o caminho do primeiro ao ultimo digito [1] ou do ultimo ao primeiro? [qualquer outro n]"
    << endl;
  cin >> decidir;

  if (decidir == 1)
    {
      cout << "Os numeros caminhados foram: ";
      for (int i = 0; i <= val; i++)
	{
	  cout << valores[i] << " ";
    }}

  else
    {
      cout << "Os numeros caminhados foram: ";
      for (int i = val; i >= 0; i--)
	{
	  cout << valores[i] << " ";
	}
    }

  return 0;
}
