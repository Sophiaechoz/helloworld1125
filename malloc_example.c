#include <stdio.h>     //���������ӡ�� 
#include <string.h>    //�ַ����� 
#include <stdlib.h>    //��׼�� 
 
int main()
{
   char *str;    //����һ��ָ��
 
   /* ������ڴ���� */
   str = (char *) malloc(15);   //Ϊ��ָ������ڴ� 
   strcpy(str, "runoob");       //ͨ���ַ����������������ݿ�������Ӧ��ָ���� 
   printf("String = %s,  Address = %u\n", str, str);
   printf("String = %s,  Address = %u\n", str, str);
   printf("String = %s,  Address = %u\n", str, str);
   /* ���·����ڴ� */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);
   /*����ר��*/
   //C1
   printf("String = %s,  Address = %u\n", str, str);
  


 
   free(str);                  //�ͷŶ����ڴ� 
 
   return(0);
}


