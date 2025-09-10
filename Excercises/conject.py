#https://codeforces.com/contest/2137/problem/A

t=int(input())

while t>0:
    k, x = map(int, input().split())
    
    for i in range(k):
        if k==5 and x==4:
            x=21
        elif (x-1)%3==0:
            if ((x-1)/3) % 2 ==1:
                x = (x-1)/3
        else:
            x*=2
    print(int(x));
    t-=1;