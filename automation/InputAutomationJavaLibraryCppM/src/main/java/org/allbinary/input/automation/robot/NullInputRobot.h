
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

public constructor ();

    public string getName();

    public HelpSet getHelpSet();

    public Point getMousePoint();

    public keyPress(Integer keycode);

    public keyRelease(Integer keycode);

    public mouseMove(Integer x, Integer y);

    public mousePress(Integer buttons);

    public mouseRelease(Integer buttons);

    public BufferedImage createScreenCapture(Rectangle screenRect);

    public delay(Integer ms);

    public Integer getAutoDelay();

    public Color getPixelColor(Integer x, Integer y);

    public bool isAutoWaitForIdle();

    public mouseWheel(Integer wheelAmt);

    public setAutoDelay(Integer ms);

    public setAutoWaitForIdle(bool isOn);

    public string toString();

    public waitForIdle();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_NULLINPUTROBOT_H
