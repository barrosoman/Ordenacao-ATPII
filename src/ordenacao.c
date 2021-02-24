#include "ordenacao.h"

double vector[MAX_VECTOR_NUMBERS];
double busca[MAX_BUSCA_NUMBERS];

int main() {
    int vectorSize, buscaSize, option;

    vectorSize = getVectorSize();
    buscaSize = getBuscaSize();

    printMenu();
    scanf(" %d", &option);
    switch (option) {
        case NO_ORD:
            seqSearch(buscaSize, vectorSize);
            break;
        case INSERT_W_SEQ:
            insertionSort(vectorSize);
            seqSearch(buscaSize, vectorSize);
            break;
        case SHELL_W_SEQ:
            shellSort(vectorSize);
            seqSearch(buscaSize, vectorSize);
            break;
        case QUICK_W_SEQ:
            quickSort(0, vectorSize - 1);
            seqSearch(buscaSize, vectorSize);
            break;
        case INSERT_W_BIN:
            insertionSort(vectorSize);
            binSearch(buscaSize, vectorSize);
            break;
        case SHELL_W_BIN:
            shellSort(vectorSize);
            binSearch(buscaSize, vectorSize);
            break;
        case QUICK_W_BIN:
            quickSort(0, vectorSize - 1);
            binSearch(buscaSize, vectorSize);
            break;
        default:
            break;
    }
    for (int i = 0; i < vectorSize; i++) {
        printf("%lf\n", vector[i]);
    }

    return 0;
}
