class Class1:
    a = None

class Class2:
    b = None

    @classmethod
    def test(cls):
        cls.b="haha"
        return cls.b

print(Class2.test())