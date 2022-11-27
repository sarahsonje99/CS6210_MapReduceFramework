#pragma once

#include <mr_task_factory.h>
#include "mr_tasks.h"


/* CS6210_TASK: Handle all the task a Worker is supposed to do.
	This is a big task for this project, will test your understanding of map reduce */
class Worker {
	// Worker is a friend class of Mapper and Reducer. 
	// Hence, worker can directly map changes to it private members of the Mapper and Reducer implementations. 
	// Hence, you can provide the impl a struct to which implmentor can write in the emit function.
	// Once that struct is populated, worker dumps that struct into the disk. 

	public:
		/* DON'T change the function signature of this constructor */
		Worker(std::string ip_addr_port);

		/* DON'T change this function's signature */
		bool run();

	private:
		/* NOW you can add below, data members and member functions as per the need of your implementation*/
		// Could be constants, data variables, 

};


/* CS6210_TASK: ip_addr_port is the only information you get when started.
	You can populate your other class data members here if you want */
Worker::Worker(std::string ip_addr_port) {
	// TODO

}

extern std::shared_ptr<BaseMapper> get_mapper_from_task_factory(const std::string& user_id);
extern std::shared_ptr<BaseReducer> get_reducer_from_task_factory(const std::string& user_id);

/* CS6210_TASK: Here you go. once this function is called your woker's job is to keep looking for new tasks 
	from Master, complete when given one and again keep looking for the next one.
	Note that you have the access to BaseMapper's member BaseMapperInternal impl_ and 
	BaseReduer's member BaseReducerInternal impl_ directly, 
	so you can manipulate them however you want when running map/reduce tasks*/
bool Worker::run() {
	/*  Below 5 lines are just examples of how you will call map and reduce
		Remove them once you start writing your own logic */ 

	// TODO 

	/*
		Keep on looking for a new map or reduce task provided by the master.
		Once it gets a new task, it has to process it and communicate its completion to the Master via a protocol
		Continue waiting for a new task.
		Eg. if you get a map task, use `get_mapper_from_task_factory` to get the mapping algorithm.
		Master should also be sending the userId for the map task. 
		Perform any required book-keeping. Then call mapper.map() to run user's algorithm for mapping.
		Dump the output in local disk for both mapper and reducer (different from paper).
	*/

	std::cout << "worker.run(), I 'm not ready yet" <<std::endl;
	auto mapper = get_mapper_from_task_factory("cs6210");
	mapper->map("I m just a 'dummy', a \"dummy line\"");
	// auto reducer = get_reducer_from_task_factory("cs6210");
	// reducer->reduce("dummy", std::vector<std::string>({"1", "1"}));

	return true;
}
