
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_CHANGEDGAMEFEATURELISTENER_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_CHANGEDGAMEFEATURELISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GameConfiguration;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/event/BaseChangedGameFeatureListener.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ChangedGameFeatureListener: public BaseChangedGameFeatureListener {

    private: static ChangedGameFeatureListener* gameFeatureListener_owner();
    private: static ChangedGameFeatureListener* gameFeatureListener;

    public: static ChangedGameFeatureListener* getInstance();


            
    public: ChangedGameFeatureListener();
        
    public: bool isChangedGameConfiguration(GameConfiguration* gameConfiguration);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_CHANGEDGAMEFEATURELISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_CHANGEDGAMEFEATURELISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_CHANGEDGAMEFEATURELISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/GameConfiguration.h>)
#include <org/allbinary/game/configuration/GameConfiguration.h>
#endif
#if __has_include("org/allbinary/game/configuration/event/BaseChangedGameFeatureListener.h")
#include "org/allbinary/game/configuration/event/BaseChangedGameFeatureListener.h"
#endif

        #endif
    
