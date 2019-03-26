#include<ros/ros.h>
#include<std_msgs/String.h>
#include<std_msgs/Float32.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "india_node");
    ros::NodeHandle nh;
    
    ros::Publisher pub = nh.advertise<std_msgs::Float32>("/india_curr_pub",10);
    ros::Rate rate(3);

    while(ros::ok()){
    std_msgs::Float32 msg;
    msg.data = 50;    
    pub.publish(msg);
    rate.sleep();
    }
}
