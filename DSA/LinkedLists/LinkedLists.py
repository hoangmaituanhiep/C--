class List:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.pre = None

    def traverse(node1):
        current = node1
        start = node1
        
        #Preprocess
        print(current)
        current = current.next

        while current != start:
            print(current)
            current = current.next
        print('end.')

def min_var(node1):
    min = node1.data
    current = node1.next
    while current:
        if min > current.data:
            min = current.data
        current = current.next
    return min
def rmv(node1, deleting):
    current = node1
    
    while current:
        if 

ph1 = List(1)
ph2 = List(2)
ph3 = List(3)
ph4 = List(4)

ph1.next = ph2
ph2.next = ph3
ph3.next = ph4

ph1.pre = ph4
ph2.pre = ph1
ph3.pre = ph2
ph4.pre = ph3

print(min_var(ph1))