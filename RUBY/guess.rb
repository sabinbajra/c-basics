# Function Declaration
def maindisplay()
    system("cls")
    puts("WELCOME TO RUBY's NUMBER GUESSING GAME")
    puts("======================================")
end

def second_info()
    system("cls")
    sleep(1)
    
    puts("Welcome onboard :: Now its time to play the game::\n")
    puts("The game will begin in ")
    sleep(2)
    system("cls")

    for a in 1..3 do
        puts(a)
        sleep(1)
        system("cls")
    end

    system("cls")
    puts("Enter the start and end range of number you want to play:: ex (50-70)")

end
# End of function declaration

#main program code starts from here
maindisplay()

loop do

    puts("Do you want to play this game? (y=Yes n=No)")
    choice = gets.chomp

    second_info()

    while choice == 'y'
        start_range = gets.chomp.to_i
        end_range = gets.chomp.to_i
    
        puts("Thank you for the input::\n\n")
        puts("First the computer will guess the number::\n\nGuessing\n")

        for i in 1..5
            print "::"
            sleep(0.5)
        end
        
        compguess = rand(start_range..end_range)
        puts("Computer guess done!!! \n\n Now its your turn to make a guess::(You will get 3 seconds)")
        sleep(3)
        puts(" Enter your number::")
        user_guess = gets.chomp.to_i

        if user_guess == compguess
            puts("Congratulation!!! Your Guess Matched::")
            
        else
            puts("Wrong Choice, Try Again")

        end 

    end
    if choice == 'n'
        break
    end
end