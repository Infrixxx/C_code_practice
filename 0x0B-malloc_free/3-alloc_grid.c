#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **grid;
    int row;
    int column;
    
    grid=(int **)malloc(height*sizeof(int*));
    /*incase there is no  height input*/
    if (grid==NULL)
    {
            return NULL;
    }

    /*if there is height input*/
    for(row=0;row<height;row++)
    {
        grid[row]=(int *)malloc(width*sizeof(int));
        
        /*incase width is empty*/
        if (grid[row]==NULL)
        {
            /* Free previously allocated rows */
            for (int i = 0; i < row; i++)
            {
                free(grid[i]);
            }
            free(grid);
            return (NULL);
        }
        
        /* Initialize values in the row to 0 */
        for (column=0;column<width;column++)
        {
            grid[row][column]=0;
    
        }
    }
    
    
    return (grid);   
}

void print_grid(int **grid,int width,int height)
{
    int a;
    int b;
    
    for (a = 0; a < height; a++)
    {
        for (b = 0; b < width; b++)
        {
            printf("%d ",grid[a][b]);
        }
        printf("\n");
    }
}
int main() 
{
    // Write C code here
    int **a;
    
    a= alloc_grid(3,5);
    /*altering contents of array within bounds*/
    a[1][2]=77;
    a[2][2]=66;
    a[0][2]=55;
    
    /*print grid, desired amount*/
    print_grid(a,2,2);

    return 0;
}
