
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_OSGI_FRAMEWORK_CONSTANTS_H
        #define ORG_OSGI_FRAMEWORK_CONSTANTS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
            // Interfaces do not have static fields, so create a C++ helper class.
            class ConstantsI {
        
    public: static inline const std::string BUNDLE_SYMBOLICNAME = StringUtil::getInstance()->EMPTY_STRING;
            };
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Constants
            : public virtual Object
         {

    public: static inline const std::string BUNDLE_SYMBOLICNAME = StringUtil::getInstance()->EMPTY_STRING;

};

            


        #endif //ORG_OSGI_FRAMEWORK_CONSTANTS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_OSGI_FRAMEWORK_CONSTANTS_H_COMPLETE)
        #define ORG_OSGI_FRAMEWORK_CONSTANTS_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
