
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/LastKeyAIVisitorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/LastKeyAIVisitor.h"


LastKeyAIVisitorFactory::LastKeyAIVisitorFactory() {
        }
        auto LastKeyAIVisitorFactory::instance_owner() -> LastKeyAIVisitor* { static std::unique_ptr<LastKeyAIVisitor> value(new LastKeyAIVisitor()); return value.get(); }
LastKeyAIVisitor* LastKeyAIVisitorFactory::instance = LastKeyAIVisitorFactory::instance_owner();

    auto LastKeyAIVisitorFactory::getInstance() -> LastKeyAIVisitor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LastKeyAIVisitorFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_CPP
