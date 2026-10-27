
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_H
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_H

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
        
class AllBinaryEventObject
            : public Object
         {

    public: static AllBinaryEventObject* NULL_EVENT() { static std::unique_ptr<AllBinaryEventObject> value(new AllBinaryEventObject(NullUtil::getInstance()->NULL_OBJECT)); return value.get(); }

    private: Object* source;

public: AllBinaryEventObject(Object* anyType);

    public: Object* getSource();

    protected: void setSource(Object* source);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_H
