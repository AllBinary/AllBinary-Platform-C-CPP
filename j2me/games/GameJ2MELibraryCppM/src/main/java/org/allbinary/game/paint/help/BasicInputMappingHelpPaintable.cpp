
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

        
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/mapping/GameInputMapping.h>

      
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/help/HelpPaintable.h"

class BasicInputMappingHelpPaintable: public HelpPaintable {

    private: std::vector<GameInputMapping*> gameInputMappingArray;

    private: GameKey* NONE = GameKeyFactory::getInstance()->NONE;

protected: BasicInputMappingHelpPaintable(std::vector<GameInputMapping*> gameInputMappingArray, BasicColor* basicColor) : HelpPaintable("Help Screen", BasicColorFactory::getInstance()->BLACK, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->gameInputMappingArray= gameInputMappingArray;
    
this->update(this->NONE, this->NONE);
    
}


    public: void update(GameKey* selectedGameKey, Input* selectedInput){

    PersistentInputMapping* gameKeyMapping = PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance();;
    

    std::string EQUAL = " = ";;
    

    StringMaker* stringMaker = new StringMaker();;
    

    int32_t size = this->gameInputMappingArray.size();;
    

    std::vector<std::string> keyInfo = std::vector<std::string>(size);;
    

    GameInputMapping* gameInputMapping;;
    

    GameKey* gameKey;;
    

    BasicArrayList* list;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameInputMapping= this->gameInputMappingArray[index];
    
gameKey= gameInputMapping->getGameKey();
    
list= gameKeyMapping->getInputMapping()->getMappedInput(gameKey);
    
stringMaker->delete(0, stringMaker->length());
    
keyInfo[index]= stringMaker->append(gameInputMapping->getName())->append(EQUAL)->append(this->get(list))->toString();
    
}

super.setInputInfoP(keyInfo);
    
}


    private: std::string get(BasicArrayList* keyList){

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string AND = "and ";;
    

    Input* key;;
    

    int32_t size = keyList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
key= dynamic_cast<Input*>(keyList->objectArray[index]);
    
stringBuffer->append(key->getName());
    

                        if(index +1 < keyList->size())
                        
                                    {
                                    
                        if(keyList->size() == 2)
                        
                                    {
                                    stringBuffer->append(commonSeps->SPACE)->append(AND);
    

                                    }
                                
                        else {
                            
                        if(index +2 == keyList->size())
                        
                                    {
                                    stringBuffer->append(commonSeps->COMMA_SEP);
    
stringBuffer->append(AND);
    

                                    }
                                
                        else {
                            stringBuffer->append(commonSeps->COMMA_SEP);
    

                        }
                            

                        }
                            

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

