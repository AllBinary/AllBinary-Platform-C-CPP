
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

class NullInputRobot: public AbstractInputRobot: public InputRobotInterface {
        

    public static const LIBRARY_NAME: string = "null";

    public static const NAME: string = "NULL";

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (){
            super(
                            nullptr);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullInputRobot.NAME;
    
}


    public HelpSet getHelpSet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Point getMousePoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointFactory.getInstance(0, 0);;
    
}


    public keyPress(Integer keycode){
this.logUtil!.putF("KeyCode: " +keycode, this, "keyPress");
    
}


    public keyRelease(Integer keycode){
this.logUtil!.putF("KeyCode: " +keycode, this, "keyRelease");
    
}


    public mouseMove(Integer x, Integer y){
this.logUtil!.putF("X: " +x +" Y: " +y, this, "mouseMove");
    
}


    public mousePress(Integer buttons){
this.logUtil!.putF("Buttons: " +buttons, this, "mousePress");
    
}


    public mouseRelease(Integer buttons){
this.logUtil!.putF("Buttons: " +buttons, this, "mouseRelease");
    
}


    public BufferedImage createScreenCapture(Rectangle screenRect){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public delay(Integer ms){
}


    public Integer getAutoDelay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public Color getPixelColor(Integer x, Integer y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public bool isAutoWaitForIdle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public mouseWheel(Integer wheelAmt){
}


    public setAutoDelay(Integer ms){
}


    public setAutoWaitForIdle(bool isOn){
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "DirectXWindowsInputRobot";
    
}


    public waitForIdle(){
}


};

            

