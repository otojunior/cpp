CC				=	gcc

all:
	make debug
	make release

initdebug:
	@echo "[MAKE] (init debug...)"
	$(eval CFLAGS := -O0 -g3 -Wall)
	$(eval OUTPUT = Debug)
	
initrelease:
	@echo "[MAKE] (init release...)"
	$(eval CFLAGS := -O3 -Wall)
	$(eval OUTPUT = Release)
	
build:
	@echo "[MAKE] (building...)"
	rm -rf $(OUTPUT)/*
	$(CC) $(CFLAGS) -c src/pessoa.c -o $(OUTPUT)/pessoa.o
	$(CC) $(CFLAGS) -c src/exemplo01.c -o $(OUTPUT)/exemplo01.o
	$(CC) $(OUTPUT)/*.o -o $(OUTPUT)/exemplo01
	
debug: initdebug build

release: initrelease build
	
clean:
	@echo "[MAKE] (cleaning...)"
	rm -rf Debug/*
	rm -rf Release/*