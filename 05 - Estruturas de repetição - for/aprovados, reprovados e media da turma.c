#include <stdio.h>

int main() {
    int n, i, j, nap = 0, nrep = 0;
    float alunos[100], mturma = 0, temp1 = 0, temp2;
    
    scanf("%i", &n);
    
    for (i = 0; i < n; i++) {
        for (j = 1; j <= 3; j++) {
            scanf("%f", &temp2);
            temp1 += temp2 / 3;
        }
        alunos[i] = temp1, mturma += alunos[i]/n;
        if (alunos[i] >= 5.0)
            nap++;
        else
            nrep++;
        temp1 = 0;
    }
    
    for  (i = 0; i < n; i++)
        printf("Aluno %i:\nMedia: %.1f\n", i + 1, alunos[i]);

    printf("Media da Turma: %.1f\nAprovados: %i\nReprovados: %i", mturma, nap, nrep);
    
    return 0;
}
