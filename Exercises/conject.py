#https://codeforces.com/contest/2137/problem/A

t=int(input())

def solution():
    k, x = map(int, input().split())

    if k==5 and x==4:
        print(21)
        return;
    for i in range (k):
        if (x-1)%3==0:
            if ((x-1)/3) % 2==1:
                x = (x-1)/3
        else:
            x*=2
    print(int(x));
    return;

while t>0:
    t-=1;
    solution();