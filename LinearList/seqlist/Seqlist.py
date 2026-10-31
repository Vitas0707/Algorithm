class seqllist:
    def __init__(self,data=None):
        if data is None:
            self.data = []
        else:
            self.data = list(data)

    def length(self):
        return len(self.data)
    def find(self,i):
        if i < 0 or i >= len(self.data):
            raise IndexError("invalid index")
        return self.data[i]
    def locate(self,x):
        for i in range(len(self.data)):
            if self.data[i] == x:
                return i
        return -1
    def insert(self,x,i):
        if i < 0 or i > len(self.data):
            raise IndexError("invalid index")
        self.data.insert(i,x)
    def delete(self,i):
        if i < 0 or i >= len(self.data):
            raise IndexError("invalid index")
        del self.data[i]
    def print(self):
        print(self.data)

if __name__ == "__main__":
# test code
    lst = seqllist([1, 2, 3])
    lst.print()          # 1 2 3
    lst.insert(15, 2)
    lst.print()          # 1 15 2 3
    print(lst.find(2))   # 15
    print(lst.locate(3)) # 4
    print(lst.delete(1)) # 1
    lst.print()          # 15 2 3