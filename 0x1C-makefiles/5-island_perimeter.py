#!/usr/bin/python3
""" Technical interview prep """


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid (matrix)'''
    if len(grid) == 0:
        return 0
    width = len(grid[0])
    height = len(grid)
    count = 0

    for y in range(height):
        for x in range(width):
            if grid[y][x] == 1:  # current element

                # ask if element above exists, then ask which element it is
                if y == 0:
                    count +=1
                elif grid[y - 1][x] == 0:
                    count += 1

                # ask if element below exists, then ask which element it is
                if y == (height - 1):
                    count += 1
                elif grid[y + 1][x] == 0:
                    count += 1

                # ask if element to left exists, then ask which element it is
                if x == 0:
                    count += 1
                elif grid[y][x - 1] == 0:
                    count += 1
                # ask if element to right exists, then ask which element it is
                if x == (width - 1):
                    count += 1
                elif grid[y][x + 1] == 0:
                    count += 1
    return count
