FROM gcc:latest

# These commands copy your files into the specified directory in the image
# and set that as the working location
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp

# This command compiles your app using GCC, adjust for your source code
RUN g++ -o cpp-example main.cpp

# This command runs your application, comment out this line to compile only
CMD ["./cpp-example"]

LABEL Name=testrepo Version=0.0.1
