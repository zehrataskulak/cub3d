NAME = cub3d
CC = cc
CFLAGS = -g

LIBFT_DIR = libft
GNL_DIR = gnl
MINILIBX_DIR = minilibx-linux

SRCS = main.c window_settings.c utils.c init_player.c
OBJS = $(SRCS:.c=.o)

all: libft gnl minilibx $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_DIR)/libft.a $(GNL_DIR)/get_next_line.a -L$(MINILIBX_DIR) -lmlx -lXext -lX11 -lm -o $(NAME)

libft:
	$(MAKE) -C $(LIBFT_DIR)

gnl:
	$(MAKE) -C $(GNL_DIR)

minilibx:
	$(MAKE) -C $(MINILIBX_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(GNL_DIR) clean
	$(MAKE) -C $(MINILIBX_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(GNL_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all libft gnl minilibx clean fclean re
