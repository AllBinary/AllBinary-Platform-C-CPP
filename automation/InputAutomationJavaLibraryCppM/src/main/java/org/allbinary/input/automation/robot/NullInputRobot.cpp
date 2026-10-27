
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

class NullInputRobot: public AbstractInputRobot, public InputRobotInterface {

    public: static inline const std::string LIBRARY_NAME = "null";

    public: static inline const std::string NAME = "NULL";

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: NullInputRobot() : AbstractInputRobot(
                            nullptr){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullInputRobot::NAME;
    
}


    public: HelpSet* getHelpSet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Point* getMousePoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointFactory::getInstance(0, 0);;
    
}


    public: void keyPress(int32_t keycode){
this->logUtil->putF("KeyCode: " +keycode, this, "keyPress");
    
}


    public: void keyRelease(int32_t keycode){
this->logUtil->putF("KeyCode: " +keycode, this, "keyRelease");
    
}


    public: void mouseMove(int32_t x, int32_t y){
this->logUtil->putF("X: " +x +" Y: " +y, this, "mouseMove");
    
}


    public: void mousePress(int32_t buttons){
this->logUtil->putF("Buttons: " +buttons, this, "mousePress");
    
}


    public: void mouseRelease(int32_t buttons){
this->logUtil->putF("Buttons: " +buttons, this, "mouseRelease");
    
}


    public: BufferedImage* createScreenCapture(Rectangle* screenRect){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void delay(int32_t ms){
}


    public: int32_t getAutoDelay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: Color* getPixelColor(int32_t x, int32_t y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: bool isAutoWaitForIdle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void mouseWheel(int32_t wheelAmt){
}


    public: void setAutoDelay(int32_t ms){
}


    public: void setAutoWaitForIdle(bool isOn){
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "DirectXWindowsInputRobot";
    
}


    public: void waitForIdle(){
}


};

            

