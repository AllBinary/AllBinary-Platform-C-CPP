
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_NULLINPUTROBOT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_NULLINPUTROBOT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/robot/NullInputRobot.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/help/HelpSet.h>

      
#include <org/allbinary/input/automation/AbstractInputRobot.h>

      
#include <org/allbinary/input/automation/PointFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/input/automation/robot/Point.h"
#include "org/allbinary/input/automation/robot/Rectangle.h"
#include "org/allbinary/input/automation/robot/Color.h"


NullInputRobot::NullInputRobot() : AbstractInputRobot(
                            nullptr), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto NullInputRobot::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullInputRobot::NAME;
    
}


    auto NullInputRobot::getHelpSet() -> HelpSet*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto NullInputRobot::getMousePoint() -> Point*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointFactory::getInstance(0, 0);;
    
}


    auto NullInputRobot::keyPress(int32_t keycode) -> void{
this->logUtil->putF(JavaString::valueOf("KeyCode: ") +JavaString::valueOf(keycode), this, "keyPress");
    
}


    auto NullInputRobot::keyRelease(int32_t keycode) -> void{
this->logUtil->putF(JavaString::valueOf("KeyCode: ") +JavaString::valueOf(keycode), this, "keyRelease");
    
}


    auto NullInputRobot::mouseMove(int32_t x, int32_t y) -> void{
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("X: ") +JavaString::valueOf(x)) +JavaString::valueOf(" Y: ")) +JavaString::valueOf(y), this, "mouseMove");
    
}


    auto NullInputRobot::mousePress(int32_t buttons) -> void{
this->logUtil->putF(JavaString::valueOf("Buttons: ") +JavaString::valueOf(buttons), this, "mousePress");
    
}


    auto NullInputRobot::mouseRelease(int32_t buttons) -> void{
this->logUtil->putF(JavaString::valueOf("Buttons: ") +JavaString::valueOf(buttons), this, "mouseRelease");
    
}


    auto NullInputRobot::createScreenCapture(Rectangle* screenRect) -> BufferedImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto NullInputRobot::delay(int32_t ms) -> void{
}


    auto NullInputRobot::getAutoDelay() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    auto NullInputRobot::getPixelColor(int32_t x, int32_t y) -> Color*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto NullInputRobot::isAutoWaitForIdle() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto NullInputRobot::mouseWheel(int32_t wheelAmt) -> void{
}


    auto NullInputRobot::setAutoDelay(int32_t ms) -> void{
}


    auto NullInputRobot::setAutoWaitForIdle(bool isOn) -> void{
}


    auto NullInputRobot::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "DirectXWindowsInputRobot";
    
}


    auto NullInputRobot::waitForIdle() -> void{
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_NULLINPUTROBOT_CPP
