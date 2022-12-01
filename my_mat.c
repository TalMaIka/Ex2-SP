#include "my_mat.h"
#include <stdio.h>
// Returns minimum value between the two.
// O(1)
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
// 2D global array decleration.
int a[TEN][TEN];

// When the input is 'A'
// Initialization of the 2d array. // O(n^2)
void ACase()
{
    for (int i = 0; i < TEN; i++)
    {
        for (int j = 0; j < TEN; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

// Side func -> BCase / CCase // O(n^2 + n^3) ~ O(n^3)
void makematrix()
{
    // Reclaces a[i][j] to INF if i and j dosen't have a connection.
    // i and j exists in two different graphs. // O(n^2)
    for (int i = 0; i < TEN; i++)
    {
        for (int j = 0; j < TEN; j++)
        {
            if (a[i][j] == 0 && i != j)
            {
                a[i][j] = INF;
            }
        }
    }
    // Floyd-Warshall algorithm. // O(n^3)
    for (int k = 0; k < TEN; k++)
    {
        for (int i = 0; i < TEN; i++)
        {
            for (int j = 0; j < TEN; j++)
            {
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
}

// When the input is 'B'
// Uses the matrix that 'CCase' uses to identify of there is a path between i,j. // O(n^2) > makematrix()
void BCase(int b, int c)
{
    makematrix();
    if (a[b][c] == INF || a[b][c] == 0)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
}

// When the input is 'C'
// returns the shortest path if there is, between i,j trough the matrixes Floyd-Warshall algorithm generates. // O
void CCase(int x, int y)
{
    makematrix();
    int *ptr = *a;
    for (int i = 0; i < (10 * x) + y; i++)
    {
        ptr++;
    }
    if (*ptr == INF || *ptr == 0)
    {
        printf("%d\n", -1);
    }
    else
    {
        printf("%d\n", *ptr);
    }
}
