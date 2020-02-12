#https://www.hackerrank.com/challenges/python-division/problem


'''
  In Python 3.0, 5 / 2 will return 2.5 and 5 // 2 will return 2. The former is floating point division, and the latter is floor division, sometimes also called integer division.(Answer from stackoverflow.com)
'''

if __name__ == '__main__':
    a = int(input())
    b = int(input())
    print(a//b)
    print(a/b)
