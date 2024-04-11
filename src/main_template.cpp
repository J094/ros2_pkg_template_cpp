// Include std header

// Include ros header

// Include other header

// Include local header
#include "ros2_pkg_template_cpp/node_template.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<ros2_pkg_template_cpp::NodeTemplate>(rclcpp::NodeOptions());

  rclcpp::spin(node->get_node_base_interface());

  rclcpp::shutdown();
  return 0;
}