
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameFeature;
class Feature;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameFeatureFactory
            : public virtual Object
         {

    private: static GameFeatureFactory* instance_owner();
    private: static GameFeatureFactory* instance;

    public: static GameFeatureFactory* getInstance();

private: GameFeatureFactory();

    public: GameFeature* SOUND;

    public: GameFeature* MUSIC;

    public: Feature* SCREEN_SHAKE;

    public: Feature* POST_IMAGE_LOADING_MODIFICATION;

    public: GameFeature* HEALTH_BARS;

    public: GameFeature* DAMAGE_FLOATERS;

    public: GameFeature* GAME_INPUT_LAYER_PROCESSOR;

    public: GameFeature* ARTIFICIAL_INTELLEGENCE_PROCESSOR;

    public: GameFeature* COLLIDABLE_INTERFACE_LAYER_PROCESSOR;

    public: GameFeature* TICKABLE_LAYER_PROCESSOR;

    public: GameFeature* CHEATING;

    public: GameFeature* DROPPED_ITEMS;

    public: GameFeature* DROPPED_ITEMS_FROM_DEATH;

    public: GameFeature* TEST_DESTROYED_LAYER_PROCESSOR;

    public: GameFeature* COLLISIONS_WITH_SOURCE;

    public: GameFeature* COLLISIONS_FORCED_TWO_DIMENSIONAL;

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/game/configuration/feature/GameFeature.h")
#include "org/allbinary/game/configuration/feature/GameFeature.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Feature.h")
#include "org/allbinary/game/configuration/feature/Feature.h"
#endif

        #endif
    
