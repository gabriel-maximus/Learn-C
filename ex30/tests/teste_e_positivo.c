#include "minunit.h"

int e_positivo(int);

MU_TEST(teste_passa_10_retorna_true){
    //escreve o teste aqui
    int numero_a_ser_testado = 10;
    int resultado_esperado = 1;

    int resultado_obtido;
    resultado_obtido = e_positivo(numero_a_ser_testado);

    mu_assert_int_eq(resultado_esperado, resultado_obtido);

}

MU_TEST(teste_passa_menos1_retorna_false){
    //escreve o teste aqui
    int numero_a_ser_testado = -1;
    int resultado_esperado = 0;

    int resultado_obtido;
    resultado_obtido = e_positivo(numero_a_ser_testado);

    mu_assert_int_eq(resultado_esperado, resultado_obtido);

}

MU_TEST_SUITE(test_suite){
    MU_RUN_TEST(teste_passa_10_retorna_true);
    MU_RUN_TEST(teste_passa_menos1_retorna_false);
}

int main(){
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}

//para dar run: digitar o código:
//   gcc ../src/e_positivo.c ./teste_e_positivo.c  -lm -o programa_teste && ./programa_teste
