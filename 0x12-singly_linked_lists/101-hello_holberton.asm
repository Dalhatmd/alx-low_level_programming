section .data
    hello:  db 'Hello, Holberton', 10, 0
section .text
    global main
    extern printf
main:
    push    rbp
    mov     rbp, rsp
    sub     rsp, 16
    mov     edi, hello
    xor     eax, eax
    call    printf
    add     rsp, 16
    mov     eax, 0
    pop     rbp
    ret
