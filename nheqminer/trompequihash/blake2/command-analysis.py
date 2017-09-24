#-*-coding:utf-8;-*-

import re, sys

faq = set()

reObj = re.compile("_mm(.*)\(")

#print reObj.search("hfoihasdf _mm_23333(")
lines = sys.stdin.readlines()
#print lines
#print "\n".join([x for x in lines if reObj.search(x)])
for x in lines:
    matchObj = reObj.search(x)
    if not matchObj : continue
    for j in matchObj.groups():
        if '(' in j:
            j = j[:j.index("(")]
        faq.add(j)

for x in tuple(faq):
    print "#define _mm%s simde_mm%s" %(x, x)

