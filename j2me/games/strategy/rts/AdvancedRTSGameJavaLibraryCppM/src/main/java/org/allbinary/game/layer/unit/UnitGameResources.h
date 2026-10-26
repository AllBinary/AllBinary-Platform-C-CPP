
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

            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UnitGameResources: public BasicGameResources {

    private: static const std::string ICON = "_icon";

    private: static const std::string BUILD = "_build";

    private: static const std::string DESTROY = "_destroy";

    private: static const std::string ICON_BUILD = "_icon" +UnitGameResources::BUILD;

    public: std::string NAME = StringUtil::getInstance().EMPTY_STRING;

    public: std::string RESOURCE_ICON_ANIMATION = StringUtil::getInstance().EMPTY_STRING;

    public: std::string RESOURCE_ICON_BUILD = StringUtil::getInstance().EMPTY_STRING;

    public: std::string RESOURCE_ICON = StringUtil::getInstance().EMPTY_STRING;

protected: UnitGameResources();

    private: const std::string ICON_SIZE = "_64_by_64.png";

                //@Throws(Exception.constructor)
            
    protected: void append(std::string ROOT, std::string sizeString);

                //@Throws(Exception.constructor)
            
    protected: std::string getString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_H
