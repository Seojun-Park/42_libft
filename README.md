# 42_libft
First project of 42school.

What is libft?
-  Libft is an individual project at 42 that requires us to re-create some standard C library functions including some            additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: 42 makes us do this as a first project as a cadet, so we can have a deeper understanding of data structures and basic algorithms. At 42, we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go further in the program.

What's in it?
As you can see from the Project instructions, there are 4 sections:

Libc Functions: Some of the standard C functions
Additional functions: Functions 42 deems will be useful for later projects
Bonus Functions: Functions 42 deems will be useful for linked list manipulation
Personal Functions: Functions I personally believe will be useful for further projects

Libc functions	        Additional functions	Bonus Functions	        Personal Functions
memset  	        ft_memalloc	        ft_lstnew	        
bzero   	        ft_memdel	        ft_lstdelone	        
memcpy	                ft_strnew	        ft_lstdel	        
memccpy 	        ft_strdel	        ft_lstadd	        
memmove 	        ft_strclr	        ft_lstiter	        
memchr	                ft_striter	        ft_lstmap	        
memcmp	                ft_striteri	        ft_realloc
strlen	                ft_strmap	        ft_strjoinch
strdup	                ft_strmapi	        ft_strnchr
strcpy	                ft_strequ	        ft_copyuntil
strncpy	                ft_strnequ	        ft_strstartswith
strcat	                ft_strsub	        ft_intlen
strlcat	                ft_strjoin	        ft_strendswith
strchr	                ft_strtrim	        ft_pathjoin
strrchr	                ft_strsplit	        ft_lstaddback
strstr	                ft_itoa		        get_next_line
strnstr	                ft_putchar	        ft_putnstr
strcmp	                ft_putstr	        ft_strreplace
strncmp	                ft_putendl	        ft_isemptystr
atoi	                ft_putnbr	        ft_strsplitall
isalpha	                ft_putchar_fd   	ft_countwordsall
isdigit	                ft_putstr_fd	        ft_freestrarr
isalnum	                ft_putendl_fd	        ft_strjoincl
isascii	                ft_putnbr_fd	        ft_strjoinchcl
isprint		        ft_count2darray
toupper		        ft_strarrmax
tolower		        ft_get_parent_path

Notes:

Most of the the files and function names are namespaced with an ft in front. It means Fourty Two which is name of school.
