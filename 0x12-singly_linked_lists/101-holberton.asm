section .data
    hello db 'Hello, Holberton', 0Ah

section .text
    global _start

_start:
    mov rsp, rbp
    sub rsp, 17

    mov rdi, hello
    xor eax, eax

    call printf

    xor eax, eax
    mov rdi, eax
    call exit

