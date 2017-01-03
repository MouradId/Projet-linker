#include <stdio.h>
#include <stdlib.h>
#include "elf.h"
    
    
int main (int argc, char *argv[]){

  /*  FILE* fichier = NULL;

    fichier = fopen("test.txt", "rb");

    if (fichier != NULL)
    {
	  if (1 != fread(&hdr, sizeof(hdr), 1, ElfFile)){
            
            printf("failed to read elf header\n");
            exit(1);
    	  }
        
          fclose(fichier); // On ferme le fichier qui a été ouvert
    }*/
    
    printf ("Main()");
    FILE* ElfFile = NULL;
    Elf32_Ehdr hdr;

    ElfFile = fopen ( "test.o" , "rb" );  
    if (ElfFile==NULL) 
    {
        printf ("\nFile error"); 
        exit (1);
    }

    if (1 != fread(&hdr, sizeof(hdr), 1, ElfFile))
    {
            printf("failed to read elf header\n");
            exit(1);
    }

    return 0;

}


