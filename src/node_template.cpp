#include "ros2_pkg_template_cpp/node_template.hpp"

// Include std header

// Include ros header

// Include other header

// Include local header

namespace ros2_pkg_template_cpp
{

NodeTemplate::NodeTemplate(const rclcpp::NodeOptions & options) : rclcpp::Node("template", "", options)
{
  RCLCPP_INFO(get_logger(), "Create motion node...");

  DeclareParameters();
  GetParameters();

  RCLCPP_INFO(get_logger(), "Create motion node done.");

  Run();
}

NodeTemplate::~NodeTemplate() {}

void NodeTemplate::DeclareParameters()
{
  RCLCPP_INFO(get_logger(), "DeclareParameters...");

  RCLCPP_INFO(get_logger(), "DeclareParameters done.");
}

void NodeTemplate::GetParameters()
{
  RCLCPP_INFO(get_logger(), "GetParameters...");

  RCLCPP_INFO(get_logger(), "GetParameters done.");
}

void NodeTemplate::Run()
{
  RCLCPP_INFO(get_logger(), "Run...");

  RCLCPP_INFO(get_logger(), "Run done.");
}

}  // namespace sad_ch2
