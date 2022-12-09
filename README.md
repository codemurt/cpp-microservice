# cpp-microservice
## Getting started
Clone this repository. Then you need to clone `cpp-httplib`:
```
git clone https://github.com/yhirose/cpp-httplib.git
```
Copy `httplib.h` in your project folder and build `app.cpp` 
```
g++ -o app app.cpp
```
If you got error from linker, add special option:
```
g++ -o app app.cpp -lws2_32
```
Or you can use Makefile:
```
make all
```
Run executable file
```
./app.exe
```
Then open http://localhost:8080/hi, you should see "Hello world". 

> Tested on 0.11.2 version of `cpp-httplib`

## Add html and css
Use `load_file` from `utils.h` to create your web page:
```
const auto html = load_file("index.html");
const auto style = load_file("styles.css");
```
