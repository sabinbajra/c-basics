# Function Declaration
def maindisplay()
    system("cls")
    puts("WELCOME TO RUBY's NUMBER GUESSING GAME")
    puts("======================================")
end
# End of function declaration

maindisplay()
puts("Do you want to play this game? (y=Yes n=No)")
choice = gets.chomp

while choice == 'y'
    system("cls")
    puts("Enter the start and end range of number you want to play:: ex (50-70)")
    start_range = gets.chomp.to_i
    end_range = gets.chomp.to_i
    puts("Thank you for the input::\n\n")
    puts("First the computer will guess the number::\n\nGuessing\n")
        
    compguess = rand(start_range..end_range)
    puts("Computer guess done!!! \n\nNow its your turn to make a guess::")
    puts("Enter your number:: between #{start_range} to #{end_range} ::")  
    user_guess = gets.chomp.to_i
    loop do
        if user_guess == compguess
            puts("Congratulation!!! Your Guess Matched::")
            puts("Do you want to continue (y=Yes n=No)")
            choice = gets.chomp
            if choice == 'y'
                break
            end
            
        else 
            puts("Wrong Choice, Try Again")
            puts("Do you want to try again::(y=Yes n=No)")
            choice = gets.chomp
        end 
        
        if choice != 'y'
            break
        end
        puts("Enter your number::")
        user_guess = gets.chomp.to_i
    end
end
system("cls")
puts("Thank You for logging in :: See you next time.")