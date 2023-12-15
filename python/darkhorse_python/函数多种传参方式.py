def user_info(*args):
    print(args)
    print(type(args))
    
user_info('Tom',18,'Beijing')

def user_info2(**kwargs):
    print(kwargs)
    print(type(kwargs))
    
# user_info2(name='Tom',age=18,addr='Beijing')
user_info2(name='apple',age=18,address='Beijing')