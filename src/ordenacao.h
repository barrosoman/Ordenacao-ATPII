#include <math.h>
#include <stdio.h>
#include <time.h>
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

void printMenu();

int getBuscaSize();
int getVectorSize();

void seqSearch(const int buscaSize, const int vectorSize);
int getIndexWBin(double buscaNumber, const int vectorSize);
void binSearch(const int buscaSize, const int vectorSize);
int getIndexWSeq(double buscaNumber, const int vectorSize);

void shellSort(const int vectorSize);
void quickSort(int l, int u);
double partition(int l, int u);
void insertionSort(const int n);

void noOrdSeqSearch(const int buscaSize, const int vectorSize);
void insOrdSeqSearch(const int buscaSize, const int vectorSize);
void sheOrdSeqSearch(const int buscaSize, const int vectorSize);
void quiOrdSeqSearch(const int buscaSize, const int vectorSize);
void insOrdBinSearch(const int buscaSize, const int vectorSize);
void sheOrdBinSearch(const int buscaSize, const int vectorSize);
void quiOrdBinSearch(const int buscaSize, const int vectorSize);
