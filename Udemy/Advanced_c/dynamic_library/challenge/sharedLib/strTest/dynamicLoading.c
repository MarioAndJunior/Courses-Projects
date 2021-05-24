#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

typedef int (*CountFunction) (const char*, char);
typedef int (*AlphabetsFunction) (const char*, char*);
typedef int (*LengthFunction) (const char*);
typedef int (*ConcatFunction) (const char*, const char*, char*);
typedef int (*CopyFunction) (const char*, char*);
typedef int (*ContainsFunction) (const char*, const char*);

void checkForError(char* error)
{
    if((error = dlerror()) != NULL)
    {
        fputs(error, stderr);
        exit(1);
    }
}

int main(void)
{
    void* handle = NULL;
    CountFunction  count = NULL;
    AlphabetsFunction  alpha = NULL;
    LengthFunction length = NULL;
    ConcatFunction concat = NULL;
    CopyFunction copy = NULL;
    ContainsFunction contains = NULL;
    char* error = NULL;

    handle = dlopen("/mnt/c/Users/mario_junior/Documents/Cursos/Udemy/Advanced_c/dynamic_library/challenge/sharedLib/libStringFunctions.so", RTLD_LAZY);

    if(!handle)
    {
        fputs(dlerror(), stderr);
        exit(1);
    }

    puts("leu a dll maluco");
    dlerror();

    count = dlsym(handle, "count");
    checkForError(error);

    puts("count lido, vamos testar a treta");
    printf("count de e em ""texto"" %d\n", count("texto", 'e'));

    alpha = dlsym(handle, "alphabetsOnly");
    checkForError(error);

    puts("alphabets lido, vamos testar a treta");

    char test[128] = {0};
    printf("alpha de ""texto123***$#"" %d\n", alpha("texto123***$#", test));
    printf("Texto apos limpeza = %s\n", test);

    length = dlsym(handle, "length");
    checkForError(error);

    puts("length lido, vamos testar a treta");
    printf("length do texto limpo = %d\n", length(test));

    concat = dlsym(handle, "concat");
    checkForError(error);

    puts("concat lido, vamos testar a treta");

    char test2[128] = {0};
    printf("concat do texto limpo com "" mais texto"" = %d\n", concat(test, " mais texto", test2));
    printf("Texto apos concat = %s\n", test2);

    copy = dlsym(handle, "copy");
    checkForError(error);

    puts("copy lido, vamos testar a treta");

    char test3[128] = {0};
    printf("concat do texto limpo com "" mais texto"" = %d\n", copy(test2, test3));
    printf("Texto original = %s\n", test2);
    printf("Texto copiado = %s\n", test3);

    contains = dlsym(handle, "contains");
    checkForError(error);

    puts("contains lido, vamos testar a treta");
    printf("contains de ""mais"" no texto final = %d\n", contains(test3, "mais"));
    
    dlclose(handle);
    return 0;
}
