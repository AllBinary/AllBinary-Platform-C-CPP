
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_VIEWOBJECT_TRANSFORMINFOOBJECTDATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_VIEWOBJECT_TRANSFORMINFOOBJECTDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/viewObject/TransformInfoObjectData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TransformInfoObjectData::instance_owner() -> TransformInfoObjectData* { static std::unique_ptr<TransformInfoObjectData> value(new TransformInfoObjectData()); return value.get(); }
TransformInfoObjectData* TransformInfoObjectData::instance = TransformInfoObjectData::instance_owner();

    auto TransformInfoObjectData::getInstance() -> TransformInfoObjectData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransformInfoObjectData::instance;
    
}


TransformInfoObjectData::TransformInfoObjectData(){
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_VIEWOBJECT_TRANSFORMINFOOBJECTDATA_CPP
