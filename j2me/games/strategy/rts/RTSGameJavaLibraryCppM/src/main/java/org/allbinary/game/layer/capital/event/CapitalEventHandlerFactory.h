
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLERFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLERFACTORY_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/identification/Group.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CapitalEventHandler.h"

class CapitalEventHandlerFactory
            : public Object
         {

    private: static const std::vector<CapitalEventHandler> capitalEventHandlerArray;

                    static int32_t initResult;
                static int32_t init();
            
    public: static CapitalEventHandler getInstance(Group groupInterface);

    public: static void removeAll();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLERFACTORY_H
