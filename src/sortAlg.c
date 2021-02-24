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

void shellSort(int vectorSize) {
    int i, j,
        h = 1;
    double temp;

    while(h < vectorSize) {
        h = 3*h+1;
    }
    while (h > 0) {
        for(i = h; i < vectorSize; i++) {
            temp = vector[i];
            j = i;
            while (j > h-1 && temp < vector[j - h]) {
                vector[j] = vector[j - h];
                j = j - h;
            }
            vector[j] = temp;
        }
        h = h/3;
    }
}

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
