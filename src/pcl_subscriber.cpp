#include <ros/ros.h>
#include <pcl/point_cloud.h>
#include <pcl_conversions/pcl_conversions.h>
#include <sensor_msgs/PointCloud2.h>
#include <pcl/io/ply_io.h>

void cloudPLY(const sensor_msgs::PointCloud2 &input)
{
    pcl::PointCloud<pcl::PointXYZ> cloud;
    pcl::fromROSMsg(input,cloud);

    //save pointcloud data
    pcl::io::savePLYFileASCII("/home/caps/Desktop/Astra_poins.ply",cloud);

}

main(int argc, char **argv)
{
    ros::init(argc, argv, "pcl_subscriber");
    ROS_INFO("------------start pcl node--------");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("/camera/depth/points", 10, cloudPLY);
    
    ros::spin();
    ROS_INFO("------------end pcl node--------");
    return 0;
}