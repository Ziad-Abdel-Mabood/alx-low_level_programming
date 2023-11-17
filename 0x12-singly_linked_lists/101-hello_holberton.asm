section .data
hello: db "Hello, Holberton", 0xa, 0	; string to print
helloLen: equ $-hello			; length of string

section .text
global main		; entry point for linker

main:
mov	rax,1		; sys_write
mov	rdi,1		; stdout
mov	rsi,hello	; message to write
mov	rdx, helloLen	; message length
syscall			; call kernel

;end program
mov	rax,60		;sys_exit
mov	rdi,0		;error code 0 (success)
syscall			;call kernel
