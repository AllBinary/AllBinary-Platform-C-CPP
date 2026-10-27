
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/Image.h"

class NullImage
            : public Object
         {

    public: static inline const std::vector<Image*> NULL_IMAGE_ARRAY = {};

    public: static Image* NULL_IMAGE() { static std::unique_ptr<Image> value(new Image()); return value.get(); }

};

            


        #endif //JAVAX_MICROEDITION_LCDUI_NULLIMAGE_H
