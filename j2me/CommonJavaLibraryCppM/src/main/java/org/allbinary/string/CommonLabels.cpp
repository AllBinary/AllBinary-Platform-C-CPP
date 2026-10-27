
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
        



        #ifndef ORG_ALLBINARY_STRING_COMMONLABELS_CPP
        #define ORG_ALLBINARY_STRING_COMMONLABELS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/string/CommonLabels.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CommonLabels::CommonLabels() : START(this->START_LABEL) {
        }
        auto CommonLabels::instance_owner() -> CommonLabels* { static std::unique_ptr<CommonLabels> value(new CommonLabels()); return value.get(); }
CommonLabels* CommonLabels::instance = CommonLabels::instance_owner();

    auto CommonLabels::getInstance() -> CommonLabels*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonLabels::instance;
    
}




        #endif //ORG_ALLBINARY_STRING_COMMONLABELS_CPP
