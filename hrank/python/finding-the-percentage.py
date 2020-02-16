# https://www.hackerrank.com/challenges/finding-the-percentage/problem
if __name__ == '__main__':
    sum1 = 0.0
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    for m in student_marks[query_name]:
        sum1 += m
    
    print( '{:.2f}'.format( sum1/len(scores) ) )


