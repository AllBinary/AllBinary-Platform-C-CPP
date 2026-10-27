
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/util/ImmutableBasicArrayList.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

class BasicArrayListUtil
            : public Object
         {

    private: static BasicArrayListUtil* instance() { static std::unique_ptr<BasicArrayListUtil> value(new BasicArrayListUtil()); return value.get(); }

    public: static BasicArrayListUtil* getInstance();

    public: static void main(std::vector<std::string> args);

    public: const std::vector<std::vector<BasicArrayList*>> NULL_ARRAY_OF_ARRAY = std::vector<std::vector<BasicArrayList*>>(0, std::vector<BasicArrayList*>(0));

    private: MyRandomFactory* myRandomFactory = MyRandomFactory::getInstance();

    private: BasicArrayList* immutableInstance = new ImmutableBasicArrayList("Immutable", 0);

    public: Object* getRandom(BasicArrayList* list);

    public: int32_t getRandomIndex(BasicArrayList* list);

    public: void reverse(BasicArrayList* list);

    public: std::string log(BasicArrayList* list);

    public: BasicArrayList* getImmutableInstance();

};

            


        #endif //ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_H
