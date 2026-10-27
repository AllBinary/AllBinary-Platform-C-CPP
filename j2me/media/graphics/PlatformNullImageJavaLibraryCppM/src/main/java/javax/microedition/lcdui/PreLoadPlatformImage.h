
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/PlatformImage.h"
//PlatformNullImageJavaLibrary
class PreLoadPlatformImage: public PlatformImage {

    private: static PreLoadPlatformImage* instance() { static std::unique_ptr<PreLoadPlatformImage> value(new PreLoadPlatformImage()); return value.get(); }

    public: static PreLoadPlatformImage* getInstance();

};

            


        #endif //JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_H
