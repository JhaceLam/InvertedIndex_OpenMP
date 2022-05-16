#include <cstdio>
#include <iostream>
#include <omp.h>
using namespace std;

const int NUM_THREADS = 4;

int main() {
    int sum = 0;
    #pragma omp parallel num_threads(NUM_THREADS)
    {
        #pragma omp for reduction(+:sum) 
        for(int i = 1; i <= 100; i++) {
            sum += i;
        }
        cout << omp_get_thread_num() << endl;
    }

    cout << sum << endl;
}