
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWGAMELAYERBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWGAMELAYERBEHAVIOR_H

#include <org/allbinary/game/layer/behavior/GameLayerBehavior.h>

      
#include <org/allbinary/game/physics/acceleration/BasicAccelerationProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitialJumpBehavior.h"

class TopViewGameLayerBehavior: public GameLayerBehavior {
        

    public const maxGravityActionIndex: int32_t;

    public isJumpAction: bool = true;

    public isJumpOver: bool = false;

    public isFallingWithoutJumpAttempt: bool = false;

    public gravityActionIndex: int32_t = 0;

public constructor (int32_t maxGravityActionIndex);

    public gravity();

    public land(VelocityProperties velocityProperties);

    public landReset();

    public up(VelocityProperties velocityProperties, BasicAccelerationProperties acceleration, InitialJumpBehavior jumpBehavior, int32_t accelerationMultiplier);

    public inputFrames(VelocityProperties velocityProperties);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWGAMELAYERBEHAVIOR_H
