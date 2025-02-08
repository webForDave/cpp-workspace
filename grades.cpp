/*************************************************************************
 * Grading System - Gives the letter grade version of a grade 
 * This program takes input from the user - the grade, 
 * and converts that grade into the letter equivalent
 * 
 * TODO: implement the modifiers variation.
 *************************************************************************/

#include <iostream>

void get_grade(); // function that prompts user for a grade

int user_grade; // stores the grade value entered by user
char letter_grade; // stores the letter equivalent of user grade

int main()
{
    get_grade(); // prompts user when the program runs


    /** this while block validates the grade value, 
     * checks if user inputted a grade value above 100 and reprompts
    */
    while(true){
        if(user_grade > 100){
            get_grade(); // reprompt user if grade is greater than 100
        } else{
            break; // exits the while loop if the grade is less than or equal to 100
        }
    }
    
    // checks grades and match their equivalent letter grade
    if(user_grade >= 0 && user_grade <= 60){
        letter_grade = 'F';
    } else if(user_grade > 60 && user_grade <= 70){
        letter_grade = 'D';
    } else if(user_grade > 70 && user_grade <= 80){
        letter_grade = 'C';
    } else if(user_grade > 80 && user_grade <= 90){
        letter_grade = 'B';
    } else if(user_grade > 90 && user_grade <= 100){
        letter_grade = 'A';
    }

    std::cout << user_grade << " : " << letter_grade << std::endl;
    return 0;
}


void get_grade()
{
    std::cout << "Enter grade: ";
    std::cin >> user_grade;
}