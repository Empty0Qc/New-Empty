#name = "Chaodagou"
#st = "My name is"
#st2 = "Hello {} {}".format(st,name)
#st3 = f"Hello {st} {name}"
#print(st3)
#print(id(st))
#print(name,name,name,sep = ',',end = ';')
'''
name = input("Please input: ")
print(name)
a = input("a :")
b = input("b :")
print(int(a) + int(b))

def add(x,y):
    return x + y
#print(add.__doc__)
help(add)
'''
'''
a = 10
a += 10
a = a + 10 # 两者是一样的作用，且都会空间拷贝  且不支持前置后置++

a = [1,2,'passwd',4]
a.append(5)
del(a[1])
if 2 in a:
    print(2)
print(a[::-1])
'''
'''
a = {'name':'gouzi','weight':'50Kg'}
print(a['name'])
a['weight'] = '51Kg'
print(a['weight'])
print('name' in a)
if 'name' in a:
    print("haha")
elif 'weight' in a:
    print("aa")
else:
    print("saad")
'''
'''
a = 1
while a <= 10:
    print(a,end=' ')
    a += 1
'''
'''
for a in range(1,10):
    print(a,end=' ')
arr = [1,'hello',2,3,4,'sd',221]
for a in arr:
    print(a,end=' ')
'''

'''
res = [i for i in range(0,11) if i % 2 == 1]
print(res)
'''
'''
# 函数定义
def add(a = 0,b = 0, debug = False):
    if debug:
        print("debug: ",a,b)
    return a + b
# 关键字参数
ret = add(a = 10,b = 30,debug = True)
print(ret,end=' ')
'''

'''
#  *num, num 此时相当与一个元组
# **num, num 此时相当于一个字典
# 参数组
def add(**num):
    sum = 0
    for x in num:
        sum += num[x]
    return sum
print(add(x = 1,y = 2,z = 3,d = 4))
'''
'''
def get_point():
    a = 1
    b = 2
    return a,b
#x,y = get_point()
#print(y)
_,y = get_point()
print(y)

'''
'''
#交换两个变量
x = 1
y = 2
x,y = y,x
print(x,y)
'''
'''
def t():
    print("eeee")

ret = t()
print(ret)
###########
#  eeee
#  None
'''

'''
f = open('D:/360MoveData/Users/Administrator/Desktop/New Code/GitHub/RSA_1/RSA_1/1.txt','w',encoding='gbk')

##覆盖写
f.write('是一个\n小狗子')
f.close()
'''
'''
# with 语句能够更方便的完成文件操作，并且避免文件忘记关闭的问题
# with 也能应对一些其他容易遗漏的场景
# 释放锁，断开服务器

'''
'''
# strip() 函数把一个单词的左右的其他干扰符号去掉保留单词本身
counter = {}
with open('D:/360MoveData/Users/Administrator/Desktop/New Code/GitHub/RSA_1/RSA_1/1.txt','r',encoding='gbk') as f:
    for word in f:
        word = word[:-1]
        if word in counter:
            counter[word] += 1
        else:
            counter[word] = 1

print(counter)

'''

#import callc as c
# 不太推荐第二种，推荐第一种
from calc import add

ret = add(10,20)
print(ret)








