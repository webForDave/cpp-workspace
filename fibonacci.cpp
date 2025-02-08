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

    while(current_number < user_range)
    {
        // next number - gotten by adding the recent(previous) and the current numbers
        int next_number = previous_number + current_number;

        previous_number = current_number;
        current_number = next_number;
        std::cout << current_number << std::endl;
        

    }
    return 0;
 }