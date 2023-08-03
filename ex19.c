#include "dbg.h"
#include <stdio.h>
#include <stdlib.h>

void test_debug()
{
// notice you don't need the \n
debug("I have Brown Hair.");
// passing in arguments like printf
debug("I am %d years old.", 37);
}

int main(int argc, char *argv[]){
    test_debug();
}
