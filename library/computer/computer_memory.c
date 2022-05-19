#include "computer_memory.h"


void computer_memory_struct_init(computer_memory_p fp_computer_memory_p, char* fp_name, void* fp_start, long fp_size, long fp_used, long fp_remainder, long fp_config_num, computer_memory_p fp_config_prev){
	computer_memory_set_name		(fp_computer_memory_p, 		fp_name);
	computer_memory_set_start		(fp_computer_memory_p, 		fp_start);
	computer_memory_set_size		(fp_computer_memory_p, 		fp_size);
	computer_memory_set_used		(fp_computer_memory_p, 		fp_used);
	computer_memory_set_remainder	(fp_computer_memory_p, 		fp_remainder);
	computer_memory_set_config_num	(fp_computer_memory_p, 		fp_config_num);
	computer_memory_set_config_prev	(fp_computer_memory_p, 		fp_config_prev);
}

void computer_memory_set_name(computer_memory_p fp_computer_memory_p, char* fp_name){
	fp_computer_memory_p->name = fp_name;
}

void computer_memory_set_start(computer_memory_p fp_computer_memory_p, void* fp_start){
	fp_computer_memory_p->start = fp_start;
}

void computer_memory_set_size(computer_memory_p fp_computer_memory_p, long fp_size){
	fp_computer_memory_p->size = fp_size;
}

void computer_memory_set_used(computer_memory_p fp_computer_memory_p, long fp_used){
	fp_computer_memory_p->used = fp_used;
}

void computer_memory_set_remainder(computer_memory_p fp_computer_memory_p, long fp_remainder){
	fp_computer_memory_p->remainder = fp_remainder;
}

void computer_memory_set_config_num(computer_memory_p fp_computer_memory_p, long fp_config_num){
	fp_computer_memory_p->config_num = fp_config_num;
}

void computer_memory_set_config_prev(computer_memory_p fp_computer_memory_p, computer_memory_p fp_config_prev){
	fp_computer_memory_p->config_prev= fp_config_prev;
}


void computer_memory_print_all(computer_memory_p fp_computer_memory_p){
	computer_memory_print_name			(fp_computer_memory_p);
	computer_memory_print_start			(fp_computer_memory_p);
	computer_memory_print_size			(fp_computer_memory_p);
	computer_memory_print_used			(fp_computer_memory_p);
	computer_memory_print_remainder		(fp_computer_memory_p);
	computer_memory_print_config_num	(fp_computer_memory_p);
	computer_memory_print_config_prev	(fp_computer_memory_p);
};


void computer_memory_print_name(computer_memory_p fp_computer_memory_p){
	printf("fp_computer_memory_p->name = %s.\n", fp_computer_memory_p->name);
}

void computer_memory_print_start(computer_memory_p fp_computer_memory_p){
	printf("fp_computer_memory_p->start = %p.\n", fp_computer_memory_p->start);
}

void computer_memory_print_size(computer_memory_p fp_computer_memory_p){
	printf("fp_computer_memory_p->size = %ld.\n", fp_computer_memory_p->size);
}

void computer_memory_print_used(computer_memory_p fp_computer_memory_p){
	printf("fp_computer_memory_p->used = %ld.\n", fp_computer_memory_p->used);
}
void computer_memory_print_remainder(computer_memory_p fp_computer_memory_p){
	printf("fp_computer_memory_p->remainder = %ld.\n", fp_computer_memory_p->remainder);
}

void computer_memory_print_config_num(computer_memory_p fp_computer_memory_p){
	printf("fp_computer_memory_p->config_num = %ld.\n", fp_computer_memory_p->config_num);
}

void computer_memory_print_config_prev(computer_memory_p fp_computer_memory_p){
	printf("fp_computer_memory_p->config_prev = %p.\n", fp_computer_memory_p->config_prev);
}

void computer_memory_memory_alloc(computer_memory_p fp_computer_memory_p, long fp_size){
	void* start_holder;

	if (fp_computer_memory_p->start) {
		printf("fp_computer_memory_p memory already initially allocated, doing a reallocation instead?\n");
		computer_memory_memory_realloc(fp_computer_memory_p, fp_size);
	}

	start_holder = malloc(fp_size);
	if (start_holder)
		fp_computer_memory_p->start = start_holder;
	else
		computer_memory_memory_alloc_failed(fp_computer_memory_p, fp_size);
}

void computer_memory_memory_realloc(computer_memory_p fp_computer_memory_p, long fp_size){
	void* curr_start_holder;

	curr_start_holder = fp_computer_memory_p->start;

	fp_computer_memory_p->start = realloc(fp_computer_memory_p->start, fp_size);
	if (!fp_computer_memory_p->start) {
		fp_computer_memory_p->start = curr_start_holder;
		computer_memory_memory_alloc_failed(fp_computer_memory_p, fp_size);
	}
}

void computer_memory_memory_alloc_failed(computer_memory_p fp_computer_memory_p, long fp_size){
		
}






