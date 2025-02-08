"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
Grading System - Gives the letter grade version of a grade (Python version)
This program takes input from the user - the grade, 
and converts that grade into the letter equivalent.
Added feature: introduces + and - grades eg B+, C

"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

def main():
    # calls and validates grade prompt function (get_grade)
    while True:
        try:
            user_grade = get_grade() # actual function - (get_grade) call
            if user_grade > 100 or user_grade < 0: # continues loop if grade is greater than 100
                continue
            else: break # breaks if grade is an int and not less than zero or greater than 100
        except ValueError: # continues loops if garde is not an integer
            continue

    user_grade_as_str = str(user_grade) # changes the values of inputted grade from type int to type string 
    grade_letter = convert_grade(user_grade)

    if grade_letter == 'F': # F grades are not modified
        return grade_letter
    elif user_grade_as_str.endswith(('8', '9', '0')): return grade_letter + '+'
    elif user_grade_as_str.endswith(('1', '2', '3')): return grade_letter + '-'


def get_grade(): # function to prompt user for grade value
    return int(input("Enter grade: ").strip())


def convert_grade(grade): # converts grade value into letter grade
    if grade >= 0 and grade <= 60:return 'F'
    elif grade <= 70:return 'D' 
    elif grade <= 80:return 'C'
    elif grade <= 90:return 'B'
    else: return 'A'


if __name__ == "__main__":
    print(main())