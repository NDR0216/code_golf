class Solution:averageWaitingTime=lambda _,c,t=0:sum((t:=max(t,a)+b)-a for a,b in c)/len(c)
