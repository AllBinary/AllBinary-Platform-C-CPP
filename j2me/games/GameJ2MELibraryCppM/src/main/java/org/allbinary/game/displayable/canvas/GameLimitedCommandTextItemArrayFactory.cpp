
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>

      
#include <org/allbinary/graphics/form/item/LimitCommandsVisitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameLimitedCommandTextItemArrayFactory
            : public Object
         {

    private: static GameLimitedCommandTextItemArrayFactory* instance() { static std::unique_ptr<GameLimitedCommandTextItemArrayFactory> value(new GameLimitedCommandTextItemArrayFactory()); return value.get(); }

    public: static GameLimitedCommandTextItemArrayFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameLimitedCommandTextItemArrayFactory::instance();
    
}


    private: CommandTextItemArrayFactory* commandTextItemArrayFactory = new CommandTextItemArrayFactory(new LimitCommandsVisitor());

    public: CommandTextItemArrayFactory* getCommandTextItemArrayFactory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commandTextItemArrayFactory;
    
}


};

            

