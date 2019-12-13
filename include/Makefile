SRC = k2c_activations.c         k2c_embedding_layers.c  k2c_normalization_layers.c \
k2c_convolution_layers.c  k2c_helper_functions.c  k2c_pooling_layers.c \
k2c_core_layers.c         k2c_merge_layers.c      k2c_recurrent_layers.c

OBJ = $(SRC:%.c=%.o)

CC = gcc
LD = $(CC)
CFLAGS = -O2 -std=gnu99

libk2c.a: $(OBJ)
	$(AR) cru $@ $^

