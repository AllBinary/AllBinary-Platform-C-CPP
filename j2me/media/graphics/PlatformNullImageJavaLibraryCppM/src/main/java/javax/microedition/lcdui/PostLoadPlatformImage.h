
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
        



        #ifndef JAVAX_MICROEDITION_LCDUI_POSTLOADPLATFORMIMAGE_H
        #define JAVAX_MICROEDITION_LCDUI_POSTLOADPLATFORMIMAGE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/PlatformImage.h"
//PlatformNullImageJavaLibrary
class PostLoadPlatformImage: public PlatformImage {

    private: static PostLoadPlatformImage* instance() { static std::unique_ptr<PostLoadPlatformImage> value(new PostLoadPlatformImage()); return value.get(); }

    public: static PostLoadPlatformImage* getInstance();

};

            


        #endif //JAVAX_MICROEDITION_LCDUI_POSTLOADPLATFORMIMAGE_H
