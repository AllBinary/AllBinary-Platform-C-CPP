
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/mapping/InputMapping.h"

Object* InputToGameKeyMapping::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto InputToGameKeyMapping::getNullInstance() -> InputToGameKeyMapping*{

                        if(InputToGameKeyMapping::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    InputToGameKeyMapping::instance= new InputToGameKeyMapping();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<InputToGameKeyMapping*>(InputToGameKeyMapping::instance);
    
}


InputToGameKeyMapping::InputToGameKeyMapping() : gameKeyFactory(GameKeyFactory::getInstance()), mappedGameKeys(
                                                        {
                                                            this->gameKeyFactory->UP,this->gameKeyFactory->DOWN,this->gameKeyFactory->LEFT,this->gameKeyFactory->RIGHT
                                                        }), platformToGameKeyMapping(std::vector<GameKey*>(InputFactory::getInstance()->MAX)), negativePlatformToGameKeyMapping({}){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->clear();
    
}


    auto InputToGameKeyMapping::clear() -> void{




                        for (
    int32_t index = this->platformToGameKeyMapping.size() -1;index >= 0; index--)
        {
this->platformToGameKeyMapping[index]= this->gameKeyFactory->NONE;
    
}

}


    auto InputToGameKeyMapping::removeAll() -> void{
InputMapping::removeAll();
    
this->clear();
    
}


    auto InputToGameKeyMapping::addMapping(InputToGameKeyMapping* inputToGameKeyMapping) -> void{




                        for (
    int32_t index = inputToGameKeyMapping->getMaxMappable() -1;index >= 0; index--)
        {

    Input* input = inputToGameKeyMapping->getInstance(index);;
    

                        if(input != this->gameKeyFactory->NONE)
                        
                                    {
                                    this->addAll(input, inputToGameKeyMapping->getMappedInput(input));
    

                                    }
                                
}

}


    auto InputToGameKeyMapping::addAll(Input* input, BasicArrayList* list) -> void{




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

    Input* mappedToInput = dynamic_cast<Input*>(list->objectArray[index]);;
    
this->add(input, mappedToInput);
    
}

}


    auto InputToGameKeyMapping::add(Input* input, Input* mappedToInput) -> void{
InputMapping::add(input, mappedToInput);
    
this->set(input, mappedToInput);
    
}


    auto InputToGameKeyMapping::remove(Input* input, Input* mappedToInput) -> void{
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->START_LABEL)->append(StringUtil::getInstance()->toString(input))->append(" == ")->append(StringUtil::getInstance()->toString(mappedToInput))->toString(), this, "InputToGameKeyMapping::remove");
    
InputMapping::remove(input, mappedToInput);
    
this->set(input, this->gameKeyFactory->NONE);
    
}


    auto InputToGameKeyMapping::set(Input* input, Input* mappedToInput) -> void{

    int32_t id = mappedToInput->getId();;
    

                        if(id >= 0 && id < this->platformToGameKeyMapping.size())
                        
                                    {
                                    this->platformToGameKeyMapping[id]= dynamic_cast<GameKey*>(input);
    

                                    }
                                
}


    auto InputToGameKeyMapping::getMaxMappable() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->platformToGameKeyMapping.size();
    
}


    auto InputToGameKeyMapping::getReverseInstance(int32_t id) -> BasicArrayList*{

    BasicArrayList* list = new BasicArrayListD();;
    

    InputFactory* inputFactory = InputFactory::getInstance();;
    




                        for (
    int32_t index = 0;index < this->platformToGameKeyMapping.size(); index++)
        {

                        if(this->platformToGameKeyMapping[index]->getId() == id)
                        
                                    {
                                    
    Input* input = inputFactory->getInstanceById(index);;
    

                        if(input != 
                                    nullptr
                                )
                        
                                    {
                                    list->add(input);
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    auto InputToGameKeyMapping::initGameKey(Canvas* canvas, GameKey* gameKey) -> void{

    int32_t key = canvas->getKeyCode(gameKey->getId());;
    

                        if(key < 0 &&  -key < this->negativePlatformToGameKeyMapping.size())
                        
                                    {
                                    this->negativePlatformToGameKeyMapping[ -key]= gameKey;
    

                                    }
                                
                             else 
                        if(key > 0)
                        
                                    {
                                    
                        if(this->platformToGameKeyMapping[key] == this->gameKeyFactory->NONE)
                        
                                    {
                                    this->platformToGameKeyMapping[key]= gameKey;
    

                                    }
                                

                                    }
                                
                        else {
                            PreLogUtil::putOE((new StringMaker())->append(gameKey->toString())->append(CommonSeps::getInstance()->COLON_SEP)->appendint(key)->toString(), this, this->commonStrings->INIT, new Exception());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto InputToGameKeyMapping::getSmallestCanvasGameKeyCode(Canvas* canvas) -> int32_t{

    int32_t nextKey = 0;;
    

    int32_t smallestKey = 0;;
    




                        for (
    int32_t index = this->mappedGameKeys.size();--index >= 0; )
        {
nextKey= canvas->getKeyCode(this->mappedGameKeys[index]->getId());
    

                        if(nextKey < smallestKey)
                        
                                    {
                                    smallestKey= nextKey;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return smallestKey;
    
}


    auto InputToGameKeyMapping::init(Canvas* canvas) -> void{

        try {
            
    std::vector<GameKey*> negativePlatformToGameKeyMapping = {};;
    

    int32_t smallestKey = this->getSmallestCanvasGameKeyCode(canvas);;
    

                        if(smallestKey < 0)
                        
                                    {
                                    smallestKey--;
    

                        if(smallestKey <  -256)
                        
                                    {
                                    smallestKey=  -256;
    

                                    }
                                
negativePlatformToGameKeyMapping= std::vector<GameKey*>( -smallestKey);
    




                        for (
    int32_t index = negativePlatformToGameKeyMapping.size();--index >= 0; )
        {
negativePlatformToGameKeyMapping[index]= this->gameKeyFactory->NONE;
    
}

this->negativePlatformToGameKeyMapping= negativePlatformToGameKeyMapping;
    

                                    }
                                




                        for (
    int32_t index = this->mappedGameKeys.size();--index >= 0; )
        {
this->initGameKey(canvas, this->mappedGameKeys[index]);
    
}


                //: 
} catch(Throwable& t) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, &t);
    
}

}


    auto InputToGameKeyMapping::getInstanceForCanvas(Canvas* canvas, int32_t id) -> GameKey*{

                        if(id >= 0 && id < this->platformToGameKeyMapping.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->platformToGameKeyMapping[id];
    

                                    }
                                
                             else 
                        if(id < 0 &&  -id < this->negativePlatformToGameKeyMapping.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->negativePlatformToGameKeyMapping[ -id];
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameKeyFactory->NONE;
    

                        }
                            
}


    auto InputToGameKeyMapping::getInstance(int32_t id) -> GameKey*{

                        if(id >= 0 && id < this->platformToGameKeyMapping.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->platformToGameKeyMapping[id];
    

                                    }
                                
                             else 
                        if(id < 0 &&  -id < this->negativePlatformToGameKeyMapping.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->negativePlatformToGameKeyMapping[ -id];
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameKeyFactory->NONE;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_CPP
