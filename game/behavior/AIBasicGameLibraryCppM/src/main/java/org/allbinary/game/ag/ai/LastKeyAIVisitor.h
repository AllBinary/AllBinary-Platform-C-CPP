
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITOR_H
        #define ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITOR_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LastKeyAIVisitor: public Visitor {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const TRUE: Boolean = BooleanFactory.getInstance()!.TRUE;

public constructor ();

    public any visit(any = {} anyType);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITOR_H
