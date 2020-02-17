# https://www.hackerrank.com/challenges/calendar-module/problem
from dateutil import parser
din = input()
print( str(parser.parse(din).strftime("%A")).upper() )



