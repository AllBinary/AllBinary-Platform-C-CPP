
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
        



        #ifndef ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H
        #define ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
class JsType;
class MyRandomFactory;
class StringMaker;
class CommonLabels;
class CommonPhoneStrings;
class JsMethod;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImmutableBasicArrayList;
class BasicArrayList;
class BasicArrayListD;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicArrayListUtil
            : public virtual Object
         {

    private: static BasicArrayListUtil* instance_owner();
    private: static BasicArrayListUtil* instance;

    public: static BasicArrayListUtil* getInstance();

    public: static void main(std::vector<std::string> args);


            
    public: BasicArrayListUtil();
        
    public: std::vector<std::vector<BasicArrayList*>> NULL_ARRAY_OF_ARRAY;

    private: MyRandomFactory* myRandomFactory;

    private: BasicArrayList* immutableInstance;

    public: Object* getRandom(BasicArrayList* list);

    public: int32_t getRandomIndex(BasicArrayList* list);

    public: void reverse(BasicArrayList* list);

    public: std::string log(BasicArrayList* list);

    public: BasicArrayList* getImmutableInstance();

};

            


        #endif //ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif
#if __has_include("org/allbinary/util/ImmutableBasicArrayList.h")
#include "org/allbinary/util/ImmutableBasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListD.h")
#include "org/allbinary/util/BasicArrayListD.h"
#endif

        #endif
    
