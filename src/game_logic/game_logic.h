/* Game logic functions */


/* ============================================================================================= */


/*
 * Check if the given word is valid.
 * Returns:
 * - Points if the word is valid
 * - 0 if the word isn't in the dictionary.
 * - (-1) if the word isn't composed of the available letters.
 */
static int check_word(char *word, char rand_letters[]);

/* Generate and array of random letters and return them. */
static void get_rand_letters(char letters_array[], int letters);

/* Refresh the settings menu screen. (use on resize of terminal) */
static void refresh_game_win(int rows, int cols,
							 WINDOW *game_win, WINDOW *rand_letters_win, WINDOW *input_win,
							 int letters, int rounds, int r, int points);


/* Scrabble: Start a game. */
void startGame(int letters, int rounds);
