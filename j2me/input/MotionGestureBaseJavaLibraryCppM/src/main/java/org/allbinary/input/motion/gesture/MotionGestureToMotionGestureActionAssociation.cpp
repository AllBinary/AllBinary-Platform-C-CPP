
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MotionGestureToMotionGestureActionAssociation::MotionGestureToMotionGestureActionAssociation(BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction){
this->list= list;
    
this->motionGestureAction= commandAction;
    
}


    auto MotionGestureToMotionGestureActionAssociation::getMotionGesture() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


    auto MotionGestureToMotionGestureActionAssociation::setMotionGestures(BasicArrayList* list) -> void{
this->list= list;
    
}


    auto MotionGestureToMotionGestureActionAssociation::getCommandAction() -> CompleteMotionGestureInputEvent*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionGestureAction;
    
}


    auto MotionGestureToMotionGestureActionAssociation::setMotionGestureAction(CompleteMotionGestureInputEvent* commandAction) -> void{
this->motionGestureAction= commandAction;
    
}


    auto MotionGestureToMotionGestureActionAssociation::isMotionGestureArrayEquals(BasicArrayList* aList) -> bool{

    int32_t size = aList->size();;
    

                        if(this->list->size() != size)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                




                        for (
    int32_t i = size -1;i >= 0; i--)
        {

                        if(aList->objectArray[i] != this->list->objectArray[i])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_CPP
