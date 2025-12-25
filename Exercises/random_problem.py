import time

#De thi PTIT 
#https://www.facebook.com/photo/?fbid=122107807323108949&set=pcb.122107807383108949

def cau1():
    m = int(input())
    n = int(input())
    matrix = [ list(map(int, input().split())) for i in range(m)]
    
    for i in range(m):
        if sum(matrix[i]) %2 != 0:
            print("-Dong", i)


def main():
    start = time.time()

    cau1()

    end = time.time()

main()