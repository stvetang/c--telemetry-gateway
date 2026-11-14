#include <iostream>
#include "gateway/version.hpp"

int main() {
	std::cout << "telemetry gateway " << gateway::version() << "\n";
	return 0;
}
