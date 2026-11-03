
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class NullUtil;
class JsMethod;
class JsConstructor;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryEventObject
            : public virtual Object
         {

    private: static AllBinaryEventObject* NULL_EVENT_owner();
    public: static AllBinaryEventObject* NULL_EVENT;

    private: Object* source;

public: AllBinaryEventObject(Object* anyType);

    public: Object* getSource();

    /*protected*/ public: void setSource(Object* source);
    /*protected*/ public: void setSource(const std::string& source) { return setSource(JavaString::box(source)); }
    /*protected*/ public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void setSource(BoxValue source) { return setSource(JavaBoxes::toObject(source)); }
    /*protected*/ public: template<typename BoxElement> void setSource(const std::vector<BoxElement>& source) { return setSource(JavaBoxes::toObject(source)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTOBJECT_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsConstructor.h>)
#include <jsinterop/annotations/JsConstructor.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif

        #endif
    
