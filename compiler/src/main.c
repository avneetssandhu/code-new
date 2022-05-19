#include <stdio.h>

int main(int argc, char** argv){
	printf("compiler running!\n");

	//get list of all compile files and object files, put into seperate char**
	parse_cmdline_filenames(argv);

	//open FILE* to all the files
	open_FILEP_array_filenames(allfiles);


	return 0;
}
