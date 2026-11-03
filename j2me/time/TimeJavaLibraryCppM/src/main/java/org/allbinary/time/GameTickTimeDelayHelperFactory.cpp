
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
        



        #ifndef ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPERFACTORY_CPP
        #define ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/time/GameTickTimeDelayHelper.h"

auto GameTickTimeDelayHelperFactory::instance_owner() -> GameTickTimeDelayHelper* { static std::unique_ptr<GameTickTimeDelayHelper> value(new GameTickTimeDelayHelper( -1)); return value.get(); }
GameTickTimeDelayHelper* GameTickTimeDelayHelperFactory::instance = GameTickTimeDelayHelperFactory::instance_owner();

    auto GameTickTimeDelayHelperFactory::getInstance() -> GameTickTimeDelayHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameTickTimeDelayHelperFactory::instance;
    
}


GameTickTimeDelayHelperFactory::GameTickTimeDelayHelperFactory(){
}




        #endif //ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPERFACTORY_CPP
