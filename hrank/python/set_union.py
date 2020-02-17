# https://www.hackerrank.com/challenges/py-set-union/problem
a = int(input())
english = set( map( int, input().split() ) )
b = int(input())
french = set( map( int, input().split() ) )

print( len(english.union(french)) )

