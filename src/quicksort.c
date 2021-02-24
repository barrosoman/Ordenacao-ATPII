#include "ordenacao.h"

void quickSort(int l, int u) {
    double j;
    if (l < u) {
        j = partition(l, u);
        quickSort(l, j - 1);
        quickSort(j + 1, u);
    }
}

double partition(int l, int u) {
    double v, temp;
    int i, j;
    v = vector[l];
    i = l;
    j = u + 1;

    do {
        do i++;

        while (vector[i] < v && i <= u);

        do j--;
        while (v < vector[j]);

        if (i < j) {
            temp = vector[i];
            vector[i] = vector[j];
            vector[j] = temp;
        }
    } while (i < j);

    vector[l] = vector[j];
    vector[j] = v;

    return (j);
}
