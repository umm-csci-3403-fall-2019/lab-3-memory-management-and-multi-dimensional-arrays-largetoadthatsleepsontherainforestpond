#ifndef MERGESORT_H_GUARD
#define MERGESORT_H_GUARD

#include <stdbool.h>

#define UNIT_TESTING

void mergesort(int size, int values[]);

void mergesortRange(int start, int end, int values[]);

void mergeRanges(int start, int midPoint, int end, int values[]);
#endif
