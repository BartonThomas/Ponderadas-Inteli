#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

#define N 1000000  // Tamanho do vetor
#define NUM_THREADS 2

typedef struct {
    int *vetor;
    int inicio;
    int fim;
    long long soma;
} ThreadData;

// Função que cada thread executará
void* calcular_soma(void* arg) {
    ThreadData* data = (ThreadData*)arg;
    data->soma = 0;
    for (int i = data->inicio; i < data->fim; i++) {
        data->soma += data->vetor[i];
    }
    return NULL;
}

int main() {
    int *vetor;
    long long soma_total = 0;
    ThreadData thread_data[NUM_THREADS];
    pthread_t threads[NUM_THREADS];
    int segmento = N / NUM_THREADS;

    vetor = (int *)malloc(N * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 100;
    }

    // Criando e lançando threads
    for (int i = 0; i < NUM_THREADS; i++) {
        thread_data[i].vetor = vetor;
        thread_data[i].inicio = i * segmento;
        thread_data[i].fim = (i == NUM_THREADS - 1) ? N : (i + 1) * segmento;
        pthread_create(&threads[i], NULL, calcular_soma, &thread_data[i]);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
        soma_total += thread_data[i].soma;
    }

    printf("Soma Total: %lld\n", soma_total);

    free(vetor);
    return 0;
}
