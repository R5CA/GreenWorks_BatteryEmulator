# Название проекта
PRG=greenworks24_batemulator
# МК
MCU=attiny13
# Частота МК в герцах
FREQ=9600000UL
# GCC
CC=avr-gcc
# OBJCOPY
OBJCOPY= avr-objcopy
# SIZE
SIZE=avr-size
# Флаги GCC
CFLAGS= -Wall -Os -std=gnu99 -lm
# Флаги LD
LDFLAGS= -Wall -lm
# Папка с промежуточными файлами
OBJDIR=obj
#
OUTDIR=out

# Cписок .c файлов
C_SRC= \
perf.c

# Список объектных файлов (формируется автоматически на основе списка .с файлов)
OBJS=$(C_SRC:.c=.o)
OBJ=$(addprefix $(OBJDIR)/, $(OBJS))

.PHONY: all LD DIR clean

# Выполняем цели в указанном порядке
all: DIR $(C_SRC) $(OBJS) LD

# Линковка
LD: $(OBJ)
	$(CC) $^ -o $(OBJDIR)/$(PRG).elf $(LDFLAGS) -mmcu=$(MCU)
	$(OBJCOPY) -O ihex -R .eeprom -R .fuse -R .lock $(OBJDIR)/$(PRG).elf $(OUTDIR)/$(PRG).hex
	$(OBJCOPY) -O ihex -j .eeprom $(OBJDIR)/$(PRG).elf $(OUTDIR)/$(PRG).eep
	$(SIZE) -C --format=avr --mcu=$(MCU) $(OBJDIR)/$(PRG).elf

#
%.o: %.c
	$(CC) $< -o $(OBJDIR)/$@ $(CFLAGS) -mmcu=$(MCU) -DF_CPU=$(FREQ) -c

# Создание папок
DIR:
	mkdir -p $(OBJDIR)
	mkdir -p $(OUTDIR)

#
clean:
	rm -rf $(OBJDIR) $(OUTDIR) 
