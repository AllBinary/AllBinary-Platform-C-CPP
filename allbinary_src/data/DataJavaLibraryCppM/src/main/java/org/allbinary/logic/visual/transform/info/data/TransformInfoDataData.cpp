
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_DATA_TRANSFORMINFODATADATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_DATA_TRANSFORMINFODATADATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/data/TransformInfoDataData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TransformInfoDataData::instance_owner() -> TransformInfoDataData* { static std::unique_ptr<TransformInfoDataData> value(new TransformInfoDataData()); return value.get(); }
TransformInfoDataData* TransformInfoDataData::instance = TransformInfoDataData::instance_owner();

    auto TransformInfoDataData::getInstance() -> TransformInfoDataData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransformInfoDataData::instance;
    
}


TransformInfoDataData::TransformInfoDataData() : UNCRYPTED_EXTENSION(CommonDataFileStrings::getInstance()->UNCRYPTED_EXTENSION), ENCRYPTED_EXTENSION(CommonDataFileStrings::getInstance()->ENCRYPTED_EXTENSION){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_DATA_TRANSFORMINFODATADATA_CPP
