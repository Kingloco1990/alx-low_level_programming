; Purpose: To print a string using printf

extern printf	; The C function to be called

section.text	; Text section (for actual code)
	global _start ; Standard gcc entry point

_start:		; program label for entry point
	mov rax, 1
	mov rdi, 1	; File descriptor
	mov rsi, msg	; Buffer
	mov rdx, 17	; Length of buffer
	syscall

section.data	; Data section
	msg db "Hello, Holberton", 10
