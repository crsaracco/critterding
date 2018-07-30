#ifndef TESTWORLD1_H
#define TESTWORLD1_H

#include "../entities/worldb.h"

class TestWorld1 : public WorldB {

	public:
		TestWorld1(  std::shared_ptr<BeGraphicsSystem> system, std::shared_ptr<Textverbosemessage> textverbosemessage );
		~TestWorld1();

		void		process(const BeTimer& timer);
		void		init();
	private:
		btVector3 findPosition();
		float decSizeFactor;
		unsigned int elevations;
};

#endif
