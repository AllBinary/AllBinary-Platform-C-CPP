
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerGameInput.h"
#include "GameInputProcessorInterface.h"

class GameInputProcessorComposite: public PlayerGameInput {

    private: std::string name;

    private: GameInputProcessorInterface gameInputProcessorInterface;

public: GameInputProcessorComposite(std::string name, GameInputProcessorInterface gameInputProcessorInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void update();

    private: const std::string NAME_LABEL = " GameInputProcessorInterface: ";

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H
