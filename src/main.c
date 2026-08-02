#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <stdbool.h>

int main() 
{
  struct sockraddr 
    {
      sa_family_t sa_family;
      char        sa_data[14];
    };

  int sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd < 0)
  {
    perror("Socket");
    exit(1);
  }

  int bind (sockfd, struct sockraddr *addr, socklen_t addrlen);

  while(1)
  {
    printf("Waiting for the initialization...\n");
    sleep(1);
  } 
}
