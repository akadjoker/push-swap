from random import seed
from random import random
from random import randint


def removeDup(x):
  return list(dict.fromkeys(x))
  
  
seed(1000000)
l = [] 
for _ in range(100):
	value = randint(-100,100)
	l.append(value)

args = removeDup(l)
s = str(args)
s= s.replace('[','')
s=s.replace(']','')
s=s.replace(',','')

print(s)
