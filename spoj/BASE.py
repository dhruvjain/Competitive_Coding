# import sys
# def baseN(num,b,numerals="0123456789ABCDEF"):
#     return ((num == 0) and numerals[0]) or (baseN(num // b, b, numerals).lstrip(numerals[0]) + numerals[num % b])

# b = raw_input()
# while b:
# 	s, bx, by = b.split()
	
# 	t = baseN(int(s, int(bx)), int(by))
# 	print "  ERROR"  if len(t) > 7 else  t.rjust(7, ' ')
# 	b = raw_input()
# a,b,c = raw_input().split(' ')
# while a:
# 	ans = baseN(int(a,int(b)),int(c))
# 	if(len(ans)>7):
# 		print "ERROR"
# 	else:
# 		print ans
# 	a ,b,c= raw_input().split(' ')
import sys
def base(num,b,numerals="0123456789ABCDEF"):
    return ((num == 0) and numerals[0]) or (baseN(num // b, b, numerals).lstrip(numerals[0]) + numerals[num % b])
    
for b in sys.stdin.readlines():
	s, bx, by = b.split()
	t = base(int(s, int(bx)), int(by))
	print "  ERROR"  if len(t) > 7 else  t.rjust(7, ' ')
# import sys
# def baseN(num,b,numerals="0123456789ABCDEF"):
#     return ((num == 0) and numerals[0]) or (baseN(num // b, b, numerals).lstrip(numerals[0]) + numerals[num % b])

# 	return res[::-1]
# for b in sys.stdin.readlines():
# 	s, bx, by = b.split()
# 	t = base(int(s, int(bx)), int(by))
# 	print "  ERROR"  if len(t) > 7 else  t.rjust(7, ' ')