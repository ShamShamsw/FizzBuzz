import random

def main():
    numbers = []
    for i in range(10):
        numbers.append(random.randint(1, 100))
    print(numbers)

    for i in range(10):
        if numbers[i] % 3 == 0 and numbers[i] % 5 == 0:
            print("FizzBuzz")
        elif numbers[i] % 3 == 0:
            print("Fizz")
        elif numbers[i] % 5 == 0:
            print("Buzz")
        else:
            print("No match")

#FizzBuzz 15, 30, 45, 60, 75, 90
#Fizz 3, 6, 9, 12, 18, 21, 24, 27, 33, 36, 39, 42, 48, 51, 54, 57, 63, 66, 69, 72, 78, 81, 84, 87, 93, 96, 99
#Buzz 5, 10, 20, 25, 35, 40, 50, 55, 65, 70, 80, 85, 95, 100

if __name__ == "__main__":
    main()
