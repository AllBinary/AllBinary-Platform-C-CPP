
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FlagGameResources: public BasicGameResources {

    private: static const std::string ICON = "_icon";

    private: static const std::string BUILD = "_build";

    private: static const std::string DESTROY = "_destroy";

    private: static const std::string ICON_BUILD = "_icon" +FlagGameResources::BUILD;

    public: std::string NAME = StringUtil::getInstance().EMPTY_STRING;

    public: std::string RESOURCE_ICON_ANIMATION = StringUtil::getInstance().EMPTY_STRING;

    public: std::string RESOURCE_ICON_BUILD = StringUtil::getInstance().EMPTY_STRING;

    public: std::string RESOURCE_ICON = StringUtil::getInstance().EMPTY_STRING;

protected: FlagGameResources(){
}


    private: const std::string ICON_SIZE = "_64_by_64.png";

                //@Throws(Exception.constructor)
            
    protected: void append(std::string ROOT, std::string sizeString){
super.append(ROOT, sizeString);
    

    std::string string = GameGraphicsResourceUtil::getInstance().getName();;
    
BasicGameResources::stringBuffer.delete(0, BasicGameResources::stringBuffer.length());
    
BasicGameResources::stringBuffer.append(ROOT);
    
BasicGameResources::stringBuffer.append(FlagGameResources::DESTROY);
    
BasicGameResources::stringBuffer.append(string);
    
BasicGameResources::stringBuffer.append(sizeString);
    
this->RESOURCE_DESTROY= BasicGameResources::stringBuffer.toString();
    
BasicGameResources::stringBuffer.delete(0, BasicGameResources::stringBuffer.length());
    
BasicGameResources::stringBuffer.append(FlagGameResources::ICON);
    
BasicGameResources::stringBuffer.append(ROOT);
    
this->RESOURCE_ICON_ANIMATION= BasicGameResources::stringBuffer.toString();
    
BasicGameResources::stringBuffer.delete(0, BasicGameResources::stringBuffer.length());
    
BasicGameResources::stringBuffer.append(ROOT);
    
BasicGameResources::stringBuffer.append(FlagGameResources::ICON);
    
BasicGameResources::stringBuffer.append(string);
    
BasicGameResources::stringBuffer.append(this->ICON_SIZE);
    
this->RESOURCE_ICON= BasicGameResources::stringBuffer.toString();
    
BasicGameResources::stringBuffer.delete(0, BasicGameResources::stringBuffer.length());
    
BasicGameResources::stringBuffer.append(ROOT);
    
BasicGameResources::stringBuffer.append(FlagGameResources::ICON_BUILD);
    
BasicGameResources::stringBuffer.append(string);
    
BasicGameResources::stringBuffer.append(this->ICON_SIZE);
    
this->RESOURCE_ICON_BUILD= BasicGameResources::stringBuffer.toString();
    
}


};

            

