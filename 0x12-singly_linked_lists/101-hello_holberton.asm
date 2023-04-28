SECTION .data
    msg db "Hello, Holberton", 0
    fmt db "%s",10, 0

SECTION .text
    extern printf
    global main

main:
    mov rsi, msg
    mov rdi, fmt
    xor eax, eax
    call printf

    xor eax, eax
    ret
