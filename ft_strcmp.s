global _ft_strcmp
section .text

_ft_strcmp:
    mov rax, -1
    push rdx
    push rcx
    xor rdx, rdx
    xor rcx, rcx
    jmp lo
    
lo:
    inc rax
    mov dl,byte[rdi + rax]
    mov cl,byte[rsi + rax]
    cmp dl,0
    je return
    cmp cl,0
    je return
    cmp dl,cl
    jne return
    loop lo

return:
    sub rdx, rcx
    mov rax, rdx
    pop rcx
    pop rdx
    ret
