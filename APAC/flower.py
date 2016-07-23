from numpy import irr
t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    l[0]=-l[0]
    print("Case #%d: %.12f" % (i+1,round(irr(l),12)))