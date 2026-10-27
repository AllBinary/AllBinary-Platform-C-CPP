
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TransformInfoData::instance_owner() -> TransformInfoData* { static std::unique_ptr<TransformInfoData> value(new TransformInfoData()); return value.get(); }
TransformInfoData* TransformInfoData::instance = TransformInfoData::instance_owner();

    auto TransformInfoData::getInstance() -> TransformInfoData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoData::instance;
    
}


TransformInfoData::TransformInfoData() : OWNER(JavaString::valueOf("OWNER_") +JavaString::valueOf(this->NAME)), PARTIAL(JavaString::valueOf("PARTIAL_") +JavaString::valueOf(this->NAME)){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODATA_CPP
