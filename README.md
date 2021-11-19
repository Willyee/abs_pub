
<div id="top"></div>

## About The Project

This is an sample package of Ros for Servo (MG 996R) depend on i2cpwm_board.

<p align="right">(<a href="#top">back to top</a>)</p>

### Built With

+ Ros
+ i2cpwm_board

<p align="right">(<a href="#top">back to top</a>)</p>

## Getting Started

You have to install Ros to use this package.

### Installation

first install ```libi2c-dev```

```sudo apt-get install libi2c-dev```

then get to your workspace/src clone and build the package:

```
$ cd ~/catkin_ws/src/
$ git clone https://github.com/mentor-dyun/ros-i2cpwmboard.git
$ cd ~/catkin_ws && catkin_make
```


<p align="right">(<a href="#top">back to top</a>)</p>

## Usage

use roslaunch to run this package:
```sh
roslaunch motor_drive abs_pub.launch
```

you can use `rostopic echo` to check if it's working:
```sh
rostopic echo /servos_absoulte
```

<p align="right">(<a href="#top">back to top</a>)</p>

## Acknowledgments

+ [ros_i2cbread](http://bradanlane.gitlab.io/ros-i2cpwmboard/index.html)

<p align="right">(<a href="#top">back to top</a>)</p>
