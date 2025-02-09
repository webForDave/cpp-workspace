"""
Fibonacci Sequence - Python implementation of the Fibonacci sequence
This program prints to the console window a series of numbers added successively. It is
DYNAMIC, in that, it allows the user specify a range for which he/she wants the series to end.
"""

def main():
    user_range = get_user_input() # invoking function to get user input
    previous_number = 1
    current_number = 1 
    next_number = previous_number + current_number 
    

    while current_number < user_range: # runs if current number is less than user range
        next_number = previous_number + current_number 
        previous_number = current_number
        current_number = next_number
        print(previous_number)


def get_user_input(): # prompts user for an integer value (limit for fib sequence)
    while True:
        try:
            user_range = int(input("Enter range: ").strip())
            if user_range <= 0: # validates intput to be a positive integer
                continue
            else:return user_range
        except ValueError: # validates string input
            continue
    

if __name__ == "__main__":
    print(main())