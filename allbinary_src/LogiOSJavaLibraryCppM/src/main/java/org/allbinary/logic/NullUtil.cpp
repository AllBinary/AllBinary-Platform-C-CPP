
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_NULLUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_NULLUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/NullUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform

NullUtil::NullUtil() : NULL_OBJECT(new Object()), NULL_CLASS(this->NULL_OBJECT->getClass()), NULL_OBJECT_ARRAY({}), NULL_CHAR_ARRAY(std::vector<char>(0)), NULL_BYTE_ARRAY(std::vector<int8_t>(0)), NULL_SHORT_ARRAY_ARRAY(std::vector<std::vector<int16_t>>(0, std::vector<int16_t>(0))), NULL_INT_ARRAY(std::vector<int32_t>(0)), NULL_INT_ARRAY_ARRAY(std::vector<std::vector<int32_t>>(0, std::vector<int32_t>(0))), NULL_INT_ARRAY_ARRAY_ARRAY(std::vector<std::vector<std::vector<int32_t>>>(0, std::vector<std::vector<int32_t>>(0, std::vector<int32_t>(0)))), NULL_FLOAT_ARRAY(std::vector<float>(0)), EMPTY_VECTOR(new Vector<Object*>()), NULL_TABLE(new Hashtable<Object*, Object*>()) {
        }
        auto NullUtil::instance_owner() -> NullUtil* { static std::unique_ptr<NullUtil> value(new NullUtil()); return value.get(); }
NullUtil* NullUtil::instance = NullUtil::instance_owner();

    auto NullUtil::getInstance() -> NullUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_NULLUTIL_CPP
