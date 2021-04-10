global _ft_strdup
section .text
extern _malloc
extern _ft_strlen
extern _ft_strcpy

_ft_strdup:
    push rdi
    call _ft_strlen ; rax has length of string
    mov rdi,rax ; make rdi is equal to lenght to call malloc
    inc rdi
    call _malloc
    pop rdi
    mov rsi,rdi ; make temp variable to store string + for future ft_strcpy(rdi, rsi)
    mov rdi,rax
    call _ft_strcpy
    ret
