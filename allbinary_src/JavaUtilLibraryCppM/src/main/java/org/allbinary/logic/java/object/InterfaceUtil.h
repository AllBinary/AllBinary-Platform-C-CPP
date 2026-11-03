
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InterfaceUtil
            : public virtual Object
         {

    public: static std::string viewAll(Class* myClass, std::string lineBreak);

    public: static Class* getClass()(std::string interfaceName, std::vector<Class*> interfaces);

    public: static bool isImplemented(Class* clazz, Object* anyType);
    public: static bool isImplemented(Class* clazz, const std::string& anyType) { return isImplemented(clazz, JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static bool isImplemented(Class* clazz, BoxValue anyType) { return isImplemented(clazz, JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> static bool isImplemented(Class* clazz, const std::vector<BoxElement>& anyType) { return isImplemented(clazz, JavaBoxes::toObject(anyType)); }

    public: static bool isImplemented(std::string className, Object* anyType);
    public: static bool isImplemented(std::string className, const std::string& anyType) { return isImplemented(className, JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static bool isImplemented(std::string className, BoxValue anyType) { return isImplemented(className, JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> static bool isImplemented(std::string className, const std::vector<BoxElement>& anyType) { return isImplemented(className, JavaBoxes::toObject(anyType)); }

    public: static std::string isImplementedView(Class* clazz, Object* anyType);
    public: static std::string isImplementedView(Class* clazz, const std::string& anyType) { return isImplementedView(clazz, JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static std::string isImplementedView(Class* clazz, BoxValue anyType) { return isImplementedView(clazz, JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> static std::string isImplementedView(Class* clazz, const std::vector<BoxElement>& anyType) { return isImplementedView(clazz, JavaBoxes::toObject(anyType)); }

private: InterfaceUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
