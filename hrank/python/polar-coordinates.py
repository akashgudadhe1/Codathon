# https://www.hackerrank.com/challenges/polar-coordinates/problem
import math
from cmath import phase

number = complex(input())
r = math.sqrt( (number.real**2) + (number.imag**2))

print (r)
print(phase(complex(number.real, number.imag)))
