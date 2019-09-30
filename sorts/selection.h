//
// Created by conejo on 30/9/19.
// tomado de https://www.geeksforgeeks.org/selection-sort/
//


#ifndef SORTS_SELECTION_H
#define SORTS_SELECTION_H


class selection {
public:
    static void sort(int arr[], int n);

private:
    static void swap(int *xp, int *yp);
};


#endif //SORTS_SELECTION_H
