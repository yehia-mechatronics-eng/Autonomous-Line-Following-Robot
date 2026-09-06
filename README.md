# 🤖 Autonomous Line-Following Robot

## 📌 Overview

This project is an **autonomous line-following robot** designed to detect and follow a predefined path without manual control.

The robot uses **IR sensors** to detect the line and an **Arduino** to process the sensor readings and control the motors. Based on the position of the line, the robot automatically adjusts its movement to stay on the track.
## 🎥 Demo

[▶️ Watch the robot demonstration](line-follower-robot.mp4)
then click raw

## ⚙️ How It Works

The IR sensors continuously monitor the surface underneath the robot.

* ⬆️ **Line detected in the center** → Robot moves forward
* ⬅️ **Line detected on the left** → Robot adjusts to the left
* ➡️ **Line detected on the right** → Robot adjusts to the right
* 🛑 **Line not detected** → Robot stops or searches for the line

The Arduino reads the sensor signals and controls the motors accordingly.

## 🛠️ Components

* Arduino
* IR Line-Following Sensors
* DC Motors
* Motor Driver
* Robot Chassis
* Wheels
* Battery / Power Supply
* Connecting Wires

## 💻 Technologies

* **Arduino**
* **C/C++**
* **Embedded Systems**
* **IR Sensor Technology**
* **Motor Control**

## 🎯 Features

* Autonomous navigation
* Real-time sensor processing
* Automatic direction correction
* Motor speed and direction control
* Simple and efficient control logic


## 🚀 Future Improvements

* Implement **PID control** for smoother movement
* Improve sensor calibration
* Increase navigation speed
* Add obstacle detection
* Add wireless monitoring/control
* Optimize motor speed control


## 👨‍💻 Author

**Yehia**

This project was developed as a practical project to gain experience in **Arduino programming, electronics, embedded systems, sensors, and robotics**.
