
class Worker:
    def __init__(self, name, pay) -> None:
        self.name = name
        self.pay = pay
    
    def lastName(self):
        return self.name.split()[-1]

    def giveRaise(self, precent):
        self.pay *= (1.0 + precent)


w = Worker('Sergey', 80000)
w.giveRaise(0.10)

print(
    'Worker: %s, %s' % (w.lastName(), w.pay)
)

