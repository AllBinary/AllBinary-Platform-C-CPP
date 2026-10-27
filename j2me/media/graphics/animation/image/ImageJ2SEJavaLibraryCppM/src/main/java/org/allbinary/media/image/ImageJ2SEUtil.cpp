
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/Color.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageJ2SEUtil
            : public Object
         {

    private: static ImageJ2SEUtil* instance() { static std::unique_ptr<ImageJ2SEUtil> value(new ImageJ2SEUtil()); return value.get(); }

    public: static ImageJ2SEUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageJ2SEUtil::instance();
    
}


    public: Color* TRANSPARENT_COLOR = new Color(0, 0, 0, 0);

};

            

