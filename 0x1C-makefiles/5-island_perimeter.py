#!/usr/bin/python3
"""This module contains a function to calculate the perimeter of an island."""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island using the grid.
    """
    height = len(grid)
    width = len(grid[0])
    count = 0
    size = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    count += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    count += 1
    return size * 4 - count * 2
