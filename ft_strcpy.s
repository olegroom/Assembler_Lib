global _ft_strcpy
section .text

_ft_strcpy:
    xor rax,rax
    push rdi
    cmp byte[rsi],0
    je return1
    jmp lo

lo:
    mov dl,byte[rsi + rax]
    mov byte[rdi + rax],dl
    inc rax
    cmp byte[rsi + rax],0
    je return2
    loop lo

return1:
    pop rdi
    mov rax,0
    ret

return2:
    mov byte[rdi + rax],0
    mov rax,rdi
    pop rdi
    ret