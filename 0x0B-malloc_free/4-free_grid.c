#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
    int a;
    for (a=0; a<height;a++)
    {
        /*iterates each row and frees memory for each row*/
        free(grid[a]);
    }

    /*frees memory for array of pointers*/
    free(grid);
}
