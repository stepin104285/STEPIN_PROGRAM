SRC = unity/unity.c\
src/Prime_Number.c\
test/test_Prime_Number.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = PRIME_NUMBER.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
