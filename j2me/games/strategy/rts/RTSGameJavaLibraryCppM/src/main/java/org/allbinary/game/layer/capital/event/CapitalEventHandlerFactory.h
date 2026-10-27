
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Group;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CapitalEventHandler;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CapitalEventHandlerFactory
            : public virtual Object
         {

    private: static inline std::vector<CapitalEventHandler*> capitalEventHandlerArray;

                    static int32_t initResult;
                static int32_t init();
            
    public: static CapitalEventHandler* getInstance(Group* groupInterface);

    public: static void removeAll();


            
    public: CapitalEventHandlerFactory();
        
};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_CAPITAL_EVENT_CAPITALEVENTHANDLERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include("org/allbinary/game/layer/capital/event/CapitalEventHandler.h")
#include "org/allbinary/game/layer/capital/event/CapitalEventHandler.h"
#endif

        #endif
    
