# HTTP Server

A small HTTP server written in C from scratch, built as a learning project to understand how HTTP works, get comfortable with both C and Docker.

## The goal of this project 

I want to make this project to learn more about HTTP, C and Docker

## Getting Started
### Prerequisites
- `gcc`
- Docker

## Run with Docker

```bash
docker build -t http-server .
docker run http-server
```

Then try to access `http://localhost:8080` the website with a browser or with cUrl

```bash
curl http://localhost:8080
```

## Project Structure

```
.
├── src/
├── include/
├── Dockerfile
├── Makefile
└── README.md
```

## Resources

- [Beej's Guide to Network Programming](https://beej.us/guide/bgc/html/split/)
