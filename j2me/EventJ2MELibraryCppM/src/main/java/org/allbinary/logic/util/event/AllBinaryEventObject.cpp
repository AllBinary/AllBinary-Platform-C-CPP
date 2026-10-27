
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AllBinaryEventObject::NULL_EVENT_owner() -> AllBinaryEventObject* { static std::unique_ptr<AllBinaryEventObject> value(new AllBinaryEventObject(NullUtil::getInstance()->NULL_OBJECT)); return value.get(); }
AllBinaryEventObject* AllBinaryEventObject::NULL_EVENT = AllBinaryEventObject::NULL_EVENT_owner();

AllBinaryEventObject::AllBinaryEventObject(Object* anyType){
this->source= anyType;
    
}


    auto AllBinaryEventObject::getSource() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->source;
    
}


    auto AllBinaryEventObject::setSource(Object* source) -> void{
this->source= source;
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_CPP
