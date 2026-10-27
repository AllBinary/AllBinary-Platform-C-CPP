
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageStrings
            : public Object
         {

    private: static ImageStrings* instance() { static std::unique_ptr<ImageStrings> value(new ImageStrings()); return value.get(); }

    public: static ImageStrings* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageStrings::instance();
    
}


    public: const std::string PNG = "PNG";

    public: const std::string PNG_EXTENSION = ".png";

};

            

