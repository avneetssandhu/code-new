#include "../../computer/computer_memory.h"

int main(){
	computer_memory computer_memory_1;
	computer_memory_struct_init(&computer_memory_1, "first cm", (void*)NULL, (long)NULL, (long)NULL, (long)NULL, (long)NULL, (computer_memory_p)NULL);
	computer_memory_print_all(&computer_memory_1);

}
