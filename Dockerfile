FROM gcc:latest
WORKDIR /http_server_c
COPY . .
RUN gcc -o http-server src/main.c
CMD ["./http-server"]
