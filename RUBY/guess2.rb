# Function Declaration
def maindisplay()
    #system("cls")
    puts("WELCOME TO RUBY's NUMBER GUESSING GAME")
    puts("======================================")
end
# End of function declaration

#maindisplay()
system("cls")
puts("Do you want to play this game? (y=Yes n=No)")
choice = gets.chomp
start_range = 0
end_range = 0
maindisplay = 0
while choice == 'y'
    
    loop do
        #system("cls")
        maindisplay()
        puts("Enter the start and end range of number you want to play:: ex (50-70)")
        start_range = gets.chomp.to_i
        end_range = gets.chomp.to_i

        if start_range>end_range
            puts("Please enter correctly::")
        else
            break
        end
    end

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
                maindisplay = 1
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