
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MotionGestureConfiguration::MotionGestureConfiguration() : button(StringUtil::getInstance()->EMPTY_STRING), color(BasicColorFactory::getInstance()->BLUE), activeCommands(new BasicArrayListD()){
}


    auto MotionGestureConfiguration::addMotionGestureAction(BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction) -> void{
this->activeCommands->add(new MotionGestureToMotionGestureActionAssociation(list, commandAction));
    
}


    auto MotionGestureConfiguration::clearMotionGestureAction() -> void{
this->activeCommands->clear();
    
}


    auto MotionGestureConfiguration::getAssociateCommandActionsList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->activeCommands;
    
}


    auto MotionGestureConfiguration::isDiagonalMotionGestureAllowed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->diagonalMotionGestureAllowed;
    
}


    auto MotionGestureConfiguration::isExecutingActionsAllowed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->executingActions;
    
}


    auto MotionGestureConfiguration::setExecutingActionsAllowed(bool executingActionAllowed) -> void{
this->executingActions= executingActionAllowed;
    
}


    auto MotionGestureConfiguration::setDiagonalMotionGestureAllowed(bool diagonalMotionGestureAllowed) -> void{
this->diagonalMotionGestureAllowed= diagonalMotionGestureAllowed;
    
}


    auto MotionGestureConfiguration::getDiagonalTolerance() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->diagonalTolerance;
    
}


    auto MotionGestureConfiguration::setDiagonalTolerance(int32_t diagonalTolerance) -> void{
this->diagonalTolerance= diagonalTolerance;
    
}


    auto MotionGestureConfiguration::getMinimumMotionGesture() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minimumMotionGesture;
    
}


    auto MotionGestureConfiguration::setMinimumMotionGesture(int32_t minimumMotionGesture) -> void{
this->minimumMotionGesture= minimumMotionGesture;
    
}


    auto MotionGestureConfiguration::getButton() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->button;
    
}


    auto MotionGestureConfiguration::setButton(std::string button) -> void{
this->button= button;
    
}


    auto MotionGestureConfiguration::getColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->color;
    
}


    auto MotionGestureConfiguration::setColor(BasicColor* color) -> void{
this->color= color;
    
}


    auto MotionGestureConfiguration::getMouseButtonMask() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mouseButtonMask;
    
}


    auto MotionGestureConfiguration::setMouseButtonMask(int32_t mouseButtonMask) -> void{
this->mouseButtonMask= mouseButtonMask;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_CPP
