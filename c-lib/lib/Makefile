##
## EPITECH PROJECT, 2020
## lib
## File description:
## make
##

rm	?=	rm -f

all:
	@echo "\e[38;5;208mBUILDING LINKED LIST LIB MODULE\e[0m"
	@make -s -C linked_list/
	@echo "\e[38;5;208mBUILDING MATH LIB MODULE\e[0m"
	@make -s -C math/
	@echo "\e[38;5;208mBUILDING MEM LIB MODULE\e[0m"
	@make -s -C mem/
	@echo "\e[38;5;208mBUILDING PRINT LIB MODULE\e[0m"
	@make -s -C print/
	@echo "\e[38;5;208mBUILDING STR MODULE\e[0m"
	@make -s -C str/
	@echo "\e[38;5;208mBUILDING TAB LIB MODULE\e[0m"
	@make -s -C tab/

debug:
	@echo "\e[38;5;208mBUILDING LINKED LIST LIB MODULE IN DEBUG MODE\e[0m"
	@make -C linked_list/ debug
	@echo "\e[38;5;208mBUILDING MATH LIB MODULE IN DEBUG MODE\e[0m"
	@make -C math/ debug
	@echo "\e[38;5;208mBUILDING MEM LIB MODULE IN DEBUG MODE\e[0m"
	@make -C mem/ debug
	@echo "\e[38;5;208mBUILDING PRINT LIB MODULE IN DEBUG MODE\e[0m"
	@make -C print/ debug
	@echo "\e[38;5;208mBUILDING STR MODULE IN DEBUG MODE\e[0m"
	@make -C str/ debug
	@echo "\e[38;5;208mBUILDING TAB LIB MODULE IN DEBUG MODE\e[0m"
	@make -C tab/ debug

clean:
	make -C linked_list/ clean
	make -C math/ clean
	make -C mem/ clean
	make -C print/ clean
	make -C str/ clean
	make -C tab/ clean

fclean:
	make -C linked_list/ fclean
	make -C math/ fclean
	make -C mem/ fclean
	make -C print/ fclean
	make -C str/ fclean
	make -C tab/ fclean
	rm -f *.a

re:	fclean all

.PHONY: all debug clean fclean re