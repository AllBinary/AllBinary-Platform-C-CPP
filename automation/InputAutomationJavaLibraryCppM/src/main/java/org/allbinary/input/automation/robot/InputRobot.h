
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
class HelpSet;
class PointHelper;
class LogUtil;
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/robot/InputRobotInterface.h"
class Robot;
class GraphicsDevice;
class MouseInfo;
class Point;
class Rectangle;
class Color;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputRobot
            : public virtual Object
        , public InputRobotInterface {

    public: static inline const std::string NAME = "Java Robot";

    /*protected*/ public: LogUtil* logUtil;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_INPUTROBOT_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<javax/help/HelpSet.h>)
#include <javax/help/HelpSet.h>
#endif
#if __has_include(<org/allbinary/input/automation/PointHelper.h>)
#include <org/allbinary/input/automation/PointHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/input/automation/robot/InputRobotInterface.h")
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/robot/Robot.h")
#include "org/allbinary/input/automation/robot/Robot.h"
#endif
#if __has_include("org/allbinary/input/automation/robot/GraphicsDevice.h")
#include "org/allbinary/input/automation/robot/GraphicsDevice.h"
#endif
#if __has_include("org/allbinary/input/automation/robot/MouseInfo.h")
#include "org/allbinary/input/automation/robot/MouseInfo.h"
#endif
#if __has_include("org/allbinary/input/automation/robot/Point.h")
#include "org/allbinary/input/automation/robot/Point.h"
#endif
#if __has_include("org/allbinary/input/automation/robot/Rectangle.h")
#include "org/allbinary/input/automation/robot/Rectangle.h"
#endif
#if __has_include("org/allbinary/input/automation/robot/Color.h")
#include "org/allbinary/input/automation/robot/Color.h"
#endif

        #endif
    
