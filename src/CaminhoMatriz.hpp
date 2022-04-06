#ifndef CAMINHOMATRI_HPP
#define CAMINHOMATRIZ_HPP
#include <string>

using namespace std;

class CaminhoMatriz{


public:
  int **grade;
  void create (int v);
  
    

  void setN (int n);
  void setGrade (int l, int c);
  void mostra (int n);

};

#endif
