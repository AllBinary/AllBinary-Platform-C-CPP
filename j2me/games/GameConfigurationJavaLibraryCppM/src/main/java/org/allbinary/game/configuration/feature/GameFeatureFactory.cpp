
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameFeature.h"
#include "Feature.h"

class GameFeatureFactory
            : public Object
         {

    private: static GameFeatureFactory instance() { return GameFeatureFactory(); }

    public: static GameFeatureFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureFactory::instance();
    
}


private: GameFeatureFactory(){
}


    public: const GameFeature SOUND = GameFeature("Sound");

    public: const GameFeature MUSIC = GameFeature("Music");

    public: const Feature SCREEN_SHAKE = Feature("Screen Shake");

    public: const Feature POST_IMAGE_LOADING_MODIFICATION = Feature("Post Image Loading Modification (Scaling, Rotation, or Other)");

    public: const GameFeature HEALTH_BARS = GameFeature("Health Bars");

    public: const GameFeature DAMAGE_FLOATERS = GameFeature("Damage Floaters");

    public: const GameFeature GAME_INPUT_LAYER_PROCESSOR = GameFeature("Game Input Layer Processor");

    public: const GameFeature ARTIFICIAL_INTELLEGENCE_PROCESSOR = GameFeature("Artificial Intelligence Layer Processor");

    public: const GameFeature COLLIDABLE_INTERFACE_LAYER_PROCESSOR = GameFeature("Collidable Interface Layer Processor");

    public: const GameFeature TICKABLE_LAYER_PROCESSOR = GameFeature("Tickable Layer Processor");

    public: const GameFeature CHEATING = GameFeature("Cheating");

    public: const GameFeature DROPPED_ITEMS = GameFeature("Drops");

    public: const GameFeature DROPPED_ITEMS_FROM_DEATH = GameFeature("Drops from Dead");

    public: const GameFeature TEST_DESTROYED_LAYER_PROCESSOR = GameFeature("Destroyed Layer Processor");

    public: const GameFeature COLLISIONS_WITH_SOURCE = GameFeature("Allow Collisions With Source");

    public: const GameFeature COLLISIONS_FORCED_TWO_DIMENSIONAL = GameFeature("Collisions Forced Two Dimensional");

};

            

