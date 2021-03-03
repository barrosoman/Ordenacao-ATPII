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
            noOrdSeqSearch(buscaSize, vectorSize);
            break;
        case INSERT_W_SEQ:
            insOrdSeqSearch(buscaSize, vectorSize);
            break;
        case SHELL_W_SEQ:
            sheOrdSeqSearch(buscaSize, vectorSize);
            break;
        case QUICK_W_SEQ:
            quiOrdSeqSearch(buscaSize, vectorSize);
            break;
        case INSERT_W_BIN:
            insOrdBinSearch(buscaSize, vectorSize);
            break;
        case SHELL_W_BIN:
            sheOrdBinSearch(buscaSize, vectorSize);
            break;
        case QUICK_W_BIN:
            quiOrdBinSearch(buscaSize, vectorSize);
            break;
        default:
            break;
    }

    return 0;
}
