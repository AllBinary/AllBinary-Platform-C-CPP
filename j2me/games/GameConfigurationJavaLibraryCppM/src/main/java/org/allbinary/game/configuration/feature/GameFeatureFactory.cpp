
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/GameFeature.h"
#include "org/allbinary/game/configuration/feature/Feature.h"

class GameFeatureFactory
            : public Object
         {

    private: static GameFeatureFactory* instance() { static std::unique_ptr<GameFeatureFactory> value(new GameFeatureFactory()); return value.get(); }

    public: static GameFeatureFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureFactory::instance();
    
}


private: GameFeatureFactory(){
}


    public: GameFeature* SOUND = new GameFeature("Sound");

    public: GameFeature* MUSIC = new GameFeature("Music");

    public: Feature* SCREEN_SHAKE = new Feature("Screen Shake");

    public: Feature* POST_IMAGE_LOADING_MODIFICATION = new Feature("Post Image Loading Modification (Scaling, Rotation, or Other)");

    public: GameFeature* HEALTH_BARS = new GameFeature("Health Bars");

    public: GameFeature* DAMAGE_FLOATERS = new GameFeature("Damage Floaters");

    public: GameFeature* GAME_INPUT_LAYER_PROCESSOR = new GameFeature("Game Input Layer Processor");

    public: GameFeature* ARTIFICIAL_INTELLEGENCE_PROCESSOR = new GameFeature("Artificial Intelligence Layer Processor");

    public: GameFeature* COLLIDABLE_INTERFACE_LAYER_PROCESSOR = new GameFeature("Collidable Interface Layer Processor");

    public: GameFeature* TICKABLE_LAYER_PROCESSOR = new GameFeature("Tickable Layer Processor");

    public: GameFeature* CHEATING = new GameFeature("Cheating");

    public: GameFeature* DROPPED_ITEMS = new GameFeature("Drops");

    public: GameFeature* DROPPED_ITEMS_FROM_DEATH = new GameFeature("Drops from Dead");

    public: GameFeature* TEST_DESTROYED_LAYER_PROCESSOR = new GameFeature("Destroyed Layer Processor");

    public: GameFeature* COLLISIONS_WITH_SOURCE = new GameFeature("Allow Collisions With Source");

    public: GameFeature* COLLISIONS_FORCED_TWO_DIMENSIONAL = new GameFeature("Collisions Forced Two Dimensional");

};

            

