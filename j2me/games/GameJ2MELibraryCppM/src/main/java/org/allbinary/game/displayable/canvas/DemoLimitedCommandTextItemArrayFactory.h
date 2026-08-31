
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

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>

      
#include <org/allbinary/graphics/form/item/LimitCommandsVisitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DemoLimitedCommandTextItemArrayFactory
            : public Object
         {
        

    private: static const instance: DemoLimitedCommandTextItemArrayFactory = new DemoLimitedCommandTextItemArrayFactory();

    public static DemoLimitedCommandTextItemArrayFactory getInstance();

    private: const commandTextItemArrayFactory: CommandTextItemArrayFactory = new CommandTextItemArrayFactory(new LimitCommandsVisitor());

    public CommandTextItemArrayFactory getCommandTextItemArrayFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOLIMITEDCOMMANDTEXTITEMARRAYFACTORY_H
