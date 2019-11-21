#include "error.hpp"
#include <iostream>

std::string errors[NUM_ERRORS] = {
  "Error loading configuration file.",
  "Tier directory does not exist. Please check config.",
  "THRESHOLD error. Must be a positive integer. Please check config.",
  "Error reading tier ID ([Tier <n>]). <n> must be positive integer.",
  "First tier must be specified with '[<tier name>]' before any other config options.",
  "No tiers defined in config file.",
  "Only one tier defined in config file, two or more are needed.",
  "USAGE_WATERMARK must be positive integer between 0 and 100."
};

void error(enum Error error){
  std::cerr << errors[error] << std::endl;
}