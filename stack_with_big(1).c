class stack():
    def __init__(self):
        self.items=[]
    def push(self,item):
        self.items.append(item)
    def pop(self):
        return self.items.pop()
    def is_empty(self):
        return self.items==[]
    def peek(self):
        if not self.is empty():
            return self.items[-1]
    def get_stack(self):
        return self.items

class EStack(object):

    def __init__(self):
        self.stack= Stack()
        self.minstack= Stack()
    def push(self,value):
        self.stack.push(value)

        if self.minstack.is_empty():
            self.minstack.push(value) """stack is empty in the starting"""
        else:
            if value>=self.minstack.peek():
                """element is greater than the previously stacked eleeemtn"""
                pass
            else:
                self.minstack.push(value)
        print("stack: ",self.stack.get_stack())
        print("aux stack: ",self.minstack.get_stack())

    def pop(self):
        """checking if any elements is present ti pop"""
        if self.stack.is_empty():
             return None
        else:
            self.stack.pop()
            self.minstack.pop()

    def min(self):
        if self.minstack.is_empty():
            return None
        else:
            return self.minstack.peek()

if __name__ == "__main__":
        stack= EStack()
        stack.push(2)
        stack.push(3)
        stack.push(1)
        stack.push(4)

        print(stack.min())

