#include <stdio.h>

//Função para vertificar se um elemento esta no array de letras
int s_array(char c, char s[26]) {
    for (int i = 0; i < 26; i++)
        if (c == s[i]) return 1;
    return 0;
}

int main() {
    char texto[200], letters[26];
    int i, j, freq[26];
    
    for (i = 0; i < 26; i++)
        /* Inicializa com ' ' cada elemento do array de
         * letras e zera todos os elementos do array freq
         */
        letters[i] = ' ', freq[i] = 0;
    
    //Recebe o texto
    gets(texto);
    
    for(i = 0; texto[i] != '\0'; i++) {
        //Deixa todas as letras do texto em minúsculo
        texto[i] = tolower(texto[i]);
        if (!s_array(texto[i], letters) && texto[i] != ' ')
            /* Se o elemento nao for um espaço e ainda não estiver
             * no array de letras, adiciona no array de letras
             * na sua posição conforme o alfabeto.
             */
            letters[texto[i] - 97] = texto[i];
    }
    
    for (i = 0; i < 26; i++)
        if(letters[i] != ' '){
            for (j = 0; texto[j] != '\0'; j++)
                /* Verifica quantas vezes cada letra se repetiu
                 * no texto e coloca o valor na sua mesma
                 * posição que letters em freq.
                 */
                if (letters[i] == texto[j]) freq[i]++;
        }
    
    for (i = 0; i < 26; i++)
        for (j = 0; j < 26; j++)
            if(freq[i] > freq[j])
                /* Se houver um elemento com freq maior
                 * que outro, zera todos os menores.
                 */
                freq[j] = 0;
    
    for (i = 0; i < 26; i++)
        if(freq[i])
            //Mostra todas as letras que tem freq diferente de 0
            printf("%c", letters[i]);
    
    return 0;
}
