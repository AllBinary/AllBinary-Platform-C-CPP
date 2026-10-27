
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/robot/Rectangle.h"
#include "org/allbinary/input/automation/robot/Color.h"
#include "org/allbinary/input/automation/robot/Point.h"

class InputRobotInterface {

    public: virtual std::string getName() = 0;

    public: virtual HelpSet* getHelpSet() = 0;

    public: virtual BufferedImage* createScreenCapture(Rectangle* screenRect) = 0;

    public: virtual void delay(int32_t ms) = 0;

    public: virtual int32_t getAutoDelay() = 0;

    public: virtual Color* getPixelColor(int32_t x, int32_t y) = 0;

    public: virtual bool isAutoWaitForIdle() = 0;

    public: virtual void keyPress(int32_t keycode) = 0;

    public: virtual void keyRelease(int32_t keycode) = 0;

    public: virtual Point* getMousePoint() = 0;

    public: virtual void mouseMove(int32_t x, int32_t y) = 0;

    public: virtual void mousePress(int32_t buttons) = 0;

    public: virtual void mouseRelease(int32_t buttons) = 0;

    public: virtual void mouseWheel(int32_t wheelAmt) = 0;

    public: virtual void setAutoDelay(int32_t ms) = 0;

    public: virtual void setAutoWaitForIdle(bool isOn) = 0;

    public: virtual std::string toString() = 0;

    public: virtual void waitForIdle() = 0;

    public: virtual void mouseMove(Point* point) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void mouseMoveToTarget(Rectangle* rectangle) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void mouseMoveToTarget(Rectangle* rectangle, int32_t x, int32_t y) = 0;

};

            

