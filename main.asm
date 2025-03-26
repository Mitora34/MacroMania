message:
    db  "Hello world!", 10
_start:
        mov rax, 1
        mov rdi, 1
        mov rsi, message
        mov rdx, 14
        syscall
        mov rax, 60
        syscall
        section .data
global _start
section.text