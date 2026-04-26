int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize) {
    int l = 0, c = 0, i = 0, x = 0, h = 0, z = 0;
    int *output;
    for (;;) {
        if ( x == 0 ) {
            output = (int *)malloc(sizeof(int));
            output[i] = mat[0][0];
            i++;
        } else if ( x % 2 == 0 && x == l + c ) {
            if ( l >= c ) {
                l--;
                c++;
                output[i] = mat[l][c];
                i++;
                output = realloc(output, sizeof(int) * ( i + 1 ) );
            } else {
                output[i] = mat[l][c];
                i++;
                l++;
                output = realloc(output, sizeof(int) * ( i + 1 ) );
            }
        } else if ( x % 2 == 1 && x == l + c ) {
            if ( c >= l ) {
                output[i] = mat[l][c];
                i++;
                l++;
                c--;
                output = realloc(output, sizeof(int) * ( i + 1 ) );
            } else {
                output[i] = mat[l][c];
                i++;
                c++;
                output = realloc(output, sizeof(int) * ( i + 1 ) );
            }
        } else {
            x++;
            h = 0;
        }
        returnSize++;
        if ( l == matSize && c == matColSize) {
            break;
        }
    }
    return output;
}
// 0,0 -> 0,1 -> 1,0 -> 2,0 -> 1,1 -> 0,2 -> 1,2 -> 2,1 -> 2,2 (l,c)
// 0   -> 1   -> 1   -> 2   -> 2   -> 2   -> 3   -> 3   -> 4 (x)
// l + c = x

// 0,0 -> 0,1 -> 1,0 -> 1,1
// 0   -> 1   -> 1   -> 2