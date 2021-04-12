CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET : libft.a

SRC_DIR = ./srcs
H_DIR = ./includes

SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))
OBJS = $(SRCS:.c=.o)

all : $(TARGET)

clean : $(OBJS)
	rm $^

fclean : $(OBJS) $(TARGET)
	rm %^

re :
	make fclean
	make all

%.o : %.c
	$(CC) $(CFLAGS) -c %< -o $@ -I$(H_DIR)

$(TARGET) : $(OBJS)
	ar rc $@ $^

clean:
	rm -f $(OBJS) main