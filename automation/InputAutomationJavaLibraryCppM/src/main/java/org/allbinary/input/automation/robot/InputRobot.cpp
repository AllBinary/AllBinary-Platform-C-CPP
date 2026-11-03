
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/robot/InputRobot.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/help/HelpSet.h>

      
#include <org/allbinary/input/automation/PointHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/input/automation/robot/Robot.h"
#include "org/allbinary/input/automation/robot/GraphicsDevice.h"
#include "org/allbinary/input/automation/robot/MouseInfo.h"
#include "org/allbinary/input/automation/robot/Point.h"
#include "org/allbinary/input/automation/robot/Rectangle.h"
#include "org/allbinary/input/automation/robot/Color.h"


InputRobot::InputRobot(GraphicsDevice* graphicsDevice) : logUtil(LogUtil::getInstance()){
this->robot= new Robot(graphicsDevice);
    
}


    auto InputRobot::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InputRobot::NAME;
    
}


    auto InputRobot::getHelpSet() -> HelpSet*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto InputRobot::getMousePoint() -> Point*{

    Point* point = MouseInfo::getPointerInfo()->getLocation();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return point;
    
}


                //@Throws(Exception.constructor)
            
    auto InputRobot::mouseMoveToTarget(Rectangle* rectangle, int32_t x, int32_t y) -> void{

    Point* point = PointHelper::getCenterPoint(rectangle);;
    
this->robot->mouseMove(point->x +x, point->y +y);
    

    std::string message = (new StringMaker())->append("Moved Mouse To: x: ")->appendint(point->x)->append(" y: ")->appendint(point->y)->append(" in the middle of: ")->append(StringUtil::getInstance()->toString(rectangle))->toString();;
    
this->logUtil->putF(message, this, "moveMouseToTarget");
    
}


    auto InputRobot::mouseMove(Point* point) -> void{
this->mouseMove(point->x, point->y);
    
}


    auto InputRobot::mouseMove(int32_t x, int32_t y) -> void{
this->robot->mouseMove(x, y);
    

    std::string message = (new StringMaker())->append("Moved Mouse To: x: ")->appendint(x)->append(" y: ")->appendint(y)->toString();;
    
this->logUtil->putF(message, this, "moveMouse");
    
}


                //@Throws(Exception.constructor)
            
    auto InputRobot::mouseMoveToTarget(Rectangle* rectangle) -> void{
this->mouseMoveToTarget(rectangle, 0, 0);
    
}


    auto InputRobot::createScreenCapture(Rectangle* screenRect) -> BufferedImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->robot->createScreenCapture(screenRect);;
    
}


    auto InputRobot::delay(int32_t ms) -> void{
this->robot->delay(ms);
    
}


    auto InputRobot::getAutoDelay() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->robot->getAutoDelay();;
    
}


    auto InputRobot::getPixelColor(int32_t x, int32_t y) -> Color*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->robot->getPixelColor(x, y);;
    
}


    auto InputRobot::isAutoWaitForIdle() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->robot->isAutoWaitForIdle();;
    
}


    auto InputRobot::keyPress(int32_t keycode) -> void{
this->robot->keyPress(keycode);
    
}


    auto InputRobot::keyRelease(int32_t keycode) -> void{
this->robot->keyRelease(keycode);
    
}


    auto InputRobot::mouseMove(int32_t x, int32_t y) -> void{
this->robot->mouseMove(x, y);
    
}


    auto InputRobot::mousePress(int32_t buttons) -> void{
this->robot->mousePress(buttons);
    
}


    auto InputRobot::mouseRelease(int32_t buttons) -> void{
this->robot->mouseRelease(buttons);
    
}


    auto InputRobot::mouseWheel(int32_t wheelAmt) -> void{
this->robot->mouseWheel(wheelAmt);
    
}


    auto InputRobot::setAutoDelay(int32_t ms) -> void{
this->robot->setAutoDelay(ms);
    
}


    auto InputRobot::setAutoWaitForIdle(bool isOn) -> void{
this->robot->setAutoWaitForIdle(isOn);
    
}


    auto InputRobot::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->robot->toString();;
    
}


    auto InputRobot::waitForIdle() -> void{
this->robot->waitForIdle();
    
}


    auto InputRobot::on() -> void{
}


    auto InputRobot::off() -> void{
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_CPP
