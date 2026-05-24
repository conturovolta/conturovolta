#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void generate_Matrix(int size_of_matrix, int distance_of_orgin, int n);

int main() 
{
    int n;
    
    
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int size_of_matrix = (n * 2) - 1;
    int distance_of_orgin = size_of_matrix / 2;

    generate_Matrix(size_of_matrix, distance_of_orgin, n);

    return 0;
}

void generate_Matrix(int size_of_matrix, int distance_of_orgin, int n)
{
    int k, l, i, j;
    int x, y, max_uzaklik;
    int matrix[size_of_matrix][size_of_matrix];

    
    for (k = 0; k < size_of_matrix; k++)
    {
        for (l = 0; l < size_of_matrix; l++)
        {
            x = abs(distance_of_orgin - k);
            y = abs(distance_of_orgin - l);
            
            max_uzaklik = (x > y) ? x : y;
            matrix[k][l] = max_uzaklik + 1;
        }
    }

    
    for (i = 0; i < size_of_matrix; i++)
    {
        for (j = 0; j < size_of_matrix; j++)
        {
            if (j == size_of_matrix - 1) {
                printf("%d", matrix[i][j]);
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n"); 
    }
}