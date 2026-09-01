
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/help/HelpSet.h>

      
#include <org/allbinary/input/automation/AbstractInputRobot.h>

      
#include <org/allbinary/input/automation/PointFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputRobotInterface.h"
#include "Point.h"
#include "Rectangle.h"
#include "Color.h"

class NullInputRobot: public AbstractInputRobot, public InputRobotInterface {

    public: static const std::string LIBRARY_NAME = "null";

    public: static const std::string NAME = "NULL";

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: NullInputRobot(){
            super(
                            nullptr);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullInputRobot::NAME;
    
}


    public: HelpSet getHelpSet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Point getMousePoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointFactory::getInstance(0, 0);;
    
}


    public: void keyPress(Integer keycode){
this->logUtil.putF("KeyCode: " +keycode, this, "keyPress");
    
}


    public: void keyRelease(Integer keycode){
this->logUtil.putF("KeyCode: " +keycode, this, "keyRelease");
    
}


    public: void mouseMove(Integer x, Integer y){
this->logUtil.putF("X: " +x +" Y: " +y, this, "mouseMove");
    
}


    public: void mousePress(Integer buttons){
this->logUtil.putF("Buttons: " +buttons, this, "mousePress");
    
}


    public: void mouseRelease(Integer buttons){
this->logUtil.putF("Buttons: " +buttons, this, "mouseRelease");
    
}


    public: BufferedImage createScreenCapture(Rectangle screenRect){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: void delay(Integer ms){
}


    public: Integer getAutoDelay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: Color getPixelColor(Integer x, Integer y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: bool isAutoWaitForIdle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void mouseWheel(Integer wheelAmt){
}


    public: void setAutoDelay(Integer ms){
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

            

