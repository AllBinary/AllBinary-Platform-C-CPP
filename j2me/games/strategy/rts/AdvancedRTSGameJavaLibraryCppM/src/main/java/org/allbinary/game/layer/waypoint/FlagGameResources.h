
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_FLAGGAMERESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_FLAGGAMERESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
class GameGraphicsResourceUtil;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FlagGameResources: public BasicGameResources {

    private: static inline const std::string ICON = "_icon";

    private: static inline const std::string BUILD = "_build";

    private: static inline const std::string DESTROY = "_destroy";

    private: static const std::string ICON_BUILD;

    public: std::string NAME;

    public: std::string RESOURCE_ICON_ANIMATION;

    public: std::string RESOURCE_ICON_BUILD;

    public: std::string RESOURCE_ICON;

/*protected*/ public: FlagGameResources();

    private: const std::string ICON_SIZE = "_64_by_64.png";

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void append(std::string ROOT, std::string sizeString);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_FLAGGAMERESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_FLAGGAMERESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_FLAGGAMERESOURCES_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/resources/BasicGameResources.h>)
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
#endif
#if __has_include(<org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>)
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
