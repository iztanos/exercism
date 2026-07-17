#include "difference_of_squares.h"

#define MAX_VALID_N 361

static unsigned int lookup_square_of_sum[MAX_VALID_N + 1];
static unsigned int lookup_sum_of_squares[MAX_VALID_N + 1];
static int is_initialized = 0;

static void initialize_lookups(void) {
    for (unsigned int i = 0; i <= MAX_VALID_N; i++) {
        unsigned int sum = (i * (i + 1)) / 2;
        lookup_square_of_sum[i] = sum * sum;
        lookup_sum_of_squares[i] = (i * (i + 1) * (2 * i + 1)) / 6;
    }
    is_initialized = 1;
}

unsigned int square_of_sum(unsigned int number) {
    if (!is_initialized) {
        initialize_lookups();
    }
    if (number > MAX_VALID_N) return 0; 
    return lookup_square_of_sum[number];
}

unsigned int sum_of_squares(unsigned int number) {
    if (!is_initialized) {
        initialize_lookups();
    }
    if (number > MAX_VALID_N) return 0; 
    return lookup_sum_of_squares[number];
}

unsigned int difference_of_squares(unsigned int number) {
    if (number > MAX_VALID_N) return 0;
    return square_of_sum(number) - sum_of_squares(number);
}


