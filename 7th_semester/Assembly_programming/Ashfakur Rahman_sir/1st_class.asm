

org 100h
  
.data
 
 x db ?  ;var_name db/ dw var_value / ?   db=data type  dw=data word   1byte = 8bits 1words = 16bits
 y dw ?   
 
 const equ 100 ; fixed vlaue declear
 
 str db "Topu bhuyan$"  ;string declare
 
 array1 db 10 dup()
 
.code

 mov ax,@data
 mov ds,ax                                      
 
 mov ah,01h   ;single input
 int 21h      ;int =  interrupt
 
 
 mov dl,al
 mov ah,02h  ;single output
 int 21h  
 
 ;printn "new print"  print a kaj kore na
 
 lea dx,str ;lea = load effective address
 ;mov dx,offset str  ;1st lint and 2nd same kaj kore 
 mov ah,09h ; multiple output/string output
 int 21h
 
ret




