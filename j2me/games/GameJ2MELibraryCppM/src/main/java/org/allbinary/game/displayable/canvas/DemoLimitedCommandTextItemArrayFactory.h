
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOLIMITEDCOMMANDTEXTITEMARRAYFACTORY_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOLIMITEDCOMMANDTEXTITEMARRAYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CommandTextItemArrayFactory;
class LimitCommandsVisitor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DemoLimitedCommandTextItemArrayFactory
            : public virtual Object
         {

    private: static DemoLimitedCommandTextItemArrayFactory* instance_owner();
    private: static DemoLimitedCommandTextItemArrayFactory* instance;

    public: static DemoLimitedCommandTextItemArrayFactory* getInstance();


            
    public: DemoLimitedCommandTextItemArrayFactory();
        
    private: CommandTextItemArrayFactory* commandTextItemArrayFactory;

    public: CommandTextItemArrayFactory* getCommandTextItemArrayFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOLIMITEDCOMMANDTEXTITEMARRAYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOLIMITEDCOMMANDTEXTITEMARRAYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOLIMITEDCOMMANDTEXTITEMARRAYFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>)
#include <org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/LimitCommandsVisitor.h>)
#include <org/allbinary/graphics/form/item/LimitCommandsVisitor.h>
#endif

        #endif
    
