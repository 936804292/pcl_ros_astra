# pcl_ros_astra


1.安装官方sudo apt-get install ros-kinetic-astra-camera ros-kinetic-astra-launch  

2.~/catkin_ws/src$ git clone https://github.com/936804292/pcl_ros_astra.git

3.~/catkin_ws/$ catkin_make

4.<option> 环境配置好可跳过
 a.source ~/catkin_ws/devel/setup.bash
 b.source ~/.bashrc
 c.export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/catkin_ws/src
  
5.roslaunch astra_launch astra.launch
  查看rostopic list 是否包含/camera/depth/points话题

6.~$ rosrun pcl_ros_astra pcl_subscriber 

[ INFO] [1586742816.878792462]: ------------start pcl node--------

7.一个简单的demo，最后点云输出在桌面；

