#include <stdio.h>
#include <math.h>
#define MAX_VECTOR_NUMBERS 500000
#define MAX_BUSCA_NUMBERS 100000

enum MENU_OPTIONS {
         NO_ORD = 1,
         INSERT_W_SEQ,
         SHELL_W_SEQ,
         QUICK_W_SEQ,
         INSERT_W_BIN,
         SHELL_W_BIN,
         QUICK_W_BIN,

};

extern double vector[MAX_VECTOR_NUMBERS];
extern double busca[MAX_BUSCA_NUMBERS];

void quickSort(int l, int u);
double partition(int l, int u);
void insertionSort(const int n);
void printMenu();
int getBuscaSize();
int getVectorSize();
void seqSearch(const int buscaSize, const int vectorSize);
int getIndex(double buscaNumber, const int vectorSize);
