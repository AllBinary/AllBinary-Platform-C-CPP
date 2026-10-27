
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ABSTRACTINPUTROBOT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ABSTRACTINPUTROBOT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/AbstractInputRobot.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <javax/help/HelpSet.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/Point.h"
#include "org/allbinary/input/automation/PointHelper.h"
#include "org/allbinary/input/automation/Rectangle.h"


AbstractInputRobot::AbstractInputRobot(HelpSet* helpSet) : logUtil(LogUtil::getInstance()){
this->setHelpSet(helpSet);
    
}


    auto AbstractInputRobot::getHelpSet() -> HelpSet*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->helpSet;
    
}


    auto AbstractInputRobot::mouseMove(Point* point) -> void{
this->mouseMove(point->x, point->y);
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Moved Mouse To: x: ") +JavaString::valueOf(point->x)) +JavaString::valueOf(" y: ")) +JavaString::valueOf(point->y), this, "moveMouse");
    
}


                //@Throws(Exception.constructor)
            
    auto AbstractInputRobot::mouseMoveToTarget(Rectangle* rectangle, int32_t x, int32_t y) -> void{

    Point* point = PointHelper::getCenterPoint(rectangle);;
    
this->mouseMove(point->x +x, point->y +y);
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Moved Mouse To: x: ") +JavaString::valueOf(point->x)) +JavaString::valueOf(" y: ")) +JavaString::valueOf(point->y)) +JavaString::valueOf(" in the middle of: ")) +JavaString::valueOf(rectangle), this, "moveMouseToTarget");
    
}


                //@Throws(Exception.constructor)
            
    auto AbstractInputRobot::mouseMoveToTarget(Rectangle* rectangle) -> void{
this->mouseMoveToTarget(rectangle, 0, 0);
    
}


    auto AbstractInputRobot::mouseMove(int32_t x, int32_t y) -> void{



                            throw RuntimeException();
                    
}


    auto AbstractInputRobot::setHelpSet(HelpSet* helpSet) -> void{
this->helpSet= helpSet;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ABSTRACTINPUTROBOT_CPP
