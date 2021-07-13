#!/usr/bin/python3
"""Defines island perimeter"""


def island_perimeter(grid):
    """Return the perimiter island"""

    x = len(grid[0])
    y = len(grid)
    ed = 0
    size = 0

    for i in range(y):
        for j in range(x):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    ed += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    ed += 1
    return size * 4 - ed * 2
