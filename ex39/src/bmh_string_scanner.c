#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

void precomputeShifts(char *pattern, int patternLength, int badCharShift[MAX_CHAR]) {
    int i;
    
    for (i = 0; i < MAX_CHAR; ++i) {
        badCharShift[i] = patternLength;
    }
    
    for (i = 0; i < patternLength - 1; ++i) {
        badCharShift[(int)pattern[i]] = patternLength - i - 1;
    }
}

void searchBoyerMooreHorspool(char *text, char *pattern) {
    int textLength = strlen(text);
    int patternLength = strlen(pattern);
    int badCharShift[MAX_CHAR];
    
    precomputeShifts(pattern, patternLength, badCharShift);
    
    int i = 0;
    int occurrences = 0; 
    
    while (i <= textLength - patternLength) {
        int j = patternLength - 1;
        
        while (j >= 0 && pattern[j] == text[i + j]) {
            j--;
        }
        
        if (j < 0) {
            printf("Padrão encontrado na posição %d\n", i);
            
            i += patternLength;
            
            occurrences++;
        } else {
            int badCharShiftValue = badCharShift[(int)text[i + patternLength - 1]];
            
            if (badCharShiftValue <= 0) {
                badCharShiftValue = 1;
            }
            
            i += badCharShiftValue;
        }
    }
    
    if (occurrences == 0) {
        printf("O padrão não foi encontrado na string de texto.\n");
    }
}

int main() {
    char text[] = "Aqui está um exemplo do algoritmo Boyer-Moore-Horspool em C.";
    char pattern[] = "exemplo";
    
    printf("Procurar exemplo\n");
    searchBoyerMooreHorspool(text, pattern);

    char text1[] = "testando um novo padrão de escanear strings. Dessa vez, testando mais de uma aparição.";
    char pattern1[] = "testando";
    char pattern2[] = "nada";

    printf("Procurar testando\n");
    searchBoyerMooreHorspool(text1, pattern1);
    printf("Procurar nada\n");
    searchBoyerMooreHorspool(text1, pattern2);
    
    return 0;
}
