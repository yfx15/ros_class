#include "ros/ros.h"    

int main(int argc,char **argv) 
{
  ros::init(argc,argv,"hello_node"); //初始化ros节点;并指明节点的名称为 hello_node
  ros::NodeHandle n;                 
  ROS_INFO_STREAM("hello world!");
}
