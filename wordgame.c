#include <stdio.h>
#include <string.h>

void playGuessingGame()
{

	char guessword[30] = "________", c[30], word[30] = "swelling";
	printf("The word to guess has 8 letters:\n");
	printf("%s", guess_word);
	
	char done = 0;
	
	while(!done)
	{
		scanf("Guess a letter or guess the complete word:%s", c);
		if(strlen(c) > 1)
		{
			if(c == word)
			{
				guess_word = c;
				done = 1;
				
			}
		}
		else{
			int i = 0;
			while(i < 8){
				if(c[i] == word[i])
				{
					guess_word[i] = c[i];
				} 
				i++;
			}
		}
		if(guessword == word)
		{
			printf("You got it!  swelling\n");
			done = 1;
		}
		printf("%s", guess_word);
	}
}

int main()
{
	char c, game_over = 0;
	printf("Welcome! Press 'q' to quit or any other key to continue:\n");
	
	while(!game_over)
	{
		scanf("%c", &c);
		if(c == 'q')
		{
			game_over = 1;
		}
		else{
			playGuessingGame();
			printf("Welcome! Press 'q' to quit or any other key to continue:\n");
		}
	}
}
