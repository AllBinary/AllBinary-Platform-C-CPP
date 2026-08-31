
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameFeature.h"
#include "Feature.h"

class GameFeatureFactory
            : public Object
         {
        

    private: static const instance: GameFeatureFactory = new GameFeatureFactory();

    public static GameFeatureFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureFactory.instance;
    
}


private constructor (){

            super();
        }


    public const SOUND: GameFeature = new GameFeature("Sound");

    public const MUSIC: GameFeature = new GameFeature("Music");

    public const SCREEN_SHAKE: Feature = new Feature("Screen Shake");

    public const POST_IMAGE_LOADING_MODIFICATION: Feature = new Feature("Post Image Loading Modification (Scaling, Rotation, or Other)");

    public const HEALTH_BARS: GameFeature = new GameFeature("Health Bars");

    public const DAMAGE_FLOATERS: GameFeature = new GameFeature("Damage Floaters");

    public const GAME_INPUT_LAYER_PROCESSOR: GameFeature = new GameFeature("Game Input Layer Processor");

    public const ARTIFICIAL_INTELLEGENCE_PROCESSOR: GameFeature = new GameFeature("Artificial Intelligence Layer Processor");

    public const COLLIDABLE_INTERFACE_LAYER_PROCESSOR: GameFeature = new GameFeature("Collidable Interface Layer Processor");

    public const TICKABLE_LAYER_PROCESSOR: GameFeature = new GameFeature("Tickable Layer Processor");

    public const CHEATING: GameFeature = new GameFeature("Cheating");

    public const DROPPED_ITEMS: GameFeature = new GameFeature("Drops");

    public const DROPPED_ITEMS_FROM_DEATH: GameFeature = new GameFeature("Drops from Dead");

    public const TEST_DESTROYED_LAYER_PROCESSOR: GameFeature = new GameFeature("Destroyed Layer Processor");

    public const COLLISIONS_WITH_SOURCE: GameFeature = new GameFeature("Allow Collisions With Source");

    public const COLLISIONS_FORCED_TWO_DIMENSIONAL: GameFeature = new GameFeature("Collisions Forced Two Dimensional");

};

            

