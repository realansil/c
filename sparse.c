#include <stdio.h>

int main()

{

int matrix[3][3] = {

{0, 0, 3}, {0, 5, 0},

{7, 0, 0} };

int tuple[10][3]; int i, j, k = 1;

// First row: rows, columns, non-zero count (filled later) tuple[0][0] = 3; tuple[0][1] = 3; tuple[0][2] = 0;

// Convert matrix to tuple form for(i = 0; i < 3; i++)

{ for(j = 0; j < 3; j++) { if(matrix[i][j] != 0) {

tuple[k][1] = j; // Column tuple[k][2] = matrix[i][j]; // Value

}

}

}

tuple[0][2] = k - 1; // Number of non-zero elements

printf("Tuple Representation:\n");

printf("Row\tCol\tValue\n");

for(i = 0; i < k; i++)

{

printf("%d\t%d\t%d\n", tuple[i][0], tuple[i][1], tuple[i][2]);

}

return 0;

}
