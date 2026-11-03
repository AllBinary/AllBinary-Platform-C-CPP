
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VECTORUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_VECTORUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/VectorUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Vector.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

VectorUtil::VectorUtil() {
        }
        auto VectorUtil::instance_owner() -> VectorUtil* { static std::unique_ptr<VectorUtil> value(new VectorUtil()); return value.get(); }
VectorUtil* VectorUtil::instance = VectorUtil::instance_owner();

    auto VectorUtil::getInstance() -> VectorUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return VectorUtil::instance;
    
}


    auto VectorUtil::getSize(Object* anyType) -> int32_t{

    Vector<Object*>* vector = dynamic_cast<Vector<Object*>*>(anyType);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector->size();;
    
}


    auto VectorUtil::elementAt(Object* anyType, int32_t index) -> Object*{

    Vector<Object*>* vector = dynamic_cast<Vector<Object*>*>(anyType);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector->elementAt(index);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VECTORUTIL_CPP
