
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_CPP
        #define BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "bundle/input/automation/ServiceReferenceMap.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Collection.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ServiceReferenceMap::ServiceReferenceMap(ServiceReference* serviceReference){
this->serviceReference= serviceReference;
    
}


    auto ServiceReferenceMap::size() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    auto ServiceReferenceMap::isEmpty() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto ServiceReferenceMap::containsKey(Object* key) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto ServiceReferenceMap::containsValue(Object* value) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto ServiceReferenceMap::get(Object* key) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serviceReference->getProperty(key);;
    
}


    auto ServiceReferenceMap::put(Object* key, Object* value) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto ServiceReferenceMap::remove(Object* key) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto ServiceReferenceMap::putAll(Map* m) -> void{
}


    auto ServiceReferenceMap::clear() -> void{
}


    auto ServiceReferenceMap::keySet() -> Set*{

    std::vector<std::string> keyStringArray = this->serviceReference->getPropertyKeys();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto ServiceReferenceMap::values() -> Collection<Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto ServiceReferenceMap::entrySet() -> Set*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto ServiceReferenceMap::toString(Map* map) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //BUNDLE_INPUT_AUTOMATION_SERVICEREFERENCEMAP_CPP
