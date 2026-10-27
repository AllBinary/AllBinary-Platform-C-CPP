
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
        



        #ifndef ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_H
        #define ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Random.h>
class JsType;
class JsMethod;
class JsConstructor;
class MathUtil;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //Do not use in client code for money related things.
class MyRandomFactory
            : public virtual Object
         {

    private: static MyRandomFactory* instance_owner();
    private: static MyRandomFactory* instance;

    public: static MyRandomFactory* getInstance();

    public: static void main(std::vector<std::string> args);

    private: MathUtil* mathUtil;

    private: Random* rand;

private: MyRandomFactory();

    public: void setSeed(int64_t seed);

    public: int32_t getNextInt(int32_t range);

    public: int32_t getAbsoluteNextInt(int32_t range);

    public: int32_t getAbsoluteNextIntAllowZero(int32_t range);

    public: void shuffle(std::vector<int32_t> intArray);

    public: void shuffleTotal(std::vector<int32_t> intArray, int32_t shuffleTotal);

    public: void shuffle2(std::vector<int32_t> intArray, std::vector<int32_t> intArray2);

    public: void shuffle2Total(std::vector<int32_t> intArray, std::vector<int32_t> intArray2, int32_t shuffleTotal);

};

            


        #endif //ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_H_COMPLETE
        #if __has_include(<java/util/Random.h>)
#include <java/util/Random.h>
#endif
#if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsConstructor.h>)
#include <jsinterop/annotations/JsConstructor.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
