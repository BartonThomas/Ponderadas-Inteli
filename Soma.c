#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

#define N 100000000

int main() {
    int *vetor;
    long soma_omp, soma_serial = 0;
    double omp_start_time, omp_end_time, serial_start_time, serial_end_time;
    int i;

    vetor = (int *)malloc(N * sizeof(int));

    srand(time(NULL));
    for (i = 0; i < N; i++) {
        vetor[i] = rand() % 100;
    }

    omp_start_time = omp_get_wtime();

    // Paralelizando a soma com OpenMP
    #pragma omp parallel for reduction(+:soma_omp)
    for (i = 0; i < N; i++) {
        soma_omp += vetor[i];
    }

    omp_end_time = omp_get_wtime();

    serial_start_time = omp_get_wtime();

    for (i = 0; i < N; i++) {
        soma_serial += vetor[i];
    }

    serial_end_time = omp_get_wtime();

    printf("\n\n\n\n");
    printf("Soma Paralelizada: %lld\n", soma_omp);
    printf("Tempo Paralelizado: %f segundos\n", omp_end_time - omp_start_time);
    printf("\n\n");
    printf("Soma Serial: %lld\n", soma_serial);
    printf("Tempo Serial: %f segundos\n", serial_end_time - serial_start_time);
    printf("\n\n\n\n");

    free(vetor);
    return 0;
}
