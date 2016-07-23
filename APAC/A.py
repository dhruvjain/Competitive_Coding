
inputstr='0'
lenstr = 1
import math

def switchstr(inputstr):
	srr=''
	for charac in inputstr:
		if(charac=='0'):
			srr+='1'
		else:
			srr+='0'

	return srr

while lenstr<=100000:
	inputstr = inputstr + '0' + switchstr(inputstr[::-1]) 
	lenstr = 1 + 2*lenstr

for t in xrange(1, input() + 1):
	num=input()
	print "Case #" + str(t) + ":",
	if(num<=100000):
		print inputstr[num-1]
	else:
		
		revrese = False
		flag=0
		while num>100000:
			num2=int(math.log(num,2))
			x=2**num2
			diff = num%x
			if diff==0:
				flag = 1
				break
			else:
				num = x-diff
				revrese = not(revrese)
		if (flag==1):
			print 0
		elif(revrese):
			if inputstr[num-1]=='0':
				print 1
			else:
				print 0
		else:
			print inputstr[num-1]

