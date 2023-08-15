#include "minunit.h"

void bubblesort(int numeros[], int tamanho);

MU_TEST(teste_em_ordem){
    //escreve o teste aqui
    int numero_a_ser_testado[] = {1, 2, 3, 4};
    int resultado_esperado[] = {1, 2, 3, 4};

    int resultado_obtido[4];
    for (int i = 0; i < 4; i++) {
        resultado_obtido[i] = numero_a_ser_testado[i];
    }
    bubblesort(resultado_obtido, 4);

    for (int i = 0; i < 4; i++) {
        mu_assert_int_eq(resultado_esperado[i], resultado_obtido[i]);
    }
}

MU_TEST(teste_inverso){
    //escreve o teste aqui
    int numero_a_ser_testado[] = {4, 3, 2, 1};
    int resultado_esperado[] = {1, 2, 3, 4};

    int resultado_obtido[4];
    for (int i = 0; i < 4; i++) {
        resultado_obtido[i] = numero_a_ser_testado[i];
    }
    bubblesort(resultado_obtido, 4);

    for (int i = 0; i < 4; i++) {
        mu_assert_int_eq(resultado_esperado[i], resultado_obtido[i]);
    }
}

MU_TEST(teste_negativo){
    //escreve o teste aqui
    int numero_a_ser_testado[] = {2, -3, 15, 3};
    int resultado_esperado[] = {-3, 2, 3, 15};

    int resultado_obtido[4];
    for (int i = 0; i < 4; i++) {
        resultado_obtido[i] = numero_a_ser_testado[i];
    }
    bubblesort(resultado_obtido, 4);

    for (int i = 0; i < 4; i++) {
        mu_assert_int_eq(resultado_esperado[i], resultado_obtido[i]);
    }
}

MU_TEST(teste_grande){
    //escreve o teste aqui
    int numero_a_ser_testado[] = {-2, 3, 1, 17, 13, 100, 12345, 21, -300, -4, 14};
    int resultado_esperado[] = {-300, -4, -2, 1, 3, 13, 14, 17, 21, 100, 12345};

    int resultado_obtido[11];
    for (int i = 0; i < 11; i++) {
        resultado_obtido[i] = numero_a_ser_testado[i];
    }
    bubblesort(resultado_obtido, 11);

    for (int i = 0; i < 11; i++) {
        mu_assert_int_eq(resultado_esperado[i], resultado_obtido[i]);
    }
}

MU_TEST_SUITE(test_suite){
    MU_RUN_TEST(teste_em_ordem);
    MU_RUN_TEST(teste_inverso);
    MU_RUN_TEST(teste_negativo);
    MU_RUN_TEST(teste_grande);
}

int main(){
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}

//para dar run: digitar o código:
//   gcc ../src/bubblesort.c ./teste_bubblesort.c -lm -o programa_teste && ./programa_teste
