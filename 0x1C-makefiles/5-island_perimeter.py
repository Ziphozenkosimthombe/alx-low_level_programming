#!usr/bin/python2
"""perimeter"""


def island_perimeter(grid):
    """eturns the perimeter of the
    island described in grid
    """
    counter = 0
    rows = len(grid)
    columns = len(grid[0])

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                neighbors = 0

                if i > 0 and grid[i - 1][j] == 1:
                    neighbors += 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    neighbors += 1
                if j > 0 and grid[i][j - 1] == 1:
                    neighbors += 1
                if j < columns - 1 and grid[i][j + 1] == 1:
                    neighbors += 1

                counter += 4 - neighbors
    return counter
