//	Requires cmake for usage: https://docs.opencv.org/4.x/d0/d3d/tutorial_general_install.html


#include <gz/msgs/twist.pb.h>
#include <gz/msgs/laserscan.pb.h>
#include <gz/transport/Node.hh>


std::string camera_toipc = "/model/igt_one/color_camera";
gz::transport::Node node;



int main(int argc, char **argv)
{
    // Subscribe to a topic by registering a callback.
    if (!node.Subscribe(topic_sub, cb))
    {
        std::cerr << "Error subscribing to topic [" << topic_sub << "]" << std::endl;
        return -1;
    }

    // Zzzzzz.
    gz::transport::waitForShutdown();

    return 0;
}
