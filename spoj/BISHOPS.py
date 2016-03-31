import sys
t=1024
while(t):
	data = input("")
	if(data==0):
		print 0
	elif(data==1):
		print 1
	else:
		print 2*(data-1)

	t=t-1