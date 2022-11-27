#pragma once

#include "mapreduce_spec.h"
#include "file_shard.h"


/* CS6210_TASK: Handle all the bookkeeping that Master is supposed to do.
	This is probably the biggest task for this project, will test your understanding of map reduce */
class Master {

	public:
		/* DON'T change the function signature of this constructor */
		Master(const MapReduceSpec&, const std::vector<FileShard>&);
		// Make sure to send all info via MapReduceSpec struct to the Master

		/* DON'T change this function's signature */
		bool run();

	private:
		/* NOW you can add below, data members and member functions as per the need of your implementation*/

};


/* CS6210_TASK: This is all the information your master will get from the framework.
	You can populate your other class data members here if you want */
Master::Master(const MapReduceSpec& mr_spec, const std::vector<FileShard>& file_shards) {
	// TODO
}


/* CS6210_TASK: Here you go. once this function is called you will complete whole map reduce task and return true if succeeded */
bool Master::run() {
	// TODO.
	/*
		Assign tasks to workers and communicate their respective instructions (eg. userid etc).
		This is done via gRPC using the file - masterworker.proto file.
		You come up with a gRPC specific interface to communicate bwteen the master (client) and worker (server) 
	*/
	/*
	Perform book keeping.
	Restart process if a worker is not responding on a different node (worker). 
	Keep track of all running mappers and reducers. 
	Communicate between mapper results (set of intermediate files on local) and pass this info to the reduce to operate and generate the final output file.
	
	*/
	return true;
}