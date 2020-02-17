# https://www.hackerrank.com/challenges/zipped/problem
n, x = input().split()

li_ans = []
for i in range(int(x)):
    li = []
    li = list(map(float, input().split()) )
    li_ans.append(li)

for tuple in list(zip(*li_ans)):
    print(sum(tuple)/int(x))
       
