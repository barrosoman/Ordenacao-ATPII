#include "ordenacao.h"

void seqSearch(const int buscaSize, const int vectorSize) {
    FILE *resultado = fopen("resultado.dat", "w");
    int index;
    for (int i = 0; i < buscaSize; i++) {
        index = getIndex(busca[i], vectorSize);
        fprintf(resultado, "%d %lf %lf\n", index, vector[index], busca[i]);
    }
}

int getIndex(double buscaNumber, const int vectorSize) {
    for (int i = 0; i < vectorSize; i++) {
        if (fabs(buscaNumber - vector[i]) < 0.0001) {
            return i;
        }
    }
    return -1;
}
