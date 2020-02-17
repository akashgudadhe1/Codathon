# https://www.hackerrank.com/challenges/py-set-difference-operation/problem
a = int(input())
english = set( map( int, input().split() ) )
b = int(input())
french = set( map( int, input().split() ) )

print( len(english.difference(french)) )
