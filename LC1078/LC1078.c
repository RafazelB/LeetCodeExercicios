char** findOcurrences(char* text, char* first, char* second, int* returnSize) {
    char **vetor = malloc(sizeof(char *) * 10), *t0, *t1, *t2, *copia = malloc(strlen(text) + 1);
    strcpy(copia, text);
    vetor[0] = malloc(1 * sizeof(char)); 
    *returnSize = 0;

    t0 = strtok(copia, " ");
    t1 = strtok(NULL, " ");
    t2 = strtok(NULL, " ");

    while ( t0 != NULL && t1 != NULL && t2 != NULL ) {
        int x = *returnSize;
        if ( strcmp(first, t0) == 0 && strcmp(second, t1) == 0 ) { 
            (*returnSize)++;
            vetor[x] = malloc(sizeof(char) * (strlen(t2) + 1));
            strcpy(vetor[x], t2);
        }        
        t0 = t1;
        t1 = t2;
        t2 = strtok(NULL, " ");
    }

    free(copia);
    return vetor;
}
