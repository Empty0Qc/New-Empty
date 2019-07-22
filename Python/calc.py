"""class Student:
    def __int__(self):
        self.name = ''
        self.id = 0
        self.subject = ''
    
class ClassRoom:
    def __int__(self):
        self.name = ''
        self.pos = ''

class School:
    def __init__(self):
        self.students = [Student() for _ in range(0,)]"""

class Computer:
    def __init__(self):
        self.name = 'computer'
    def print(self):
        print(self.name)
class DellComputer(Computer):
    def __init__(self):
        self = "Dell Computer"
    def recover(self):
        print("Recover")
class HuaweiComputer(Computer):
    def __init__(self):
        self = "Huawei Computer"
    def recover(self):
        print("Change massage with phone")

phone = HuaweiComputer()
phone.recover()
phone.print()