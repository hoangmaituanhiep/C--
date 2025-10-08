class List:
    def __init__(self, data):
        self.data = data
        self.next = None

ph1 = List(1)
ph2 = List(2)
ph3 = List(3)
ph4 = List(4)

ph1.next = ph2
ph2.next = ph3
ph3.next = ph4
ph4.next = ph1

start = ph1
current = ph1
while current:
    print(current.data)
    current = current.next
    if current == start:
        break