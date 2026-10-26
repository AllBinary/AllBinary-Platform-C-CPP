
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_NULLINPUTROBOT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_NULLINPUTROBOT_H

            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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

public: NullInputRobot();

    public: std::string getName();

    public: HelpSet getHelpSet();

    public: Point getMousePoint();

    public: void keyPress(Integer keycode);

    public: void keyRelease(Integer keycode);

    public: void mouseMove(Integer x, Integer y);

    public: void mousePress(Integer buttons);

    public: void mouseRelease(Integer buttons);

    public: BufferedImage createScreenCapture(Rectangle screenRect);

    public: void delay(Integer ms);

    public: Integer getAutoDelay();

    public: Color getPixelColor(Integer x, Integer y);

    public: bool isAutoWaitForIdle();

    public: void mouseWheel(Integer wheelAmt);

    public: void setAutoDelay(Integer ms);

    public: void setAutoWaitForIdle(bool isOn);

    public: std::string toString();

    public: void waitForIdle();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_NULLINPUTROBOT_H
