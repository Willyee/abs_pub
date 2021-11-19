#include "ros/ros.h"
#include "i2cpwm_board/ServoArray.h"
#include "i2cpwm_board/Servo.h"


int main(int argc, char **argv){

 ros::init(argc, argv,"abs_pub");
 ros::NodeHandle n;
 ros::Publisher find_servo_center_pub = n.advertise<i2cpwm_board::ServoArray>("/servos_absolute", 1);

 while (ros::ok()){

  i2cpwm_board::ServoArray servo_array_;
  i2cpwm_board::ServoArray servo_array_absolute_;

  for (int i = 1; i <= 12; i++) {
    i2cpwm_board::Servo temp_servo;
    temp_servo.servo = i;
    temp_servo.value = 0;
    servo_array_.servos.push_back(temp_servo);
  }

  servo_array_.servos[0].value = 150;
  servo_array_.servos[1].value = 150;
  servo_array_.servos[2].value = 150;
  servo_array_.servos[3].value = 150;
  servo_array_.servos[4].value = 150;
  servo_array_.servos[5].value = 150;
  servo_array_.servos[6].value = 150;
  servo_array_.servos[7].value = 150;
  servo_array_.servos[8].value = 150;
  servo_array_.servos[9].value = 150;
  servo_array_.servos[10].value = 150;
  servo_array_.servos[11].value = 150;

  servo_array_absolute_.servos = servo_array_.servos;

  find_servo_center_pub.publish(servo_array_absolute_);
  ros::Duration(1).sleep();

 }
 
 return 0;
}
