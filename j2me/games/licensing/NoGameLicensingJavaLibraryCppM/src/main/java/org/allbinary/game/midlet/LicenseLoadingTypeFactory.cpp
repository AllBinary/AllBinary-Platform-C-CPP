
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LicenseLoadingType.h"

class LicenseLoadingTypeFactory
            : public Object
         {

    private: static LicenseLoadingTypeFactory instance() { return LicenseLoadingTypeFactory(); }

    public: static LicenseLoadingTypeFactory getIntance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseLoadingTypeFactory::instance();
    
}


    public: const LicenseLoadingType INITIAL_LOADING = LicenseLoadingType("Initial Loading");

    public: const LicenseLoadingType GAME_START = LicenseLoadingType("Game Start");

    public: const LicenseLoadingType LOGIN = LicenseLoadingType("Login");

    public: const LicenseLoadingType OTHER = LicenseLoadingType("Other/Usually The First Non Demo Level");

};

            

