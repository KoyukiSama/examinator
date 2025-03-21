CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -Iinclude

SRC_DIR = src

SRCS    = $(wildcard $(SRC_DIR)/*.c)

TARGET  = terminator

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $@

# Clean compiled binaries
clean:
	rm -f $(TARGET)

# Recompile everything
re: clean all