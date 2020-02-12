#https://www.hackerrank.com/challenges/python-print/problem

'''
  https://www.geeksforgeeks.org/python-range-function/
'''

if __name__ == '__main__':
    n = int(input())
    s = ""
    for i in range(1, n+1):
        s = s + str(i)

    print(s)

