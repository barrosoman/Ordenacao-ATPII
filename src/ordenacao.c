#include "ordenacao.h"

double vector[MAX_VECTOR_NUMBERS];
double busca[MAX_BUSCA_NUMBERS];

int main() {
    int vectorSize,
        buscaSize,
        option;

    vectorSize = getVectorSize();
    buscaSize = getBuscaSize();

    printMenu();
    scanf(" %d", &option);
    switch (option) {
        case NO_ORD:
            break;
        case INSERT_W_SEQ:
            insertionSort(vectorSize);
            break;
        case SHELL_W_SEQ:
            break;
        case QUICK_W_SEQ:
            quickSort(0, vectorSize - 1);
            seqSearch(buscaSize, vectorSize);
            break;
        case INSERT_W_BIN:
            insertionSort(vectorSize);
            break;
        case SHELL_W_BIN:
            break;
        case QUICK_W_BIN:
            break;
        default:
            break;
    }
    /* quick_sort(vector, 0, n - 1); */
    /* insertionSort(n); */

    for (int i = 0; i < vectorSize; i++) {
        printf("%lf\n", vector[i]);
    }

    return 0;
}
