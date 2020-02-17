# https://www.hackerrank.com/challenges/py-introduction-to-sets/problem

def average(array):
    array = set(array)
    arr_sum = 0
    for i in array:
        arr_sum = arr_sum+i;
    return arr_sum/len(array)    
    # your code goes here

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
