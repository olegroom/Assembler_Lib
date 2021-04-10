global _ft_atoi
section .text
extern _ft_strlen
extern _ft_strdup
extern _ft_write

_ft_atoi:
    push r10
    mov rax,10
    xor rbx,rbx
    xor r10,r10
    jmp lo

lo:
    cmp byte[rdi + rax - 10],0
    je  the_end

    mul rbx

    xor r10,r10
    mov r10b, byte[rdi + rax - 10]
    sub r10,48

    add rbx,r10

    inc rax
    loop lo

the_end:
    mov rax,rbx
    pop r10
    ret