
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
            #include "../../../../java/lang/System.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/Random.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Do not use in client code for money related things.
class MyRandomFactory
            : public Object
         {

    private: static MyRandomFactory instance() { return MyRandomFactory(); }

    public: static MyRandomFactory getInstance();

    public: static void main(std::vector<std::string> args);

    private: const MathUtil mathUtil = MathUtil::getInstance();

    private: Random rand;

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
