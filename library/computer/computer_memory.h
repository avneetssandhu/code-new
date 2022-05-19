#ifndef Computer_Memory_H
#define Computer_Memory_H

#include <stdio.h>
#include <stdlib.h>


typedef struct computer_memory  computer_memory;
typedef struct computer_memory* computer_memory_p; 

struct computer_memory {
    char*  name;
    void*  start;
    long   size;
    long   used;
	long   remainder;
	long   config_num;
	computer_memory_p config_prev;
} ;


#define computer_memory_name_null 			(char*)NULL 
#define computer_memory_start_null 			(void*)NULL 
#define computer_memory_size_null 			(long)NULL
#define computer_memory_used_null 			(long)NULL 
#define computer_memory_remainder_null 		(long)NULL
#define computer_memory_config_num			(long)NULL 
#define computer_memory_config_prev_null	(computer_memory_p)NULL	


void computer_memory_struct_init(computer_memory_p,char*,void*,long,long,long,long,computer_memory_p);

void computer_memory_set_name(computer_memory_p,char*);
void computer_memory_set_start(computer_memory_p,void*);
void computer_memory_set_size(computer_memory_p,long);
void computer_memory_set_used(computer_memory_p,long);
void computer_memory_set_remainder(computer_memory_p,long);
void computer_memory_set_config_num(computer_memory_p,long);
void computer_memory_set_config_prev(computer_memory_p,computer_memory_p);


int  computer_memory_is_name_set(computer_memory_p);
int  computer_memory_is_start_set(computer_memory_p);
int  computer_memory_is_size_set(computer_memory_p);
int  computer_memory_is_used_set(computer_memory_p);
int  computer_memory_is_remainder_set(computer_memory_p);


char* computer_memory_get_name(computer_memory_p);
long  computer_memory_get_start(computer_memory_p);
long  computer_memory_get_size(computer_memory_p);
long  computer_memory_get_used(computer_memory_p);
long  computer_memory_get_remainder(computer_memory_p);
long  computer_memory_get_config_num(computer_memory_p);
computer_memory_p computer_memory_get_config_prev(computer_memory_p);


long computer_memory_size_add(computer_memory_p,long);
long computer_memory_size_subtract(computer_memory_p,long);
long computer_memory_size_multiply(computer_memory_p,long);
long computer_memory_size_divide(computer_memory_p,long);

long computer_memory_used_add(computer_memory_p,long);
long computer_memory_used_subtract(computer_memory_p,long);
long computer_memory_used_multiply(computer_memory_p,long);
long computer_memory_used_divide(computer_memory_p,long);

long computer_memory_remainder_add(computer_memory_p,long);
long computer_memory_remainder_subtract(computer_memory_p,long);
long computer_memory_remainder_multiply(computer_memory_p,long);
long computer_memory_remainder_divide(computer_memory_p,long);

void computer_memory_print_all(computer_memory_p);
void computer_memory_print_name(computer_memory_p);
void computer_memory_print_start(computer_memory_p);
void computer_memory_print_size(computer_memory_p);
void computer_memory_print_used(computer_memory_p);
void computer_memory_print_remainder(computer_memory_p);
void computer_memory_print_config_num(computer_memory_p);
void computer_memory_print_config_prev(computer_memory_p);


long computer_memory_calculate_size(long,long);
long computer_memory_calculate_remainder(long,long);
long computer_memory_calculate_used(long,long);


void  computer_memory_memory_alloc(computer_memory_p,long);
void  computer_memory_memory_realloc(computer_memory_p,long);
void  computer_memory_memory_alloc_failed(computer_memory_p,long);


#endif /* Computer_Memory_H */

