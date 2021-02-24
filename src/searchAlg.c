#include "ordenacao.h"

void seqSearch(const int buscaSize, const int vectorSize) {
    FILE *resultado = fopen("resultado.dat", "w");
    int index;
    for (int i = 0; i < buscaSize; i++) {
        index = getIndexWSeq(busca[i], vectorSize);
        fprintf(resultado, "%d %lf %lf\n", index, vector[index], busca[i]);
    }
    fclose(resultado);
}

int getIndexWSeq(double buscaNumber, const int vectorSize) {
    for (int i = 0; i < vectorSize; i++) {
        if (fabs(buscaNumber - vector[i]) < 0.0001) {
            return i;
        }
    }
    return -1;
}


void binSearch(const int buscaSize, const int vectorSize) {
    FILE *resultado = fopen("resultado.dat", "w");
    int index;
    for (int i = 0; i < buscaSize; i++) {
        index = getIndexWBin(busca[i], vectorSize);
        fprintf(resultado, "%d %lf %lf\n", index, vector[index], busca[i]);
    }
    fclose(resultado);
}

int getIndexWBin(double buscaNumber, const int vectorSize) {
    int min = 0;
    int max = vectorSize - 1;
    int mid;
    while (min <= max) {
        mid = (min + max) / 2;
        if (fabs(buscaNumber - vector[mid]) < 0.0001) {
            return mid;
        } else if  (buscaNumber < vector[mid]) {
            max = mid - 1;
        } else {
            min = mid + 1;
        }
    }
    return -1;
}
