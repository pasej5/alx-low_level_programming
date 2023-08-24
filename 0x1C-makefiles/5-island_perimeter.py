#!/usr/bin/python3
"""calculate the perimeter of the island described in the grid"""


def island_perimeter(grid):
    """
    calculate the perimeter of the island described in the grid

    Args:
    grid (list of list of integers): A grid representation of land and water

    Return:
    int: the perimeter of the island.
    """

    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
