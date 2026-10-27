
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PositionStrings
            : public Object
         {

    private: static PositionStrings* instance() { static std::unique_ptr<PositionStrings> value(new PositionStrings()); return value.get(); }

    public: static PositionStrings* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PositionStrings::instance();
    
}


    public: const std::string X = "x";

    public: const std::string Y = "y";

    public: const std::string X_LABEL = "x: ";

    public: const std::string Y_LABEL = "y: ";

    public: const std::string Z_LABEL = "z: ";

    public: const std::string DX_LABEL = "dx: ";

    public: const std::string DY_LABEL = "dy: ";

    public: const std::string DZ_LABEL = "dz: ";

};

            

