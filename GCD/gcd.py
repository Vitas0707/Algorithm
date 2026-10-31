def gcd(a,b):
    # a = abs(a)
    # b = abs(b)
    while(b != 0):
        #无需判断大小，因为如果小除大就还是原来的数字
        '''
        temp = a%b
        a = b
        b = temp
        '''
        a,b = b,a%b
    return a

if __name__ == "__main__":
    a = int(input("请输入一个整数a="))
    b = int(input("请输入一个整数b="))
    c = gcd(a,b)
    print(f"最大公约数为{c}")