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

Side note: continuous_yaw_before_editing is a file that contains my draft work before cleaning up. It can be found in Catkin_ws/src/continuous_yaw
```
**Always remember to run steps 2-3 if you made any edits t/home/jethro/PX4/PX4-Autopilot/src/modules/flight_mode_manager/tasks/Orbit/FlightTaskOrbit.cppo the code**

6. Change vehicle 1 in QGC to offboard mode as seen below. 
![Screenshot from 2021-08-05 06-20-10](https://user-images.githubusercontent.com/62226668/128334442-2b159029-0031-46c1-a314-f35d3c8bda4f.png)


## Testing of code
---
1. Toggle to vehicle 2 and left click on any part of the map to select orbit. Manually change the orbit radius and the center of orbit by dragging the two points as seen below. (Ensure that the drone has already taken off before doing so)
![Screenshot from 2021-08-05 06-13-35](https://user-images.githubusercontent.com/62226668/128333627-9c4684ed-0154-428b-af1d-ca0d81032c45.png)

   Slide right at the bottom after you are done.

2. To change the orbit radius via code, go to PX4/PX4-Autopilot/src/modules/flight_mode_manager/tasks/Orbit/FlightTaskOrbit.cpp.
![Screenshot from 2021-08-05 06-15-58](https://user-images.githubusercontent.com/62226668/128333856-98466c0b-6fdb-47bf-b7d2-b46015520857.png)

   As seen above, change the radius to your desired value. 

3. To change the speed and direction via code, go to the same file. 
![Screenshot from 2021-08-05 06-17-29](https://user-images.githubusercontent.com/62226668/128334056-43915509-910c-461e-a722-1d0508de9b46.png)

   Comment out the some lines of the code as seen above. The value 2f can be changed accordinly to your desired value. Do note however that it is limited to a        maximum velocity that the drone can reached at certain orbiting radius.

4. Rerun ./px4.sh to compile the codes.





