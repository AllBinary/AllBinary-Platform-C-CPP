
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFACTORY_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/GameFeature.h"
#include "org/allbinary/game/configuration/feature/Feature.h"

auto GameFeatureFactory::instance_owner() -> GameFeatureFactory* { static std::unique_ptr<GameFeatureFactory> value(new GameFeatureFactory()); return value.get(); }
GameFeatureFactory* GameFeatureFactory::instance = GameFeatureFactory::instance_owner();

    auto GameFeatureFactory::getInstance() -> GameFeatureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureFactory::instance;
    
}


GameFeatureFactory::GameFeatureFactory() : SOUND(new GameFeature("Sound")), MUSIC(new GameFeature("Music")), SCREEN_SHAKE(new Feature("Screen Shake")), POST_IMAGE_LOADING_MODIFICATION(new Feature("Post Image Loading Modification (Scaling, Rotation, or Other)")), HEALTH_BARS(new GameFeature("Health Bars")), DAMAGE_FLOATERS(new GameFeature("Damage Floaters")), GAME_INPUT_LAYER_PROCESSOR(new GameFeature("Game Input Layer Processor")), ARTIFICIAL_INTELLEGENCE_PROCESSOR(new GameFeature("Artificial Intelligence Layer Processor")), COLLIDABLE_INTERFACE_LAYER_PROCESSOR(new GameFeature("Collidable Interface Layer Processor")), TICKABLE_LAYER_PROCESSOR(new GameFeature("Tickable Layer Processor")), CHEATING(new GameFeature("Cheating")), DROPPED_ITEMS(new GameFeature("Drops")), DROPPED_ITEMS_FROM_DEATH(new GameFeature("Drops from Dead")), TEST_DESTROYED_LAYER_PROCESSOR(new GameFeature("Destroyed Layer Processor")), COLLISIONS_WITH_SOURCE(new GameFeature("Allow Collisions With Source")), COLLISIONS_FORCED_TWO_DIMENSIONAL(new GameFeature("Collisions Forced Two Dimensional")){
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFACTORY_CPP
