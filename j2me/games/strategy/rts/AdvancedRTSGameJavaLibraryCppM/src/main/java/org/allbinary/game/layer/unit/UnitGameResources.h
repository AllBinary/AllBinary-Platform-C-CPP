
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
class GameGraphicsResourceUtil;
class AndroidUtil;
class GraphicsFeatureFactory;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UnitGameResources: public BasicGameResources {

    private: static inline const std::string ICON = "_icon";

    private: static inline const std::string BUILD = "_build";

    private: static inline const std::string DESTROY = "_destroy";

    private: static const std::string ICON_BUILD;

    public: std::string NAME;

    public: std::string RESOURCE_ICON_ANIMATION;

    public: std::string RESOURCE_ICON_BUILD;

    public: std::string RESOURCE_ICON;

/*protected*/ public: UnitGameResources();

    private: const std::string ICON_SIZE = "_64_by_64.png";

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void append(std::string ROOT, std::string sizeString);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: std::string getString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/resources/BasicGameResources.h>)
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
#endif
#if __has_include(<org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>)
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
