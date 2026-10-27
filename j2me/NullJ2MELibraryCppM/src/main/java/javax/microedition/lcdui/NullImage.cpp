
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef JAVAX_MICROEDITION_LCDUI_NULLIMAGE_CPP
        #define JAVAX_MICROEDITION_LCDUI_NULLIMAGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "javax/microedition/lcdui/NullImage.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/Image.h"


NullImage::NullImage() {
        }
        std::vector<Image*> NullImage::NULL_IMAGE_ARRAY = {};
auto NullImage::NULL_IMAGE_owner() -> Image* { static std::unique_ptr<Image> value(new Image()); return value.get(); }
Image* NullImage::NULL_IMAGE = NullImage::NULL_IMAGE_owner();



        #endif //JAVAX_MICROEDITION_LCDUI_NULLIMAGE_CPP
