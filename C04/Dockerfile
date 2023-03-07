# filename: Dockerfile
FROM alpine:latest
RUN apk add g++ clang make valgrind
RUN alias valgrind="valgrind --leak-check=full --show-leak-kinds=all"

# TO RUN:
# docker build -t "valgrind:1.0" .
# docker run -it -v $PWD:/tmp - w /tmp valgrind:1.0
# valgrind --leak-check=full --show-leak-kinds=all