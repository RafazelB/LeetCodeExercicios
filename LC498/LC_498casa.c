int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize) {
    if ( (*matColSize) == 0 && matSize == 0) {
        *returnSize = 0;
        return NULL;
    }
    int l = 0, c = 0, i = 0, x = 0, z = (*matColSize) * matSize;
    int *output = calloc(z, sizeof(int));
    if ( output == NULL ) {
        exit(1);
    }
    *returnSize = z;
    for (;;) {
        output[i++] = mat[l][c];
        if ( i == z ) {
            break;
        }
        if ( x % 2 == 0 ) {
            if ( c == (*matColSize) - 1 ) {
                l++;
                x++;
            } else if ( l == 0 ) {
                c++;
                x++;
            } else {
                l--;
                c++;
            }
        } else {
            if ( l == matSize - 1 ) {
                c++;
                x++;
            } else if ( c == 0 ) {
                l++;
                x++;
            } else {
                l++;
                c--;
            }
        }
    }
    return output;
}