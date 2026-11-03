
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TransformInfoObjectConfigData::instance_owner() -> TransformInfoObjectConfigData* { static std::unique_ptr<TransformInfoObjectConfigData> value(new TransformInfoObjectConfigData()); return value.get(); }
TransformInfoObjectConfigData* TransformInfoObjectConfigData::instance = TransformInfoObjectConfigData::instance_owner();

    auto TransformInfoObjectConfigData::getInstance() -> TransformInfoObjectConfigData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransformInfoObjectConfigData::instance;
    
}


TransformInfoObjectConfigData::TransformInfoObjectConfigData() : UNCRYPTED_EXTENSION(CommonDataFileStrings::getInstance()->UNCRYPTED_EXTENSION), ENCRYPTED_EXTENSION(CommonDataFileStrings::getInstance()->ENCRYPTED_EXTENSION){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGDATA_CPP
