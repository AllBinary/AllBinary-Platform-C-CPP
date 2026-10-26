
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionGestureToMotionGestureActionAssociation
            : public Object
         {

    private: BasicArrayList list;

    private: CompleteMotionGestureInputEvent motionGestureAction;

public: MotionGestureToMotionGestureActionAssociation(BasicArrayList list, CompleteMotionGestureInputEvent commandAction);

    public: BasicArrayList getMotionGesture();

    public: void setMotionGestures(BasicArrayList list);

    public: CompleteMotionGestureInputEvent getCommandAction();

    public: void setMotionGestureAction(CompleteMotionGestureInputEvent commandAction);

    public: bool isMotionGestureArrayEquals(BasicArrayList aList);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_H
