
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENSCAVANGERROBOT_H
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENSCAVANGERROBOT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class InputRobotFactory;
class InputRobotInterface;
class LogUtil;
class CommonStrings;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScreenScavangerRobot
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

public: ScreenScavangerRobot();

                //@Throws(Exception.constructor)
            
    public: std::vector<BufferedImage*> getScreenAsBufferedImages();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENSCAVANGERROBOT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENSCAVANGERROBOT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_SCREENSCAVANGERROBOT_H_COMPLETE
        #if __has_include(<java/awt/Dimension.h>)
#include <java/awt/Dimension.h>
#endif
#if __has_include(<java/awt/Rectangle.h>)
#include <java/awt/Rectangle.h>
#endif
#if __has_include(<java/awt/Toolkit.h>)
#include <java/awt/Toolkit.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotFactory.h>)
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotInterface.h>)
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
