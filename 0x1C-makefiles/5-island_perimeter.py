#!/usr/bin/python3
"""mesures an islan permiter"""


def island_perimeter(grid):
    """Returns the perimeter of the island in the grid.

    Args:
        grid (list): 2d list
    Returns:
        int
    """
    w = len(grid[0])
    h = len(grid)
    edges = 0
    size = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j-1] == 1):
                    edges += 1
                if (i > 0 and grid[i-1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
