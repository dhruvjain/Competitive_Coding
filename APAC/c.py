#!/usr/bin/python2
# -*- coding:utf-8 -*-
# Created Time: 日  7/10 15:16:10 2016
# Purpose: TODO
# Mail: tracyliang18@gmail.com

FILE = "c.txt"
FILE = "c.small"
FILE = "c.large"

carray = []

def f1(x):
    ret = 0
    cur = 1
    for ind in range(len(carray) - 1):
        ret += cur * carray[len(carray) - 1 - ind]
        cur *= (1+x)
    return ret

def f2(x):
    return carray[0] * ((1+x)**(len(carray) - 1))

with open(FILE) as f:
    contents = f.readlines()
    T = int(contents[0])
    for i in range(T):
        inp = contents[2*(i+1)]
        carray = inp.strip().split()
        carray = map(int, carray)
        # binary search
        left = -1.
        right = 1.
        eps = 1e-10
        while right - left > eps:
            mid = (right + left) / 2
            lv = f1(mid)
            rv = f2(mid)
            if lv > rv:
                left = mid
            elif lv < rv:
                right = mid
            else:
                left = mid
                break
        print "case #{}: {}".format(i+1, left)


