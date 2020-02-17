# https://www.hackerrank.com/challenges/symmetric-difference/problem
'''
  https://realpython.com/python-sort/#when-to-use-sorted-and-when-to-use-sort
'''

m =  input() 
m_set =set( map(int, input().split()) )
n = input() 
n_set =set( map(int, input().split()) )

set_ans = sorted( m_set.symmetric_difference(n_set) ) 
for item in set_ans:
    print(item)
