LIBFT_DIR = libft
GNL_DIR = gnl
MINILIBX_DIR = minilibx-linux

.PHONY: all libft gnl minilibx clean fclean re

all: libft gnl minilibx

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

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(GNL_DIR) fclean

re: fclean all
