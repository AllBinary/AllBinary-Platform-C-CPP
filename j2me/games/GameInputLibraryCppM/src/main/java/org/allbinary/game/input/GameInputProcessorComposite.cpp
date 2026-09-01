
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
        



            #include "../../../../java/lang/Exception.h"
        
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

public: GameInputProcessorComposite(std::string name, GameInputProcessorInterface gameInputProcessorInterface){
            super(BasicArrayListD(), BasicArrayListD(),  -1);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->name= name;
    
this->gameInputProcessorInterface= gameInputProcessorInterface;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void update(){

        try {
            
    BasicArrayList list = this->getGameKeyEventList();;
    
this->gameInputProcessorInterface.onInput(list);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.UPDATE, e);
    
}

}


    private: const std::string NAME_LABEL = " GameInputProcessorInterface: ";

    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(super.toString()).append(this->NAME_LABEL).append(this->name).toString();;
    
}


};

            

