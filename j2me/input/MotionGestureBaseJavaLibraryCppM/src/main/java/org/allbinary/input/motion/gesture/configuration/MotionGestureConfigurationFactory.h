
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATIONFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATIONFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionGestureConfiguration.h"

class MotionGestureConfigurationFactory
            : public Object
         {

    private: static MotionGestureConfiguration config = MotionGestureConfiguration();

    public: static MotionGestureConfiguration getInstance();

public: MotionGestureConfigurationFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATIONFACTORY_H
