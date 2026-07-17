#include "difference_of_squares.h"
unsigned int square_of_sum(unsigned int number){
    unsigned int x =0;
    for(unsigned int i =1; i<=number; i++) {
        x += i;
    }
    return x*x;
}
unsigned int sum_of_squares(unsigned int number){
    unsigned int x=0;
    for(unsigned int i =1; i <= number; i++) {
        x += i*i;
    }
    return x;
}
unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}