
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
#include <java/util/Enumeration.h>
class JsMethod;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicArrayListD;
class BasicArrayList;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ArkTs does not have this.  So this is for the ArkTs build.
class EnumerationUtil
            : public virtual Object
         {

    private: static EnumerationUtil* instance_owner();
    private: static EnumerationUtil* instance;

    public: static EnumerationUtil* getInstance();


            
    public: EnumerationUtil();
        
    public: bool hasMoreElements(Enumeration<Object*>* enumeration);

    public: Object* nextElement(Enumeration<Object*>* enumeration);

    public: std::vector<Object*> getAsArray(Enumeration<Object*>* enumeration);

};

            


        #endif //ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include("org/allbinary/util/BasicArrayListD.h")
#include "org/allbinary/util/BasicArrayListD.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

        #endif
    
