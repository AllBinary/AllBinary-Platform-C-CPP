
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
        



        #ifndef ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCE_H
        #define ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class NullUtil;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullServiceReference
            : public virtual Object
         {


            
    public: NullServiceReference();
        
    public: Object* getProperty(std::string key);

    public: std::vector<std::string> getPropertyKeys();

    public: int32_t compareTo(Object* o);
    public: int32_t compareTo(const std::string& o) { return compareTo(JavaString::box(o)); }

};

            


        #endif //ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCE_H_COMPLETE)
        #define ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
