global _ft_strcpy
section .text

_ft_strcpy:
    mov rax,0
    push rdi
    push rsi
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
    mov rax,rdi
    mov byte[rax],0
    pop rsi
    pop rdi
    ret

return2:
    mov byte[rdi + rax],0
    mov rax,rdi
    pop rsi
    pop rdi
    ret