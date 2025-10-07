class stack:
    def __init__(self):
        self.stack = []
    def push(self, element):
        self.stack.append(element)
    def isEmpty(self):
        return len(self.stack) == 0
    def pop(self):
        if self.isEmpty() == False:
            self.stack.pop()
        else:
            return "Empty"
    def peek(self):
        if self.isEmpty():
            return "Empty"
        return self.stack[-1]
    def size(self):
        return len(self.stack)