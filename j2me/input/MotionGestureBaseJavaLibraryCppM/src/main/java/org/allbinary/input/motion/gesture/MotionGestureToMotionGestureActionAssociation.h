
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CompleteMotionGestureInputEvent;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionGestureToMotionGestureActionAssociation
            : public virtual Object
         {

    private: BasicArrayList* list;

    private: CompleteMotionGestureInputEvent* motionGestureAction;

public: MotionGestureToMotionGestureActionAssociation(BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction);

    public: BasicArrayList* getMotionGesture();

    public: void setMotionGestures(BasicArrayList* list);

    public: CompleteMotionGestureInputEvent* getCommandAction();

    public: void setMotionGestureAction(CompleteMotionGestureInputEvent* commandAction);

    public: bool isMotionGestureArrayEquals(BasicArrayList* aList);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEvent.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
