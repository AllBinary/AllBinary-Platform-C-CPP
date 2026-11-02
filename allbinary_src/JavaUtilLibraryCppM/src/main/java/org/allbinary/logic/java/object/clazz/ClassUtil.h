
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_CLASSUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_CLASSUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
class ConstructorUtil;
class InterfaceUtil;
class MethodUtil;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ClassUtil
            : public virtual Object
         {

    public: static std::string viewAll(Object* anyType, std::string lineBreak);
    public: static std::string viewAll(const std::string& anyType, std::string lineBreak) { return viewAll(JavaString::box(anyType), lineBreak); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static std::string viewAll(BoxValue anyType, std::string lineBreak) { return viewAll(JavaBoxes::toObject(anyType), lineBreak); }

    public: static std::string viewAll(Class* myClass, std::string lineBreak);

private: ClassUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_CLASSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_CLASSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_CLASSUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/java/anyType/ConstructorUtil.h>)
#include <org/allbinary/logic/java/anyType/ConstructorUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/anyType/InterfaceUtil.h>)
#include <org/allbinary/logic/java/anyType/InterfaceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/anyType/MethodUtil.h>)
#include <org/allbinary/logic/java/anyType/MethodUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
