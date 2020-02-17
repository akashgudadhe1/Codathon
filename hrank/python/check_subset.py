# https://www.hackerrank.com/challenges/py-check-subset/problem
n = int(input())

for i in range(n):
    a = int(input())
    set_a = set()
    set_a.update( list( map(int, input().split()) ) )
    
    b = int(input())
    set_b = set()
    set_b.update( list( map(int, input().split()) ) )

    print(set_a.issubset(set_b))
