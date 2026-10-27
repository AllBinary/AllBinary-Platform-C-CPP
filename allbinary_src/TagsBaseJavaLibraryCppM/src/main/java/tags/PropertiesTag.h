
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
        



        #ifndef TAGS_PROPERTIESTAG_H
        #define TAGS_PROPERTIESTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/util/HashMap.h>
class StdUtil;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/CommandTag.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PropertiesTag: public CommandTag {

    /*protected*/ public: LogUtil* logUtil;

    private: HashMap<Object*, Object*>* propertiesHashMap;

public: PropertiesTag();

    /*protected*/ public: HashMap<Object*, Object*>* getPropertiesHashMap();

    public: int32_t doEndTag();

};

            


        #endif //TAGS_PROPERTIESTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGS_PROPERTIESTAG_H_COMPLETE)
        #define TAGS_PROPERTIESTAG_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("tags/CommandTag.h")
#include "tags/CommandTag.h"
#endif

        #endif
    
