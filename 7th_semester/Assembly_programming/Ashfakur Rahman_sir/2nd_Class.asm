

org 100h

.data
.code   ;code segment

mov ax,@data ; acumoloator
mov ds,ax    ; data segment

; if(ax > 10)

mov ax, 5
cmp ax,10 ; cmp = compare

jg label_1   ; jg= jum if greater
;jng lable_2  ; jng jum if not greater

label_1:
printn "ax is greater than 10"
jmp    ; jmp = jump (unconditional)

lable_2
printn "ax is not greater than 10"

stp:
ret




