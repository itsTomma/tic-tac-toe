#include <stdio.h>

#define ROW 3
#define COLUMNS 3

void initializeGrid(char t[ROW][COLUMNS])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            t[i][j] = ' ';
        }
    }
}

void showGrid(char t[ROW][COLUMNS])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("[ %c ]", t[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char cells[ROW][COLUMNS];

    initializeGrid(cells);
    showGrid(cells);

    return 0;
}

