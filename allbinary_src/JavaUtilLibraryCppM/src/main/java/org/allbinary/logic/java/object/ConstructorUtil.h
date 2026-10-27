
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CONSTRUCTORUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CONSTRUCTORUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <java/lang/reflect/Constructor.h>
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ConstructorUtil
            : public virtual Object
         {

    public: static std::string viewAll(Class* myClass, std::string lineBreak);

    public: static std::string view(Constructor* constructor, std::string lineBreak);

private: ConstructorUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CONSTRUCTORUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CONSTRUCTORUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CONSTRUCTORUTIL_H_COMPLETE
        #if __has_include(<java/lang/reflect/Constructor.h>)
#include <java/lang/reflect/Constructor.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
