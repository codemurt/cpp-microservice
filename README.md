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
Run executable file
```
./app.exe
```
Then open http://localhost:1234/hi, you should see "Hello world". 
