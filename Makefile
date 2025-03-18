NAME = libft.a

INC_DIR = includes/
OBJS_DIR = objs/

# Définir les répertoires pour chaque groupe de fichiers
CHAR_DIR = srcs/char/
CONVERSION_DIR = srcs/conversion/
IO_DIR = srcs/io/
LISTS_DIR = srcs/lists/
MATHS_DR = srcs/maths/
MEMORY_DIR = srcs/memory/
STRING_DIR = srcs/string/
POINTER_DIR = srcs/pointer/
BITS_DIR = srcs/bits/
PRINTF_DIR = srcs/printf/
GNL_DIR = srcs/get_next_line/

# Définir les fichiers sources pour chaque groupe
CHAR_SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_isspace.c
CONVERSION_SRCS = ft_atoi.c ft_itoa.c
IO_SRCS = ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
LISTS_SRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c sort_list.c ft_list_foreach.c ft_list_remove_if.c
MATHS_DR = flood_fill.c is_power_of_2.c max.c 
MEMORY_SRCS = ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
STRING_SRCS = ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_split.c ft_concate.c ft_is_just_space.c ft_sort_tab.c ft_strcmp.c
POINTER_DIR = ft_swap_string.c ft_swap.c
BITS_DIR = print_bits.c reverse_bits.c swap_bits.c
GNL_DIR = get_next_line.c
PRINTF_SRCS = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunsi_dec.c

# Ajouter le préfixe du répertoire à chaque fichier source
SRCS = $(addprefix $(CHAR_DIR),$(CHAR_SRCS)) \
		$(addprefix $(CONVERSION_DIR),$(CONVERSION_SRCS)) \
		$(addprefix $(IO_DIR),$(IO_SRCS)) \
		$(addprefix $(LISTS_DIR),$(LISTS_SRCS)) \
		$(addprefix $(MEMORY_DIR),$(MEMORY_SRCS)) \
		$(addprefix $(STRING_DIR),$(STRING_SRCS)) \
		$(addprefix $(POINTER_DIR),$(POINTER_SRCS)) \
		$(addprefix $(GNL_DIR),$(GNL_SRCS)) \
		$(addprefix $(PRINTF_DIR),$(PRINTF_SRCS))


#OBJS = $(addprefix $(OBJS_DIR)/,$(patsubst %.c,%.o,$(notdir $(SRCS))))
OBJS = $(addprefix $(OBJS_DIR),$(SRCS:.c=.o))

DEPS = $(OBJS:.o=.d)

CC = cc

CFLAGS = -Wall -Wextra -Werror -I${INC_DIR} -MMD

all: ${NAME}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		rm -rf ${OBJS_DIR}

fclean: clean
		rm -rf ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)
