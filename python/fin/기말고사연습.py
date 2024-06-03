class Truck:
    speed=0
    color=""
    def __init__(self):
        
class Sedan(Truck):
    def __init__(self):
        self.speed=150
class Sonata(Sedan):
    pass

tr=Truck()
se=Sedan()
so=Sonata()

print(tr.speed, end=' ')
print(tr.color, end=' ')
print(se.speed, end=' ')
print(so.speed, end=' ')
