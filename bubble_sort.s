	.file	"bubble_sort.c"
	.text
	.section	.rodata
.LC0:
	.string	"original list"
.LC1:
	.string	"%6d"
.LC2:
	.string	""
.LC3:
	.string	"after bubbleSort"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$6, -48(%rbp)
	movl	$23, -44(%rbp)
	movl	$2, -40(%rbp)
	movl	$1, -36(%rbp)
	movl	$599, -32(%rbp)
	movl	$99, -28(%rbp)
	movl	$111, -24(%rbp)
	movl	$234, -20(%rbp)
	movl	$3434, -16(%rbp)
	movl	$211, -12(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movq	$0, -64(%rbp)
	jmp	.L2
.L3:
	movq	-64(%rbp), %rax
	movl	-48(%rbp,%rax,4), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addq	$1, -64(%rbp)
.L2:
	cmpq	$9, -64(%rbp)
	jbe	.L3
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	leaq	-48(%rbp), %rax
	movl	$10, %esi
	movq	%rax, %rdi
	call	bubbleSort
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	movq	$0, -56(%rbp)
	jmp	.L4
.L5:
	movq	-56(%rbp), %rax
	movl	-48(%rbp,%rax,4), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addq	$1, -56(%rbp)
.L4:
	cmpq	$9, -56(%rbp)
	jbe	.L5
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	bubbleSort
	.type	bubbleSort, @function
bubbleSort:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L9
.L13:
	movq	$0, -8(%rbp)
	jmp	.L10
.L12:
	movq	-8(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	addq	$1, %rax
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L11
	movq	-8(%rbp), %rax
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-8(%rbp), %rax
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	swap
.L11:
	addq	$1, -8(%rbp)
.L10:
	cmpq	$8, -8(%rbp)
	jbe	.L12
	addl	$1, -12(%rbp)
.L9:
	cmpl	$8, -12(%rbp)
	jbe	.L13
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	bubbleSort, .-bubbleSort
	.globl	swap
	.type	swap, @function
swap:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-32(%rbp), %rax
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	movl	-4(%rbp), %edx
	movl	%edx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	swap, .-swap
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
