#include "libfunc.h"
#include <stdio.h>
#include <dlfcn.h>

int main() {
struct comp
{
  double real, img;
};

struct comp a, b, c;
  	void *ext_library;
	int s=0 ;
	double (*func)(double,double,double,double);
	while(s != 5)
	{
		printf("1=add(+)\n");
    	printf("2=subtract(-)\n");
    	printf("3=multiply(*)\n");
    	printf("4=divide(/)\n");
    	printf("5=exit from the program\n");
    	printf("select operation: ");
		scanf("%d", &s);
		
		switch(s)
		{
		case 1:
			ext_library = dlopen("./libadd.so",RTLD_LAZY);
			if (!ext_library){
				fprintf(stderr,"dlopen() error: %s\n", dlerror());
				return 1;
			};
			func=dlsym(ext_library, "add");	
				 printf("example (A+Bi)+(C+Di)\n");
				printf("enter A and B: ");
				scanf("%lf%lf", &a.real, &a.img);
				printf("enter C and D: ");
				scanf("%lf%lf", &b.real, &b.img);
				func(a.real, a.img, b.real, b.img );
				
				dlclose(ext_library);
				break;

		case 2:
					ext_library = dlopen("./libsub.so",RTLD_LAZY);
						if (!ext_library){
							fprintf(stderr,"dlopen() error: %s\n", dlerror());
							return 1;
						};
						func=dlsym(ext_library, "sub");	
					printf("example (A+Bi)-(C+Di)\n");
					printf("enter A and B: ");
					scanf("%lf%lf", &a.real, &a.img);
					printf("enter C and D: ");
					scanf("%lf%lf", &b.real, &b.img);
					func(a.real, a.img, b.real, b.img );
					dlclose(ext_library);
				break;
		case 3: ext_library = dlopen("./libmul.so",RTLD_LAZY);
						if (!ext_library){
							fprintf(stderr,"dlopen() error: %s\n", dlerror());
							return 1;
						};
						func=dlsym(ext_library, "mul");	
				printf("example (A+Bi)*(C+Di)\n");
				printf("enter A and B: ");
				scanf("%lf%lf", &a.real, &a.img);
				printf("enter C and D: ");
				scanf("%lf%lf", &b.real, &b.img);
				func(a.real, a.img, b.real, b.img );
				dlclose(ext_library);
				break;
		case 4:ext_library = dlopen("./libdi.so",RTLD_LAZY);
						if (!ext_library){
							fprintf(stderr,"dlopen() error: %s\n", dlerror());
							return 1;
						};
						func=dlsym(ext_library, "di");	
		 printf("example (A+Bi)/(C+Di)\n");
				printf("enter A and B: ");
				scanf("%lf%lf", &a.real, &a.img);
				printf("enter C and D: ");
				scanf("%lf%lf", &b.real, &b.img);
				func(a.real, a.img, b.real, b.img );
				dlclose(ext_library);
				break;
		default:    
                break;
		}
    
      
}
	return 0;
	
	
}


