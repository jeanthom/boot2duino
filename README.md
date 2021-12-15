# boot2duino
boot2duino serves no other purpose than to generate a bootable x86 image using the Arduino IDE. I haven't found a suitable use for it yet, so its capabilities are currently quite limited (you can basically only print text on screen).

## Example
```c++
Video vid;

void setup() {
  vid.print("Hello world, from Arduino!");
}

void loop() {
  
}
```

![boot2duino generated image running inside QEMU](doc/hello.png)


[Watch it in action!](https://vimeo.com/656339999)

## How to install
Linux :
```
mkdir -p ~/Arduino/hardware/boot2duino
cd ~/Arduino/hardware/boot2duino
git clone https://github.com/jeanthom/boot2duino
```

Windows :
```
mkdir %UserProfile%\Documents\Arduino\hardware
cd %UserProfile%\Documents\Arduino\hardware
git clone https://github.com/jeanthom/boot2duino
```
