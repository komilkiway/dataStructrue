#include<stdio.h>
#include<stdlib.h>

// --- �����Ϳ� �迭�� ���� ---
// �����Ϳ� �迭�� ������ ���踦 ���� ������, �и��� �������� �ִ�.
// �迭�� �����ϰ� �Ǹ� �⺻������ �迭 �ڱ� �ڽ��� ���� �ּҸ� ���� �ִ�.
// �����Ϳ� �迭�� �� �� �ּҸ� ������ ������ �����ϱ� ������ �����͸� �迭ó�� ������ �� �ִ�.

// --- ���� �Ҵ� ---
// ���α׷� �߰��� �޸� ������ ũ�⸦ �����ؼ� �Ҵ� �ް� �װ����� ��� ��, ���ϴ� ������ �����ϴ� ���
// �޸� ������ �Ҵ� ���� ���� malloc() �Լ��� ����ؼ� �Ҵ� ���� �� �ִ�.
// �̶�, �ݵ�� stdlib.h �������(c���� �߰������ ����ִ�)�� ��������� �Ѵ�.
// malloc()�Լ��� ����: �ּҸ� ������ ���� = (������ ������ �ڷ���)malloc(ũ��);
// ���� �Ҵ��� ���ؼ� �Ҵ� ���� �޸� ������ Heap������ �ش��Ѵ�.
// ���� �Ҵ� ���� �޸� ������ ������ ���� free(������ ������ �ּ�); �������� ������ �� �ִ�..
// �� ���� ���� �Ҵ翡�� �ݵ�� �� ���� ���� ������ ����Ǿ� �Ѵ�.
// malloc()�Լ����� ũ�⸦ �Ѱ��� ���� �⺻������ sizeof()�����ڸ� �̿��ؼ� �Ѱ��ش�.

typedef struct {
	int data1;
	int data2;
}Data;

int main() 
{
	// �ǽ�1. ���ڿ��� �����, ���ڿ� �ּ� ���
	/*char str[10];

	printf("str�� �ּ�: %p\n", &str);
	printf("str�� ��: %p\n", str);

	printf("�Է�: ");
	scanf("%s", str);
	
	printf("���: %s\n", str);*/

	// �ǽ�2. ���ڿ��� Ư¡, �����Ϳ� �迭�� ����
	// 1. ���� NULL ���ڰ� ���Եȴ�.
	// 2. �����ͷ� Ư�� ���ڿ��� ������ �� �ִ�.
	// �迭�� �ڱ� �ڽ��� ���� ���
	// �����ʹ� �ٸ� ������ ������ �����
	/*char str1[10] = "Hello";
	char* str2 = "Abcde"; */

	/*printf("str1: %s\n", str1);
	printf("str1: %s\n", str2);*/

	/*printf("str1: ");
	for (int i = 0; i < 5; i++){
		printf("%c", str1[i]);
	}
	printf("\nstr2: ");
	for (int i = 0; i < 5; i++) {
		printf("%c", str2[i]);
	}*/

	// 3. �����Ϳ� �迭�� ����
	// -1. ���ͷ� ��� ���·� ���� �Ǿ��� ������ �����Ͱ� ����Ų ���� ������ �� ����
	/*str1[0] = 'B';
	str2[0] = 'Z';*/

	// �ǽ�3. �����Ҵ� ����- �ʱ�ȭ, ����
	// �ּҸ� ������ ����(������ ������ �ڷ���* ������) = malloc(ũ��);
	// malloc �� ��ȯ ���� void* �̱� ������ int*�� ���� ����ȯ�� �Ͽ��� �Ѵ�. 
	/*int* ptr = (int*)malloc(4);

	*ptr = 10;
	printf("���: %d\n", *ptr);

	free(ptr);*/

	// 1. �������� ������ �Ҵ�- sizeof(�ڷ���), �ε����� ����
	/*int* ptr = (int*)malloc(sizeof(int)*34);
	ptr[0] = 10;
	ptr[1] = 20;

	printf("���: %d %d\n", ptr[0], ptr[1]);

	free(ptr);*/

	// ����1. �����Ҵ�-������ �Է¹޾� ���ܾ� �Է�*���(����)
	/*int size;
	
	printf("���ܾ� ���� �Է�: ");
	scanf("%d", &size);

	char* cPtr = (char*)malloc(sizeof(char) * size+1);
	
	printf("���ܾ� �Է�: ");
	scanf("%s", cPtr);
	
	printf("���ܾ� ���: ");
	for (int i = size-1; i >=0; i--){
		printf("%c", cPtr[i]);
	}

	free(cPtr);*/

	// �ǽ�4. �����Ҵ� - ����ü
	// (*����ü������).����ü ��� = ����ü������->����ü���
	/*Data* dPtr = (Data*)malloc(sizeof(Data));

	(*dPtr).data1 = 10;
	dPtr->data2 = 20;

	printf("���: %d %d\n", dPtr->data1, dPtr->data2);

	free(dPtr);*/

	return 0;
}