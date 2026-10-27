
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
        



        #ifndef ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_CPP
        #define ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/ScaleProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ScaleProperties::ScaleProperties() {
        }
        auto ScaleProperties::instance_owner() -> ScaleProperties* { static std::unique_ptr<ScaleProperties> value(new ScaleProperties()); return value.get(); }
ScaleProperties* ScaleProperties::instance = ScaleProperties::instance_owner();

    auto ScaleProperties::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(CommonLabels::getInstance()->COLON_SEP)->appendboolean(this->shouldScale)->append("scaleX: ")->appendfloat(this->scaleX)->append("scaleY: ")->appendfloat(this->scaleY)->append("scaleWidth: ")->appendint(this->scaleWidth)->append("scaleHeight: ")->appendint(this->scaleHeight)->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_CPP
