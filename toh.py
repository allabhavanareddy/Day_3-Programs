def toh(n,source,auxillary,destination):
    if n==0:
        return
    toh(n-1,source,destination,auxillary)
    print(" disk ",n," moved from " ,source, " to ",destination)
    toh(n-1,auxillary,source,destination)
n=int(input())
source,auxillary,destination=input().split()
toh(n,source,auxillary,destination)
