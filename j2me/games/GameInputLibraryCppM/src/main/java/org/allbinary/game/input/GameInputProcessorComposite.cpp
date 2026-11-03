
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_CPP
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/GameInputProcessorComposite.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/GameInputProcessorInterface.h"


GameInputProcessorComposite::GameInputProcessorComposite(std::string name, GameInputProcessorInterface* gameInputProcessorInterface) : PlayerGameInput(new BasicArrayListD(), new BasicArrayListD(),  -1){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->name= name;
    
this->gameInputProcessorInterface= gameInputProcessorInterface;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto GameInputProcessorComposite::update() -> void{

        try {
            
    BasicArrayList* list = this->getGameKeyEventList();;
    
this->gameInputProcessorInterface->onInput(list);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, &e);
    
}

}


    auto GameInputProcessorComposite::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (new StringMaker())->append(PlayerGameInput::toString())->append(this->NAME_LABEL)->append(this->name)->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_CPP
