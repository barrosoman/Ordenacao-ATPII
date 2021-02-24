#include "ordenacao.h"

void insertionSort(const int n) {
    double temp;
    int j;
    for (int i = 1; i < n; i++) {
        temp = vector[i];
        j = i - 1;
        while ((temp < vector[j]) && (j >= 0)) {
            vector[j + 1] = vector[j];
            j = j - 1;
        }
        vector[j + 1] = temp;
    }
}
