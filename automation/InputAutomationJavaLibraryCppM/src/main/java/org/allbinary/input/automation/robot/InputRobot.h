
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

    public: static const std::string NAME = "Java Robot";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Robot robot;

public: InputRobot(GraphicsDevice graphicsDevice);

    public: std::string getName();

    public: HelpSet getHelpSet();

    public: Point getMousePoint();

                //@Throws(Exception.constructor)
            
    public: void mouseMoveToTarget(Rectangle rectangle, Integer x, Integer y);

    public: void mouseMove(Point point);

    public: void mouseMove(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void mouseMoveToTarget(Rectangle rectangle);

    public: BufferedImage createScreenCapture(Rectangle screenRect);

    public: void delay(Integer ms);

    public: Integer getAutoDelay();

    public: Color getPixelColor(Integer x, Integer y);

    public: bool isAutoWaitForIdle();

    public: void keyPress(Integer keycode);

    public: void keyRelease(Integer keycode);

    public: void mouseMove(Integer x, Integer y);

    public: void mousePress(Integer buttons);

    public: void mouseRelease(Integer buttons);

    public: void mouseWheel(Integer wheelAmt);

    public: void setAutoDelay(Integer ms);

    public: void setAutoWaitForIdle(bool isOn);

    public: std::string toString();

    public: void waitForIdle();

    public: void on();

    public: void off();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_H
