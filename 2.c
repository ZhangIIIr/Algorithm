#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
struct ListNode* mov = ret;
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode* cre = (struct ListNode*)malloc(sizeof(struct ListNode));

	if (l1 == NULL && l2 == NULL)
	{
		return NULL;
	}
	else if (l1 != NULL && l2 == NULL)
	{
		cre->val = l1->val;
		cre->next = addTwoNumbers(l1->next, NULL);
	}
	else if (l1 == NULL && l2 != NULL)
	{
		cre->val = l2->val;
		cre->next = addTwoNumbers(l2->next, NULL);
	}
	else
	{
		cre->val = (l1->val + l2->val)/10;
		cre->next = addTwoNumbers(l1->next, l2->next);
		mov->next = cre;
		mov = mov->next;
	}
}

int main(void)
{
	//测试案例一
	puts("案例一");
	//造出[2,4,3]的链表
	LNP lnp1 = (LNP)malloc(sizeof(LN));
	lnp1->val = 2;
	lnp1->next = (LNP)malloc(sizeof(LN));
	lnp1->next->val = 4;
	lnp1->next->next = (LNP)malloc(sizeof(LN));
	lnp1->next->next->val = 3;
	lnp1->next->next->next = NULL;
	//造出[5,6,4]的链表
	LNP lnp2 = (LNP)malloc(sizeof(LN));
	lnp2->val = 5;
	lnp2->next = (LNP)malloc(sizeof(LN));
	lnp2->next->val = 6;
	lnp2->next->next = (LNP)malloc(sizeof(LN));
	lnp2->next->next->val = 4;
	lnp2->next->next->next = NULL;

	addTwoNumbers(lnp1, lnp2);

	//释放内存
	LNP freep = NULL;
	while(lnp1 != NULL)
	{
		freep = lnp1;
		lnp1 = lnp1->next;
		free(freep);
	}
	freep = NULL;
	while(lnp2 != NULL)
	{
		freep = lnp2;
		lnp2 = lnp2->next;
		free(freep);
	}

	//测试案例二
	puts("\n\n案例二");
	//造出[0]的链表
	LNP lnp3 = (LNP)malloc(sizeof(LN));
	lnp3->val = 0;
	lnp3->next = NULL;
	//造出[0]的链表
	LNP lnp4 = (LNP)malloc(sizeof(LN));
	lnp4->val = 0;
	lnp4->next = NULL;

	addTwoNumbers(lnp3, lnp4);

	//释放内存
	freep = NULL;
	while(lnp1 != NULL)
	{
		freep = lnp3;
		lnp3 = lnp3->next;
		free(freep);
	}
	freep = NULL;
	while(lnp4 != NULL)
	{
		freep = lnp4;
		lnp4 = lnp4->next;
		free(freep);
	}

	//测试案例三
	puts("\n\n案例三");
	//造出[9, 9, 9]的链表
	LNP lnp5 = (LNP)malloc(sizeof(LN));
	lnp5->val = 1;
	lnp5->next = (LNP)malloc(sizeof(LN));
	lnp5->next->val = 9;
	lnp5->next->next = (LNP)malloc(sizeof(LN));
	lnp5->next->next->val = 9;
	lnp5->next->next->next = NULL;
	//造出[9]的链表
	LNP lnp6 = (LNP)malloc(sizeof(LN));
	lnp6->val = 9;
	lnp6->next = NULL;

	addTwoNumbers(lnp5, lnp6);

	//释放内存
	freep = NULL;
	while(lnp5 != NULL)
	{
		freep = lnp5;
		lnp5 = lnp5->next;
		free(freep);
	}
	freep = NULL;
	while(lnp6 != NULL)
	{
		freep = lnp6;
		lnp6 = lnp6->next;
		free(freep);
	}
	return 0;
}


//切分整数
void slip_int(int a)
{
	printf("输入为：%d\n", a);
	int tmp = a;
	int tgt = 0;

	while (tmp != 0)
	{
		tgt = tmp % 10;
		tmp = (tmp - tgt) / 10;
		printf("%d\n", tgt);
	}
}

