# filename: Dockerfile
FROM alpine:latest
RUN apk add g++ clang make valgrind

# TO RUN:
# docker build -t "valgrind:1.0" .
# docker run -it -v $PWD:/tmp - w /tmp valgrind:1.0
# valdrind --leak-check=full --show-leak-kinds=all