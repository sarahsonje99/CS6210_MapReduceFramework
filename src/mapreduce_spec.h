#pragma once

#include <string>


/* CS6210_TASK: Create your data structure here for storing spec from the config file */
struct MapReduceSpec {
	// Check in paper what this data structure is.
	// Collect information from the config file.
	// Store it in any format you want.
	// This is the only data struct that is passed on to the Master (along with the file shards).
	// Framework: setup all infra that the Master requires to do it own job.
	// Master: Perform the map-reduce task. Talk to worker and provide them work. communicate with workers. 
	// TODO
};


/* CS6210_TASK: Populate MapReduceSpec data structure with the specification from the config file */
inline bool read_mr_spec_from_config_file(const std::string& config_filename, MapReduceSpec& mr_spec) {
	// Populate the struct here. 
	// TODO
	return true;
}


/* CS6210_TASK: validate the specification read from the config file */
inline bool validate_mr_spec(const MapReduceSpec& mr_spec) {
	// validate inputs given by config file. (are files present, are the numbers okay)
	// TODO
	return true;
}
