# Follow Target Drone

## Prerequisites
---
Ubuntu LTS 18.04

ROS Melodic

[Setup PX4, QGC and MavROS](https://github.com/JethroPhuah/PX4)

## About
---
"continuous_yaw.cpp" is a cpp file that contains a simple algorithm that allows a following drone to follow a target drone in the Gazebo simulator environment. It takes in values from the Gazebo model states and calculates the angle required to yaw per second. It has in place a failsafe operation in the event that the target drone flies out of the camera's view. 

## How to use the codes
---
1. Clone the repository into your home directory
```
 git clone https://github.com/JethroPhuah/Catkin_ws.git --recursive
```

2. Change directory
cd catkin_ws

3. Compile the repository
```
catkin build
```

4. Restart terminal or source setup.bash file in catkin_ws/devel
```
source devel/setup.bash
```

5. Run the code (Change file name in accordingly if required)
```
rosrun continuous_yaw continuous_yaw 
```
**Always remember to run steps 2-3 if you made any edits to the code**

6. Change vehicle 1 in QGC to offboard mode




