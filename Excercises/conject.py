#https://codeforces.com/contest/2137/problem/A

t=int(input())

while t>0:
    k, x = map(int, input().split())
    
    for i in range(k):
        if (x-1)%3==0:
            if ((x-1)/3) % 2 ==1:
                x = (x-1)/3
        else:
            x*=2
    print(int(x));
    t-=1;