
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_FLAGGAMERESOURCES_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_FLAGGAMERESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/FlagGameResources.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

FlagGameResources::FlagGameResources() : NAME(StringUtil::getInstance()->EMPTY_STRING), RESOURCE_ICON_ANIMATION(StringUtil::getInstance()->EMPTY_STRING), RESOURCE_ICON_BUILD(StringUtil::getInstance()->EMPTY_STRING), RESOURCE_ICON(StringUtil::getInstance()->EMPTY_STRING){
}

const std::string FlagGameResources::ICON_BUILD = JavaString::valueOf("_icon") +JavaString::valueOf(FlagGameResources::BUILD);

                //@Throws(Exception.constructor)
            
    auto FlagGameResources::append(std::string ROOT, std::string sizeString) -> void{
BasicGameResources::append(ROOT, sizeString);
    

    std::string string = GameGraphicsResourceUtil::getInstance()->getName();;
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(ROOT);
    
BasicGameResources::stringBuffer->append(FlagGameResources::DESTROY);
    
BasicGameResources::stringBuffer->append(string);
    
BasicGameResources::stringBuffer->append(sizeString);
    
this->RESOURCE_DESTROY= JavaString::valueOf(BasicGameResources::stringBuffer);
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(FlagGameResources::ICON);
    
BasicGameResources::stringBuffer->append(ROOT);
    
this->RESOURCE_ICON_ANIMATION= JavaString::valueOf(BasicGameResources::stringBuffer);
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(ROOT);
    
BasicGameResources::stringBuffer->append(FlagGameResources::ICON);
    
BasicGameResources::stringBuffer->append(string);
    
BasicGameResources::stringBuffer->append(this->ICON_SIZE);
    
this->RESOURCE_ICON= JavaString::valueOf(BasicGameResources::stringBuffer);
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(ROOT);
    
BasicGameResources::stringBuffer->append(FlagGameResources::ICON_BUILD);
    
BasicGameResources::stringBuffer->append(string);
    
BasicGameResources::stringBuffer->append(this->ICON_SIZE);
    
this->RESOURCE_ICON_BUILD= JavaString::valueOf(BasicGameResources::stringBuffer);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_FLAGGAMERESOURCES_CPP
