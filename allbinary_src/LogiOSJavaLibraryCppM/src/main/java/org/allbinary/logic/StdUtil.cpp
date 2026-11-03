
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STDUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_STDUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/StdUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/ABHashMap.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/ABStack.h>

      
#include <org/allbinary/util/ABVector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform

StdUtil::StdUtil() : EMPTY_VECTOR(this->createVector()), NULL_TABLE(this->createHashtable()), NULL_MAP(this->createHashMap()) {
        }
        auto StdUtil::instance_owner() -> StdUtil* { static std::unique_ptr<StdUtil> value(new StdUtil()); return value.get(); }
StdUtil* StdUtil::instance = StdUtil::instance_owner();

    auto StdUtil::getInstance() -> StdUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::instance;
    
}


    auto StdUtil::createStack() -> ABStack<Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ABStack<Object*>();
    
}


    auto StdUtil::createVector() -> ABVector<Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ABVector<Object*>();
    
}


    auto StdUtil::createHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ABHashtable<Object*, Object*>();
    
}


    auto StdUtil::createHashMap() -> ABHashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ABHashMap<Object*, Object*>();
    
}




        #endif //ORG_ALLBINARY_LOGIC_STDUTIL_CPP
