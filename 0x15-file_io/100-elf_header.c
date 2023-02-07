#include <stdio.h>

#include <fcntl.h>

#include <unistd.h>

#include <elf.h>

#include <string.h>



#define EI_NIDENT 16



void display_elf_header(char *file)

{

	    int fd;

	        unsigned char e_ident[EI_NIDENT];



		    fd = open(file, O_RDONLY);

		        if (fd == -1) {

				        fprintf(stderr, "Error: failed to open file %s\n", file);

					        exit(98);

						    }



			    if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT) {

				            fprintf(stderr, "Error: failed to read ELF header from file %s\n", file);

					            close(fd);

						            exit(98);

							        }



			        if (e_ident[0] != 0x7f || strncmp((const char *)&e_ident[1], "ELF", 3)) {

					        fprintf(stderr, "Error: %s is not an ELF file\n", file);

						        close(fd);

							        exit(98);

								    }



				    printf("ELF Header:\n");

				        printf("  Magic:   ");

					    for (int i = 0; i < EI_NIDENT; i++) {

						            printf("%02x ", e_ident[i]);

							        }

					        printf("\n");



						    Elf64_Ehdr ehdr;

						        if (lseek(fd, 0, SEEK_SET) == -1) {

								        fprintf(stderr, "Error: failed to seek to start of file %s\n", file);

									        close(fd);

										        exit(98);

											    }



							    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {

								            fprintf(stderr, "Error: failed to read ELF header from file %s\n", file);

									            close(fd);

										            exit(98);

											        }



							        printf("  Class:                             ELF%d\n", e_ident[EI_CLASS]);

								    printf("  Data:                              %s\n", e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");

								        printf("  Version:                           %d\n", e_ident[EI_VERSION]);

									    printf("  OS/ABI:                            %s\n", (e_ident[EI_OSABI] == ELFOSABI_NONE ? "UNIX - System V" : ""));

									        printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);

										    printf("  Type:                              %d\n", ehdr.e_type);

										        printf("  Entry point address:               0x%x\n", (unsigned int)ehdr.e_entry);



											    close(fd);

}



int main(int argc, char *argv[])

{

	    if (argc != 2) {

		            fprintf


