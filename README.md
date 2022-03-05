# Autonomous-Temperature-Controller
In this project i have built a system that can monitor the temperature of a system and trigger a mechanism to control it using Arduino, with LabVIEW as the interface.

By continuously monitoring the temperature of a system, the project aims to control the temperature such that it is within a specified range.
This can be used to control the cooling systems of temperature-critical applications such as in nuclear power plants. 

The temperature and humidity are being represented in the form of a graph in LabVIEW.

**Block Diagram-1**: *Interfacing Hardware and Software*
![](Images/image1.JPG)

**Block Diagram-2**: *Input output -block diagram*
![](Images/image2.JPG)

**SOFTWARE REQUIREMENTS:**

**1.LABVEIW:** **Lab**oratory **V**irtual **I**nstrumentation **E**ngineering **W**orkbench
LabVIEW is a software development environment and language created by National Instruments.Its key innovation is that it uses graphical diagrams rather than lines of text which makes it more intuitive for engineers and excellent for parallel programming.

**2.Arduino IDE:**
The Arduino Integrated Development Environment - or Arduino Software (IDE) – is an open-source software which contains a text editor for writing code, a message area, a text console, a toolbar with buttons forcommon functions and a series of menus. It connects to the Arduino and Genuino hardware to upload programs and communicate with them. 

 **HARDWARE REQUIREMENTS:**
i. Development board: Arduino Uno
ii. Motor Driver: L298N H-Bridge motor driver
iii. Temperature controller: 2 x PC Cabinet Fans
iv. Temperature sensor: DHT11
v. Breadboard
vi. Jumper cables
vii. 12V /2A DC power supply

***CIRCUIT DESIGN:***
![](Images/image3.JPG)

***PRACTICALLY IMPLIMENTED FULLY FUNCTIONAL CIRCUIT***
![](Images/image4.JPG)
