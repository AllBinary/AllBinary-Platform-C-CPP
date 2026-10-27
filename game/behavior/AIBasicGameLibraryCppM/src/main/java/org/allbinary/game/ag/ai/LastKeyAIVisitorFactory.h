
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LastKeyAIVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LastKeyAIVisitorFactory
            : public virtual Object
         {

    private: static LastKeyAIVisitor* instance_owner();
    private: static LastKeyAIVisitor* instance;

    public: static LastKeyAIVisitor* getInstance();


            
    public: LastKeyAIVisitorFactory();
        
};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/game/ag/ai/LastKeyAIVisitor.h")
#include "org/allbinary/game/ag/ai/LastKeyAIVisitor.h"
#endif

        #endif
    
