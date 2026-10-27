
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

class InputRobot
            : public Object
        , public InputRobotInterface {

    public: static inline const std::string NAME = "Java Robot";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: Robot* robot;

public: InputRobot(GraphicsDevice* graphicsDevice){
this->robot= new Robot(graphicsDevice);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputRobot::NAME;
    
}


    public: HelpSet* getHelpSet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Point* getMousePoint(){

    Point* point = MouseInfo::getPointerInfo()->getLocation();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return point;
    
}


                //@Throws(Exception.constructor)
            
    public: void mouseMoveToTarget(Rectangle* rectangle, int32_t x, int32_t y){

    Point* point = PointHelper::getCenterPoint(rectangle);;
    
this->robot->mouseMove(point->x +x, point->y +y);
    

    std::string message = (new StringMaker())->append("Moved Mouse To: x: ")->appendint(point->x)->append(" y: ")->appendint(point->y)->append(" in the middle of: ")->append(StringUtil::getInstance()->toString(rectangle))->toString();;
    
this->logUtil->putF(message, this, "moveMouseToTarget");
    
}


    public: void mouseMove(Point* point){
this->mouseMove(point->x, point->y);
    
}


    public: void mouseMove(int32_t x, int32_t y){
this->robot->mouseMove(x, y);
    

    std::string message = (new StringMaker())->append("Moved Mouse To: x: ")->appendint(x)->append(" y: ")->appendint(y)->toString();;
    
this->logUtil->putF(message, this, "moveMouse");
    
}


                //@Throws(Exception.constructor)
            
    public: void mouseMoveToTarget(Rectangle* rectangle){
this->mouseMoveToTarget(rectangle, 0, 0);
    
}


    public: BufferedImage* createScreenCapture(Rectangle* screenRect){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->robot->createScreenCapture(screenRect);;
    
}


    public: void delay(int32_t ms){
this->robot->delay(ms);
    
}


    public: int32_t getAutoDelay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->robot->getAutoDelay();;
    
}


    public: Color* getPixelColor(int32_t x, int32_t y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->robot->getPixelColor(x, y);;
    
}


    public: bool isAutoWaitForIdle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->robot->isAutoWaitForIdle();;
    
}


    public: void keyPress(int32_t keycode){
this->robot->keyPress(keycode);
    
}


    public: void keyRelease(int32_t keycode){
this->robot->keyRelease(keycode);
    
}


    public: void mouseMove(int32_t x, int32_t y){
this->robot->mouseMove(x, y);
    
}


    public: void mousePress(int32_t buttons){
this->robot->mousePress(buttons);
    
}


    public: void mouseRelease(int32_t buttons){
this->robot->mouseRelease(buttons);
    
}


    public: void mouseWheel(int32_t wheelAmt){
this->robot->mouseWheel(wheelAmt);
    
}


    public: void setAutoDelay(int32_t ms){
this->robot->setAutoDelay(ms);
    
}


    public: void setAutoWaitForIdle(bool isOn){
this->robot->setAutoWaitForIdle(isOn);
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->robot->toString();;
    
}


    public: void waitForIdle(){
this->robot->waitForIdle();
    
}


    public: void on(){
}


    public: void off(){
}


};

            

