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


void init_field(int field[], unsigned int n, unsigned int mark);

void gen_dls(int field[], unsigned int n, unsigned int dllist[], unsigned int k){
    int mark;
    if (2 * k > n){
        mark = 0;
        k = n - k;
    } else{
        mark = 1;
    }
//    init_field(field, n, mark);

    for (int i=0; i<k; i++){

    }
}

void move();


void run(int field[], unsigned int n, unsigned int dllist[], unsigned int k) {
    unsigned int new_field[n*n];
    while (k != 0){
//        move(field, n*n, dllist, k);
    }
}

void iterate(const unsigned int n, const unsigned int k){

    gen_dls(field, n*n, dllist, k);
    run(field, n*n, dllist, k);
}

int main() {


    iterate(n, k);

    return 0;
}
