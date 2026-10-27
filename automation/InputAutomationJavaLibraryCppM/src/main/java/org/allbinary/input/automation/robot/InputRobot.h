
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

public: InputRobot(GraphicsDevice* graphicsDevice);

    public: std::string getName();

    public: HelpSet* getHelpSet();

    public: Point* getMousePoint();

                //@Throws(Exception.constructor)
            
    public: void mouseMoveToTarget(Rectangle* rectangle, int32_t x, int32_t y);

    public: void mouseMove(Point* point);

    public: void mouseMove(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void mouseMoveToTarget(Rectangle* rectangle);

    public: BufferedImage* createScreenCapture(Rectangle* screenRect);

    public: void delay(int32_t ms);

    public: int32_t getAutoDelay();

    public: Color* getPixelColor(int32_t x, int32_t y);

    public: bool isAutoWaitForIdle();

    public: void keyPress(int32_t keycode);

    public: void keyRelease(int32_t keycode);

    public: void mouseMove(int32_t x, int32_t y);

    public: void mousePress(int32_t buttons);

    public: void mouseRelease(int32_t buttons);

    public: void mouseWheel(int32_t wheelAmt);

    public: void setAutoDelay(int32_t ms);

    public: void setAutoWaitForIdle(bool isOn);

    public: std::string toString();

    public: void waitForIdle();

    public: void on();

    public: void off();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_H
