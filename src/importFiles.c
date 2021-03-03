#include "ordenacao.h"

int getVectorSize() {
    char line[128];
    int n = 0;
    FILE *vectorFile = fopen("vetor.dat", "r");
    while (fgets(line, sizeof(line), vectorFile)) {
        sscanf(line, " %lf", &vector[n]);
        n++;
    }
    fclose(vectorFile);
    return n;
}

int getBuscaSize() {
    char line[128];
    int n = 0;
    FILE *buscaFile = fopen("busca.dat", "r");
    while (fgets(line, sizeof(line), buscaFile)) {
        sscanf(line, " %lf", &busca[n]);
        n++;
    }
    fclose(buscaFile);
    return n;
}
