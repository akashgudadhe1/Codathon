import sys
lines = []

for l in sys.stdin:
  lines.append(l.rstrip('\r\n'))
  
def g(b):
  N = len(b) 
  if N == 0: 
      return
  N = 2*N+1
  L = [0] * N 
  L[0] = 0
  L[1] = 1
  R = 2
  i = 0
  C = 1
  Mi = 0
  maxpl = 0
  maxpcp = 0
  start = -1
  end = -1
  dd = -1
  for i in range(2,N-1): 
      Mi = 2*C-i 
      L[i] = 0
      dd = R - i 
      if dd > 0: 
          L[i] = min(L[Mi], dd) 
      try: 
          while ((i+L[i]) < N and (i-L[i]) > 0) and (((i+L[i]+1) % 2 == 0) or (b[(i+L[i]+1)/2] == b[(i-L[i]-1)/2])): 
              L[i]+=1
      except Exception as e: 
          pass
  
      if L[i] > maxpl:
          maxpl = L[i] 
          maxpcp = i 
      if i + L[i] > R: 
          C = i 
          R = i + L[i] 
  start = (maxpcp - maxpl) / 2
  end = start + maxpl - 1 
  print(b[int(start):int(end+1)])
g(lines[0])


