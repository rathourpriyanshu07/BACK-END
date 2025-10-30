# Generator for first 10 even numbers

"""Yield: It is used in a function like return, but it returns a generator. 
          A generator is an iterator that generates values on the fly and does not store them in memory."""

def even_numbers():
    for i in range(2, 21, 2):
        yield i

for num in even_numbers():
    print(num)
