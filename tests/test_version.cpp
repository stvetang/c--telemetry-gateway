#include <gtest/gtest.h>
#include "gateway/version.hpp"

TEST(Version, IsNotEmpty) {
	EXPECT_FALSE(gateway::version().empty());
}

