# 编译器和编译选项
CC = gcc
CFLAGS = -I../include

# 目录
SRCDIR = ../src
OBJDIR = ../obj
BINDIR = ../bin

# 源文件和目标文件
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))
TARGET = $(BINDIR)/my_program

# 链接规则
$(TARGET): $(OBJS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# 编译规则
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# 清理规则
.PHONY: clean
clean:
	rm -f $(OBJDIR)/*.o $(TARGET)

# 运行规则
.PHONY: run
run: $(TARGET)
	./$(TARGET)
