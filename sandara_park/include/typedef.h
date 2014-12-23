#include<malloc.h>

#define SUCCESS 1
#define FAIL 0
#define MALLOC_ERROR -1

struct friend
{
    long int Id;
    char Name[20];
    char Address[30];
    char Phone_num[20];
    char Firm_num[20];

    struct friend *next;
    struct friend *prior;
};

typedef struct friend * link;


void delete(link *head, link newfriend);
void input(link newfriend);
void is_malloc(link test);
int my_strcmp(char *src, char *str);
void choose(link *head, link newfriend);
void display(link *head, link newfriend);
void insert(link *head, link newfriend);
void my_strcpy(char *dest, const char *src);
void search(link *head, link newfriend);
void create(link *head);
void interface(link *head, link newfriend);
void output(link temp);
