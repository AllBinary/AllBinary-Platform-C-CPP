
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
        



        #ifndef ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H
        #define ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class ForcedLogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/util/BasicArrayListS.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImmutableBasicArrayList: public BasicArrayListS {

    private: std::string name;

public: ImmutableBasicArrayList(std::string name, int32_t size);

    public: bool add(Object* e);
    public: bool add(const std::string& e) { return add(JavaString::box(e)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool add(BoxValue e) { return add(JavaBoxes::toObject(e)); }

    public: void addAt(int32_t index, Object* element);
    public: void addAt(int32_t index, const std::string& element) { return addAt(index, JavaString::box(element)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void addAt(int32_t index, BoxValue element) { return addAt(index, JavaBoxes::toObject(element)); }

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include("org/allbinary/util/BasicArrayListS.h")
#include "org/allbinary/util/BasicArrayListS.h"
#endif

        #endif
    
