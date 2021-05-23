#include <stdio.h>
#include <unistd.h>

int main(){
        int i = 10, pid = -1;
        pid = fork();
        if(pid == -1){
        printf("fork failed\n");
}
        if(pid == 0){
        printf("in child process\n");
}else{
        printf("in parent process\n");
       i++;


}

}