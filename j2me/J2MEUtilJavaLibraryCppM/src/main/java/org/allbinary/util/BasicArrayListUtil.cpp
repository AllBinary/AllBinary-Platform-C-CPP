
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
        



        #ifndef ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_CPP
        #define ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/util/BasicArrayListUtil.h"
        

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


BasicArrayListUtil::BasicArrayListUtil() : NULL_ARRAY_OF_ARRAY(std::vector<std::vector<BasicArrayList*>>(0, std::vector<BasicArrayList*>(0))), myRandomFactory(MyRandomFactory::getInstance()), immutableInstance(new ImmutableBasicArrayList("Immutable", 0)) {
        }
        auto BasicArrayListUtil::instance_owner() -> BasicArrayListUtil* { static std::unique_ptr<BasicArrayListUtil> value(new BasicArrayListUtil()); return value.get(); }
BasicArrayListUtil* BasicArrayListUtil::instance = BasicArrayListUtil::instance_owner();

    auto BasicArrayListUtil::getInstance() -> BasicArrayListUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicArrayListUtil::instance;
    
}


    auto BasicArrayListUtil::getRandom(BasicArrayList* list) -> Object*{

    int32_t i_random = this->getRandomIndex(list);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return list->objectArray[i_random];
    
}


    auto BasicArrayListUtil::getRandomIndex(BasicArrayList* list) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->myRandomFactory->getAbsoluteNextInt(list->size());;
    
}


    auto BasicArrayListUtil::reverse(BasicArrayList* list) -> void{

    int32_t lastMinusOneIndex = list->size() -2;;
    

    Object* temp;;
    

    int32_t size = lastMinusOneIndex /2;;
    

    int32_t secondSwapIndex= 0;;
    




                        for (
    int32_t index = 0;index <= size; index++)
        {
secondSwapIndex= lastMinusOneIndex -index;
    
temp= list->removeAt(index);
    
list->addAt(index, list->removeAt(secondSwapIndex));
    
list->addAt(secondSwapIndex +1, temp);
    
}

}


    auto BasicArrayListUtil::log(BasicArrayList* list) -> std::string{

    std::string S_LABEL = " s: ";;
    

    int32_t size = list->size();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(CommonLabels::getInstance()->TOTAL_LABEL);
    
stringBuffer->appendint(size);
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {

    BasicArrayList* usedList = dynamic_cast<BasicArrayList*>(list->objectArray[index]);;
    
stringBuffer->append(S_LABEL);
    
stringBuffer->appendint(usedList->size());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto BasicArrayListUtil::getImmutableInstance() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->immutableInstance;
    
}


    auto BasicArrayListUtil::main(std::vector<std::string> args) -> void{

    CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings::getInstance();;
    

    BasicArrayList* list = new BasicArrayListD();;
    
list->add(commonPhoneStrings->ONE);
    
list->add(commonPhoneStrings->TWO);
    
list->add(commonPhoneStrings->THREE);
    
list->add(commonPhoneStrings->FOUR);
    
list->add(commonPhoneStrings->FIVE);
    
list->add(commonPhoneStrings->SIX);
    
list->add(commonPhoneStrings->SEVEN);
    
list->add(commonPhoneStrings->EIGHT);
    
list->add(commonPhoneStrings->NINE);
    
BasicArrayListUtil::getInstance()->reverse(list);
    
System.out.println(JavaString::valueOf(list));
    
}




        #endif //ORG_ALLBINARY_UTIL_BASICARRAYLISTUTIL_CPP
