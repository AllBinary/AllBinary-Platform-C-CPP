
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENSCAVANGERROBOT_CPP
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENSCAVANGERROBOT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/media/image/capture/ScreenScavangerRobot.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/Dimension.h>

      
#include <java/awt/Rectangle.h>

      
#include <java/awt/Toolkit.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ScreenScavangerRobot::ScreenScavangerRobot() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ScreenScavangerRobot::getScreenAsBufferedImages() -> std::vector<BufferedImage*>{
this->logUtil->putF(this->commonStrings->START, this, "getScreenAsBufferedImages");
    

    Dimension* dimScreenSize = Toolkit::getDefaultToolkit()->getScreenSize();;
    

    Rectangle* rectScreenSize = new Rectangle(dimScreenSize);;
    

    ABHashtable<Object*, Object*>* robotHashtable = InputRobotFactory::getInstance()->get();;
    

    std::vector<BufferedImage*> bufferedImageArray = std::vector<BufferedImage*>(1);;
    

    int32_t index = 0;;
    

    InputRobotInterface* inputRobotInterface = dynamic_cast<InputRobotInterface*>(robotHashtable->get("Java Robot"));;
    
bufferedImageArray[index]= inputRobotInterface->createScreenCapture(rectScreenSize);
    
this->logUtil->putF("Finish", this, "getScreenAsBufferedImages");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}




        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENSCAVANGERROBOT_CPP
