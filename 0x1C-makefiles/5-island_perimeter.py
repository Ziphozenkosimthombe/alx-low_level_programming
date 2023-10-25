#!/usr/bin/python3
""" Island Perimeter"""


def island_perimeter(grid):
    """
    returns the perimeter of
    the island described in grid:
    """
    count = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Count the number of land neighbors
                neighbors = 0

                if i > 0 and grid[i - 1][j] == 1:
                    neighbors += 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    neighbors += 1
                if j > 0 and grid[i][j - 1] == 1:
                    neighbors += 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    neighbors += 1

                # Add to the count based on the number of land neighbors
                count += 4 - neighbors

    return count
