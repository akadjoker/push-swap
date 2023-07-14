from random import seed
from random import random
from random import randint
import os

def removeDup(x):
  return list(dict.fromkeys(x))
  
  
seed(1000000)
l = [] 
for _ in range(500):
	value = randint(-500,500)
	l.append(value)

args = removeDup(l)
s = str(args)
s= s.replace('[','')
s=s.replace(']','')
s=s.replace(',','')


os.environ["ARG"] = s
