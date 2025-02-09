/**
 * Fibonacci Sequence - Solves the Fibonacci sequence in a fun way.
 * This program prints to the console window a series of numbers added successively. It is
 * DYNAMIC, in that, it allows the user specify a range for which he/she wants the series to end. 
 */

 #include <iostream>

 int main()
 {
    int user_range; // dynamic feature, gets the sequence limit from the user
    int previous_number = 1; // sequence starts from number 1
    int current_number = 1; // first current number is 1
        
    std::cout << "Enter a range ";
    std::cin >> user_range;

    if(user_range <= 0){ // validates user input - runs if user input is a negative number or zero
        std::cout << "Your range can not be less than 0" << std::endl;
    } else{
        while (current_number < user_range)
        {
            // next number - gotten by adding the recent(previous) and the current numbers
            int next_number = previous_number + current_number;

            previous_number = current_number; // changes the value of prevevious number to current number
            current_number = next_number; // current number now equals next number

            std::cout << previous_number << std::endl;
        }
        
    }

    return 0;
 }