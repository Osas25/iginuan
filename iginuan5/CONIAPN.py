#!/bin/python3
''' i want to write a code that collects the user phone number and prints it out in a list '''
num = input('The user phone number: ')
odd_num = []
for odd in num:
    if int(odd) % 2 == 1:
        odd_num.append(odd)
    else:
        print('even num')
print(odd_num)
