# cpp-microservice
## Getting started

![](video.mp4)

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

Also, you can build and run `client.cpp` to check if the server is running

> Tested on 0.11.2 version of `cpp-httplib`

## Add html, css and js
Use `load_file` from `utils.h` to create your web page:
```
const auto html = load_file("index.html");
const auto style = load_file("styles.css");
const auto js = load_file("script.js");
```

## Using ngrok
If you want to temporarily publish your webpage in internet, you can use ngrok. First of all, you need to install ngrok. Then add your token. And write this to start microservice:
```
ngrok http 8080
```
And run server in other terminal:
```
./app.exe
```
In https://dashboard.ngrok.com/cloud-edge/endpoints you will see your link to endpoint.