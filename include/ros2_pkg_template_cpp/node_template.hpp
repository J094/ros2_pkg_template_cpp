#pragma once

// Include std header

// Include ros header
#include <rclcpp/rclcpp.hpp>

// Include other header

// Include local header

namespace ros2_pkg_template_cpp {

class NodeTemplate : public rclcpp::Node {
public:
  NodeTemplate(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());
  ~NodeTemplate();
private:
  void DeclareParameters();
  void GetParameters();
  void Run();
};

}  // namespace ros2_pkg_template_cpp
