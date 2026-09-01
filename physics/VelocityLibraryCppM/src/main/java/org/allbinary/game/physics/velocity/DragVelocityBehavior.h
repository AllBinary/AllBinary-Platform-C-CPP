
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H

#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VelocityBehaviorBase.h"
#include "BasicVelocityProperties.h"

class DragVelocityBehavior: public VelocityBehaviorBase {

    private: static DragVelocityBehavior instance() { return DragVelocityBehavior(); }

    public: void reduce(BasicVelocityProperties velocityProperties, int32_t nominator, int32_t denominator);

    public: void reduceX(BasicVelocityProperties velocityProperties, int32_t nominator, int32_t denominator);

    public: void reduceY(BasicVelocityProperties velocityProperties, int32_t nominator, int32_t denominator);

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H
