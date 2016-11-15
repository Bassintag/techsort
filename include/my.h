/*
** my.h for libmy in /home/antoine.stempfer/delivery/CPool_Day09/include
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct 13 08:12:28 2016 Antoine Stempfer
** Last update Thu Oct 13 18:15:12 2016 Antoine Stempfer
*/

int	get_number_length(int);

int	my_getnbr_base(char *, char *);

int	my_strncmp(char *, char *, int);

int	my_find_prime_sup(int);

char	is_num(char);

int	pow_of_ten(int);

int	parse_number(char *, int, char);

int	my_getnbr(char *);

char	my_ischaralpha(char);

char	my_ischarnum(char);

int	my_isneg(int);

char	check_if_prime(int, int);

int	my_is_prime(int);

int	abs_int(int);

int	my_power_rec(int, int);

int	my_putchar(char);

int	get_highest_divider(int, int);

int	my_putnbr_base(int, char *);

int	get_nbr_length(int);

void	print_number(int);

int	my_put_nbr(int);

int	my_putnnbr_base(int, char *, int);

int	my_putstr(char *);

char	*my_revstr(char *);

void	show_address(int);

void	dump_memory(char *, int, int);

void	dump_values(char *, int, int);

int	my_showmem(char *, int);

int	my_showstr(char *);

void	my_sort_int_tab(int *, int);

void	my_sort_str_tab(char **, int);

int	my_square_root(int);

char	*my_strcapitalize(char *);

char	*my_strcat(char *, char *);

int	my_strcmp(char *, char *);

char	*my_strcpy(char *, char *);

int	my_str_isalpha(char *);

int	my_str_islower(char *);

int	my_str_isnum(char *);

int	my_str_isprintable(char *);

int	my_str_isupper(char *);

int	my_strlen(char *);

char	*my_strlowcase(char *);

char	*my_strncat(char *, char *, int);

char	*my_strncpy(char *, char *, int);

char	match(char *, char *);

char	*my_strstr(char *, char *);

char	*my_strupcase(char *);

void	my_swap_char_pointer(char **, char **);

void	my_swap_char(char *, char *);

void	my_swap(int *, int *);

char	*my_strdup(char *);

int	my_show_wordtab(char **);

int	find_needed_size(char *);

int	find_word_length(char *, int);

char	**my_str_to_wordtab(char *);
