#! /bin/bash
# Example of using ANSI Escape Codes to set output color.
# Note the use of the -e flag to enable escape codes in echo
#
# Sam Scott, McMaster University, 2025

# foreground colors only (code 39;49 resets colors back to normal)
echo -e "\033[33mHello\033[39;49m, \033[34mWorld!\033[39;49m"

# background colors only
echo -e "\033[43mHello\033[39;49m, \033[44mWorld!\033[39;49m"

# both foreground and background
echo -e "\033[33;40mHello\033[39;49m, \033[34;43mWorld!\033[39;49m"
