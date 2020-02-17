# https://www.hackerrank.com/challenges/itertools-product/problem
from itertools import product

a = list(map(int, input().split()))
b = list(map(int, input().split()))
str1 = ''
for (a, b) in product(a,b):
    str1 += "({}, {}) ".format(a, b)

print(str1)
