
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

    public: static BasicArrayListUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::instance();
    
}


    public: static void main(std::vector<std::string> args){

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
    
System.out.println(list->toString());
    
}


    public: const std::vector<std::vector<BasicArrayList*>> NULL_ARRAY_OF_ARRAY = std::vector<std::vector<BasicArrayList*>>(0, std::vector<BasicArrayList*>(0));

    private: MyRandomFactory* myRandomFactory = MyRandomFactory::getInstance();

    private: BasicArrayList* immutableInstance = new ImmutableBasicArrayList("Immutable", 0);

    public: Object* getRandom(BasicArrayList* list){

    int32_t i_random = this->getRandomIndex(list);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list->objectArray[i_random];
    
}


    public: int32_t getRandomIndex(BasicArrayList* list){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->myRandomFactory->getAbsoluteNextInt(list->size());;
    
}


    public: void reverse(BasicArrayList* list){

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


    public: std::string log(BasicArrayList* list){

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
                        return stringBuffer->toString();;
    
}


    public: BasicArrayList* getImmutableInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->immutableInstance;
    
}


};

            

