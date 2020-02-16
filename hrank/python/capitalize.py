# https://www.hackerrank.com/challenges/capitalize/problem
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    list2 = ""
    list1 = s.split(' ')
    for item in list1:
        list2+=item.capitalize()
        list2+= " "
    return list2

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()

