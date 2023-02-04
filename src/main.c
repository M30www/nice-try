#include "tools/hint.h"
#include "tools/color.h"
const char* hello = "Hello world";
int main() {
    //welcomeMessage();
    //invalidMessage();
    printf("%s%s%s\n", TWINKLING, hello, RESET);
    successMessage();
    return 0;



}
