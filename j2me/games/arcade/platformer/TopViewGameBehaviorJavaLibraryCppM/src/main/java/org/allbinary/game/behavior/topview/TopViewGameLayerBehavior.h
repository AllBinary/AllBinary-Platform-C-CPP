
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/layer/behavior/GameLayerBehavior.h>

      
#include <org/allbinary/game/physics/acceleration/BasicAccelerationProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/InitialJumpBehavior.h"

class TopViewGameLayerBehavior: public GameLayerBehavior {

    public: int32_t maxGravityActionIndex;

    public: bool isJumpAction = true;

    public: bool isJumpOver = false;

    public: bool isFallingWithoutJumpAttempt = false;

    public: int32_t gravityActionIndex = 0;

public: TopViewGameLayerBehavior(int32_t maxGravityActionIndex);

    public: void gravity();

    public: void land(VelocityProperties* velocityProperties);

    public: void landReset();

    public: void up(VelocityProperties* velocityProperties, BasicAccelerationProperties* acceleration, InitialJumpBehavior* jumpBehavior, int32_t accelerationMultiplier);

    public: void inputFrames(VelocityProperties* velocityProperties);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWGAMELAYERBEHAVIOR_H
