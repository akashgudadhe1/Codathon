'''
 https://www.hackerrank.com/challenges/string-validators/problem

 Python any() function accepts iterable (list, tuple, dictionary etc.) as an argument and return true if any of the element in iterable is true, else it returns false. If iterable is empty then any() method returns false
'''

if __name__ == '__main__':
    str1 = input()
    print ( any( s.isalnum() for s in str1) )
    print ( any( s.isalpha() for s in str1) )
    print ( any( s.isdigit() for s in str1) )
    print ( any( s.islower() for s in str1) )
    print ( any( s.isupper() for s in str1) )

