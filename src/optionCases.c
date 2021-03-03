#include "ordenacao.h"

void noOrdSeqSearch(const int buscaSize, const int vectorSize) {
    clock_t beforeSearch, afterSearch;
    double timeUsed;

    beforeSearch = clock();
    seqSearch(buscaSize, vectorSize);
    afterSearch = clock();

    timeUsed = ((double)(afterSearch - beforeSearch)) / CLOCKS_PER_SEC;

    printf("Tempo de pesquisa: %.4lf s\n", timeUsed);
}

void insOrdSeqSearch(const int buscaSize, const int vectorSize) {
    clock_t beforeSearch, afterSearch, beforeSort, afterSort;
    double sortTime, searchTime, fullTime;

    beforeSort = clock();
    insertionSort(vectorSize);
    afterSort = clock();
    sortTime = ((double)(afterSort - beforeSort)) / CLOCKS_PER_SEC;

    beforeSearch = clock();
    seqSearch(buscaSize, vectorSize);
    afterSearch = clock();
    searchTime = ((double)(afterSearch - beforeSearch)) / CLOCKS_PER_SEC;

    fullTime = sortTime + searchTime;

    printf("Tempo de sorteamento: %.4lf s\n", sortTime);
    printf("Tempo de pesquisa: %.4lf s\n", searchTime);
    printf("Tempo total: %.4lf s\n", fullTime);
}

void sheOrdSeqSearch(const int buscaSize, const int vectorSize) {
    clock_t beforeSearch, afterSearch, beforeSort, afterSort;
    double sortTime, searchTime, fullTime;

    beforeSort = clock();
    shellSort(vectorSize);
    afterSort = clock();
    sortTime = ((double)(afterSort - beforeSort)) / CLOCKS_PER_SEC;

    beforeSearch = clock();
    seqSearch(buscaSize, vectorSize);
    afterSearch = clock();
    searchTime = ((double)(afterSearch - beforeSearch)) / CLOCKS_PER_SEC;

    fullTime = sortTime + searchTime;

    printf("Tempo de sorteamento: %.4lf s\n", sortTime);
    printf("Tempo de pesquisa: %.4lf s\n", searchTime);
    printf("Tempo total: %.4lf s\n", fullTime);
}
void quiOrdSeqSearch(const int buscaSize, const int vectorSize) {
    clock_t beforeSearch, afterSearch, beforeSort, afterSort;
    double sortTime, searchTime, fullTime;

    beforeSort = clock();
    quickSort(0, vectorSize - 1);
    afterSort = clock();
    sortTime = ((double)(afterSort - beforeSort)) / CLOCKS_PER_SEC;

    beforeSearch = clock();
    seqSearch(buscaSize, vectorSize);
    afterSearch = clock();
    searchTime = ((double)(afterSearch - beforeSearch)) / CLOCKS_PER_SEC;

    fullTime = sortTime + searchTime;

    printf("Tempo de sorteamento: %.4lf s\n", sortTime);
    printf("Tempo de pesquisa: %.4lf s\n", searchTime);
    printf("Tempo total: %.4lf s\n", fullTime);
}

void insOrdBinSearch(const int buscaSize, const int vectorSize) {
    clock_t beforeSearch, afterSearch, beforeSort, afterSort;
    double sortTime, searchTime, fullTime;

    beforeSort = clock();
    insertionSort(vectorSize);
    afterSort = clock();
    sortTime = ((double)(afterSort - beforeSort)) / CLOCKS_PER_SEC;

    beforeSearch = clock();
    binSearch(buscaSize, vectorSize);
    afterSearch = clock();
    searchTime = ((double)(afterSearch - beforeSearch)) / CLOCKS_PER_SEC;

    fullTime = sortTime + searchTime;

    printf("Tempo de sorteamento: %.4lf s\n", sortTime);
    printf("Tempo de pesquisa: %.4lf s\n", searchTime);
    printf("Tempo total: %.4lf s\n", fullTime);
}

void sheOrdBinSearch(const int buscaSize, const int vectorSize) {
    clock_t beforeSearch, afterSearch, beforeSort, afterSort;
    double sortTime, searchTime, fullTime;

    beforeSort = clock();
    shellSort(vectorSize);
    afterSort = clock();
    sortTime = ((double)(afterSort - beforeSort)) / CLOCKS_PER_SEC;

    beforeSearch = clock();
    binSearch(buscaSize, vectorSize);
    afterSearch = clock();
    searchTime = ((double)(afterSearch - beforeSearch)) / CLOCKS_PER_SEC;

    fullTime = sortTime + searchTime;

    printf("Tempo de sorteamento: %.4lf s\n", sortTime);
    printf("Tempo de pesquisa: %.4lf s\n", searchTime);
    printf("Tempo total: %.4lf s\n", fullTime);
}

void quiOrdBinSearch(const int buscaSize, const int vectorSize) {
    clock_t beforeSearch, afterSearch, beforeSort, afterSort;
    double sortTime, searchTime, fullTime;

    beforeSort = clock();
    quickSort(0, vectorSize - 1);
    afterSort = clock();
    sortTime = ((double)(afterSort - beforeSort)) / CLOCKS_PER_SEC;

    beforeSearch = clock();
    binSearch(buscaSize, vectorSize);
    afterSearch = clock();
    searchTime = ((double)(afterSearch - beforeSearch)) / CLOCKS_PER_SEC;

    fullTime = sortTime + searchTime;

    printf("Tempo de sorteamento: %.4lf s\n", sortTime);
    printf("Tempo de pesquisa: %.4lf s\n", searchTime);
    printf("Tempo total: %.4lf s\n", fullTime);
}
