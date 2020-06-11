#!/usr/bin/python
# -*- coding: utf-8 -*-

# *args 就是 将未定义且多余的 位置参数记录在内,偷偷的告诉你,args是个元祖,里面记录着你个函数传递的多余位置参数
# **kwargs 就是 将多余的关键字参数记录在内,kwargs 其实是个dict哦,里面大概就是{"name":"python","age":1+1+1+1+1+1+18}


def args_func(a, b, *args):         # args 里面保存着除了ab之外的所有多余参数
    print(args)                     # 这回知道是元组了吧
    for i in args:
        print(i)


args_func(1, 2, 3, 4, 5, 6)         # 这里调用的时候1,2分别传递给a,b,那么3456就会保存在args里面哦


def kwargs_func(a, b, **kwargs):    # kwargs 里面保存着除了ab之外其他关键字传入参的参数
    print(kwargs)                   # 这回知道是字典了吧
    for k, v in kwargs.items():
        print(k, v, "====")


kwargs_func(1, 2, c=3, d=4, e=5)    # 这里调用的时候,12分别传递给a,b 那么c=3,d=4,e=5 就会保存在**kwargs里面哦


def args_kwargs_func(*args, **kwargs):  # 这里一定要注意*args 要在 **kwargs之前
    print(args)
    print(kwargs)


args_kwargs_func(1, 2, a=1, b=2)    # 12存入args a=1,b=2 存入kwargs,这里要注意的是关键字传参之后,不可以在位置传参了
