
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
        



        #ifndef ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_H
        #define ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_H

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
class EnumerationUtil
            : public Object
         {

    private: static EnumerationUtil* instance() { static std::unique_ptr<EnumerationUtil> value(new EnumerationUtil()); return value.get(); }

    public: static EnumerationUtil* getInstance();

    public: bool hasMoreElements(Enumeration<Object*>* enumeration);

    public: Object* nextElement(Enumeration<Object*>* enumeration);

    public: std::vector<Object*> getAsArray(Enumeration<Object*>* enumeration);

};

            


        #endif //ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_H
