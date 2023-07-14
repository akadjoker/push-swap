from random import seed
from random import random
from random import randint
import subprocess
from subprocess import STDOUT, PIPE
import subprocess

def removeDup(x):
  return list(dict.fromkeys(x))
  
def runProcess(command, args=[],wait=True):
    args = [command] + args
    def cmd_args_to_str(cmd_args):
        return ' '.join([arg if not ' ' in arg else '"%s"' % arg for arg in cmd_args])
    proc = subprocess.Popen(args,
        stdout = subprocess.PIPE,
        stderr = subprocess.PIPE,
    )
    
    stdout, stderr = proc.communicate()
    if wait:
        proc.wait()
    return proc.returncode, stdout, stderr
    
seed(1000000)
l = [] 
for _ in range(100):
	value = randint(0,1000)
	l.append(value)

args = removeDup(l)
s = str(args)
s= s.replace('[','')
s=s.replace(']','')
s=s.replace(',','')



#print(s)

#s ="4 67 3 87 23"
#subprocess.run(["./push_swap", s])

args=[]
args.append(s)
args.append(" | ")

args.append("./checker")
args.append(s)
code, out, err=runProcess('./push_swap',args)
if code!=0:
    print(err.decode("utf-8") )
    print("Operation Fail  .. ")
    exit()
print(out.decode("utf-8"))

'''
cmd ="./push_swap  | wc -l"
proc = subprocess.Popen(cmd,stdout = subprocess.PIPE,stderr = subprocess.PIPE,)
stdout, stderr = proc.communicate()
#return proc.returncode, stdout, stderr
if  proc.returncode!=0:
    print(stderr.decode("utf-8") )
    print("Operation Fail  .. ")
    exit()
print(stdout.decode("utf-8"))
'''

'''
args=[]
args.append(s)
code, out, err=runProcess('./checker',args)
if code!=0:
    print(err.decode("utf-8") )
    print("Operation Fail  .. ")
    exit()
print(out.decode("utf-8"))


'''

