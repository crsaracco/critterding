#ifndef WORLDRACE_H
#define WORLDRACE_H

#include "../entities/worldb.h"

class WorldRace : public WorldB {

	public:
		WorldRace(  std::shared_ptr<BeGraphicsSystem> system, BeFilesystem& fileSystem, std::shared_ptr<Textverbosemessage> textverbosemessage );
		~WorldRace();

		void		process(const BeTimer& timer);
		void		init();
		void		insertCritter();
		void		loadAllCritters();
	private:
		void		makeFloor();
		void		insRandomCritter(int nr);
		void		insMutatedCritter(CritterB& other, int nr, unsigned int id, bool mutateBrain, bool mutateBody);
		void		insFood(int nr);

		float		critterspacing;

		bool		haveWinner;

		unsigned int	framecounter;
		unsigned int	m_finished_counter;

		unsigned int	testcounter;
		std::shared_ptr<BeGraphicsModelResource>	m_model_cube;
		virtual void resetCamera();
// 		virtual void setLights();
};

#endif
