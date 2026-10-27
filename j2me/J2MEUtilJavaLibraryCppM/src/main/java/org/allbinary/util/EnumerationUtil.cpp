
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
        



        #ifndef ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_CPP
        #define ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/util/EnumerationUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Enumeration.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayList.h"
//ArkTs does not have this.  So this is for the ArkTs build.

EnumerationUtil::EnumerationUtil() {
        }
        auto EnumerationUtil::instance_owner() -> EnumerationUtil* { static std::unique_ptr<EnumerationUtil> value(new EnumerationUtil()); return value.get(); }
EnumerationUtil* EnumerationUtil::instance = EnumerationUtil::instance_owner();

    auto EnumerationUtil::getInstance() -> EnumerationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EnumerationUtil::instance;
    
}


    auto EnumerationUtil::hasMoreElements(Enumeration<Object*>* enumeration) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return enumeration->hasMoreElements();;
    
}


    auto EnumerationUtil::nextElement(Enumeration<Object*>* enumeration) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return enumeration->nextElement();;
    
}


    auto EnumerationUtil::getAsArray(Enumeration<Object*>* enumeration) -> std::vector<Object*>{

    BasicArrayList* basicArrayList = new BasicArrayListD();;
    

        while(this->hasMoreElements(enumeration))
        {
basicArrayList->add(this->nextElement(enumeration));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicArrayList->toArray();;
    
}




        #endif //ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_CPP
