
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
        



        #ifndef JAVAX_MICROEDITION_LCDUI_NULLIMAGE_H
        #define JAVAX_MICROEDITION_LCDUI_NULLIMAGE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Image;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullImage
            : public virtual Object
         {

    public: static std::vector<Image*> NULL_IMAGE_ARRAY;

    private: static Image* NULL_IMAGE_owner();
    public: static Image* NULL_IMAGE;


            
    public: NullImage();
        
};

            


        #endif //JAVAX_MICROEDITION_LCDUI_NULLIMAGE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVAX_MICROEDITION_LCDUI_NULLIMAGE_H_COMPLETE)
        #define JAVAX_MICROEDITION_LCDUI_NULLIMAGE_H_COMPLETE
        #if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

        #endif
    
