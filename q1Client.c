#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

int main()
{
    int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    int randomNum;

    
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }

    
    portno = 5001;
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = inet_addr("192.168.56.1");
    serv_addr.sin_port = htons(portno);

    
    if (connect(sockfd, (struct sockaddr *) &serv_addr, sizeof(server_address)) < 0)
        error("Error connecting");

    
    bzero(buffer, sizeof(buffer));

    
    n = read(sockfd, buffer, sizeof(buffer)-1);
    if (n < 0) 
        error("Error reading from socket");
        
    
    printf("Random number: %s\n", buffer);

    
    close(sockfd);
    return 0;
}
