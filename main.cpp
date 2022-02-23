#include <iostream>
using namespace std;

template<class T> void swap(T a, T b){
    T c = a;
    a = b;
    b = c;
}

void print_array(int array[], int size){
    for (int i=0; i<size; i++){
        cout << array[i] << '\t';
    }
}


const unsigned int N = 10;

int field[N*N];
unsigned int dllist[N*N];


void init_field(unsigned int n, unsigned int mark);

void gen_dls(unsigned int n, unsigned int k){
    int mark;
    if (2 * k > n * n){
        mark = 0;
        k = n - k;
    } else{
        mark = 1;
    }
//    init_field(field, n, mark);

    for (int i=0; i<k; i++){

    }
}

void move(unsigned int n, unsigned int k);


void run(unsigned int n, unsigned int k) {
    unsigned int new_field[n*n];
    while (k != 0){
//        move(n, k);
    }
}

void iterate(const unsigned int n, const unsigned int k){
    gen_dls(n, k);
    run(n, k);
}

int main() {
    auto n = 10, k = 6;

    iterate(n, k);

    return 0;
}
