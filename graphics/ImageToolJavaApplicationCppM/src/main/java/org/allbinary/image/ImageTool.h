
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGETOOL_H
        #define ORG_ALLBINARY_IMAGE_IMAGETOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ARunnable;
class ImageToolJFrame;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class EventQueue;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageTool
            : public virtual Object
         {

    public: static void main(std::vector<std::string> args);

    /*protected*/ public: LogUtil* logUtil;

public: ImageTool();

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGETOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_IMAGETOOL_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_IMAGETOOL_H_COMPLETE
        #if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<org/allbinary/image/gui/ImageToolJFrame.h>)
#include <org/allbinary/image/gui/ImageToolJFrame.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/image/EventQueue.h")
#include "org/allbinary/image/EventQueue.h"
#endif

        #endif
    
