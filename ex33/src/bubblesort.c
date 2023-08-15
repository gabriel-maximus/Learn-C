void bubblesort(int numeros[], int tamanho) {
    int i, aux, contador;

    for (contador = 1; contador < tamanho; contador++) {
        for (i = 0; i < (tamanho - 1); i++) {
            if (numeros[i] > numeros[i + 1]) {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
}