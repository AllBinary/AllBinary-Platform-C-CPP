
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImmutableBasicArrayList.h"
#include "BasicArrayList.h"
#include "BasicArrayListD.h"

class BasicArrayListUtil
            : public Object
         {
        

    private: static const instance: BasicArrayListUtil = new BasicArrayListUtil();

    public static BasicArrayListUtil getInstance();

    public static main(std::vector<string> args);

    public const NULL_ARRAY_OF_ARRAY: std::vector<std::vector<BasicArrayList>> = new Array(0).fill(null).map(() => new Array(0).fill(0))
                                                            ;

    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    private: const immutableInstance: BasicArrayList = new ImmutableBasicArrayList("Immutable", 0);

    public any getRandom(BasicArrayList list);

    public int32_t getRandomIndex(BasicArrayList list);

    public reverse(BasicArrayList list);

    public string log(BasicArrayList list);

    public BasicArrayList getImmutableInstance();

};

            


        #endif //ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H
