CC				=	gcc
CFLAGS_DEBUG	=	-O0 -g3 -Wall
CFLAGS_RELEASE	=	-O3 -Wall
OUTPUT_DEBUG	=	Debug
OUTPUT_RELEASE	=	Release

all: makedebug makerelease

makedebug:
	@echo "[MAKE] (making debug...)"
	rm -rf $(OUTPUT_DEBUG)/*
	$(CC) $(CFLAGS_DEBUG) -c src/pessoa.c -o $(OUTPUT_DEBUG)/pessoa.o
	$(CC) $(CFLAGS_DEBUG) -c src/exemplo01.c -o $(OUTPUT_DEBUG)/exemplo01.o
	$(CC) $(OUTPUT_DEBUG)/*.o -o $(OUTPUT_DEBUG)/exemplo01

makerelease:
	@echo "[MAKE] (making release...)"
	rm -rf $(OUTPUT_RELEASE)/*
	$(CC) $(CFLAGS_RELEASE) -c src/pessoa.c -o $(OUTPUT_RELEASE)/pessoa.o
	$(CC) $(CFLAGS_RELEASE) -c src/exemplo01.c -o $(OUTPUT_RELEASE)/exemplo01.o
	$(CC) $(OUTPUT_RELEASE)/*.o -o $(OUTPUT_RELEASE)/exemplo01
	
clean:
	@echo "[MAKE] (cleaning...)"
	rm -rf $(OUTPUT_DEBUG)/*
	rm -rf $(OUTPUT_RELEASE)/*