#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **h; /* pointer to everything */
    int j;
    int i;

    h = (int **)malloc(height * sizeof(int *));
    
    /* error handling if row is empty*/
    if (h == NULL)
    {
        return NULL; /* failed to allocate memory for rows */
    }

    for (j = 0; j < height; j++)
    {
        h[j] = (int *)malloc(width * sizeof(int));
        if (h[j] == NULL)
        {
         
	   /* failed to allocate memory for columns in this row */
            for (i = 0; i < j; i++)
            {
                free(h[i]);
            }
	    /* if if there's no column entry, rows will be empty*/
            free(h);
            return NULL;
        }

        for (i = 0; i < width; i++)
        {
            h[j][i] = 0;
        }
    }

    return h; /* return the pointer to the matrix */
}

void print_grid(int **grid, int width, int height)
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int **a;

    a = alloc_grid(2, 2);
    
    a[0][1]=7;
    
    if (a != NULL)
    {
        print_grid(a, 2, 2);
    }

    return 0;
}

