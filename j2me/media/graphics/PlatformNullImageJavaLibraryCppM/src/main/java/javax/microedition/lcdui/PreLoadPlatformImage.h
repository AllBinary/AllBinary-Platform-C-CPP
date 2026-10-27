
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_H
        #define JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/PlatformImage.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //PlatformNullImageJavaLibrary
class PreLoadPlatformImage: public PlatformImage {

    private: static PreLoadPlatformImage* instance_owner();
    private: static PreLoadPlatformImage* instance;

    public: static PreLoadPlatformImage* getInstance();


            
    public: PreLoadPlatformImage();
        
};

            


        #endif //JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_H_COMPLETE)
        #define JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_H_COMPLETE
        #if __has_include("javax/microedition/lcdui/PlatformImage.h")
#include "javax/microedition/lcdui/PlatformImage.h"
#endif

        #endif
    
