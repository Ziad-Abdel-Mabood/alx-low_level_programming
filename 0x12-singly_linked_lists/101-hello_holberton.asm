section .data
hello: db "Hello, Holberton", 0xa, 0	; string to print

section .text
extern	printf
global	main		; entry point for linker

main:
mov	edi, hello
mov	eax, 0
call	printf

