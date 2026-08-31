
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/help/HelpSet.h>

      
#include <org/allbinary/input/automation/PointHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputRobotInterface.h"
#include "Robot.h"
#include "GraphicsDevice.h"
#include "MouseInfo.h"
#include "Point.h"
#include "Rectangle.h"
#include "Color.h"

class InputRobot
            : public Object
        : public InputRobotInterface {
        

    public static const NAME: string = "Java Robot";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: robot: Robot;

public constructor (GraphicsDevice graphicsDevice);

    public string getName();

    public HelpSet getHelpSet();

    public Point getMousePoint();

                //@Throws(Exception.constructor)
            
    public mouseMoveToTarget(Rectangle rectangle, Integer x, Integer y);

    public mouseMove(Point point);

    public mouseMove(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public mouseMoveToTarget(Rectangle rectangle);

    public BufferedImage createScreenCapture(Rectangle screenRect);

    public delay(Integer ms);

    public Integer getAutoDelay();

    public Color getPixelColor(Integer x, Integer y);

    public bool isAutoWaitForIdle();

    public keyPress(Integer keycode);

    public keyRelease(Integer keycode);

    public mouseMove(Integer x, Integer y);

    public mousePress(Integer buttons);

    public mouseRelease(Integer buttons);

    public mouseWheel(Integer wheelAmt);

    public setAutoDelay(Integer ms);

    public setAutoWaitForIdle(bool isOn);

    public string toString();

    public waitForIdle();

    public on();

    public off();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_H
