# https://www.hackerrank.com/challenges/text-wrap/problem

import textwrap

def wrap(string, max_width):
    str1 = ''
    for i in range(0, len(string), max_width):
        s = string[0+i:max_width+i] 
        str1 += s + '\n'
    return str1


if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
