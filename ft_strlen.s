section .text
global  _ft_strlen

_ft_strlen:
    push rdi
    xor rax,rax
    jmp lo

lo:
    cmp byte[rdi + rax], 0
    je  return
    inc rax
    loop lo

return:
    pop rdi
    ret