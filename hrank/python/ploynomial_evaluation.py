'''
  https://www.hackerrank.com/challenges/input/problem
  https://towardsdatascience.com/python-eval-built-in-function-601f87db191
''' 
x, k = input().split()
x = int(x)
str1 = input()        

result = eval(str1.replace('x', '{v1}').format(v1=x) ) 
print( result==int(k) )
