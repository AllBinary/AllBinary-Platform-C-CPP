
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_CPP
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/unit/UnitGameResources.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

UnitGameResources::UnitGameResources() : NAME(StringUtil::getInstance()->EMPTY_STRING), RESOURCE_ICON_ANIMATION(StringUtil::getInstance()->EMPTY_STRING), RESOURCE_ICON_BUILD(StringUtil::getInstance()->EMPTY_STRING), RESOURCE_ICON(StringUtil::getInstance()->EMPTY_STRING){
}

const std::string UnitGameResources::ICON_BUILD = JavaString::valueOf("_icon") +JavaString::valueOf(UnitGameResources::BUILD);

                //@Throws(Exception.constructor)
            
    auto UnitGameResources::append(std::string ROOT, std::string sizeString) -> void{
BasicGameResources::append(ROOT, sizeString);
    

    std::string string = GameGraphicsResourceUtil::getInstance()->getName();;
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(ROOT);
    
BasicGameResources::stringBuffer->append(UnitGameResources::DESTROY);
    
BasicGameResources::stringBuffer->append(string);
    
BasicGameResources::stringBuffer->append(sizeString);
    
this->RESOURCE_DESTROY= BasicGameResources::stringBuffer->toString();
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(UnitGameResources::ICON);
    
BasicGameResources::stringBuffer->append(ROOT);
    
this->RESOURCE_ICON_ANIMATION= BasicGameResources::stringBuffer->toString();
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(ROOT);
    
BasicGameResources::stringBuffer->append(UnitGameResources::ICON);
    
BasicGameResources::stringBuffer->append(string);
    
BasicGameResources::stringBuffer->append(this->ICON_SIZE);
    
this->RESOURCE_ICON= BasicGameResources::stringBuffer->toString();
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(ROOT);
    
BasicGameResources::stringBuffer->append(UnitGameResources::ICON_BUILD);
    
BasicGameResources::stringBuffer->append(string);
    
BasicGameResources::stringBuffer->append(this->ICON_SIZE);
    
this->RESOURCE_ICON_BUILD= BasicGameResources::stringBuffer->toString();
    
}


                //@Throws(Exception.constructor)
            
    auto UnitGameResources::getString() -> std::string{

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameGraphicsResourceUtil::getInstance()->getStringForFeature(GraphicsFeatureFactory::getInstance()->SPRITE_QUARTER_ROTATION_GRAPHICS);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGameResources::getString();;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITGAMERESOURCES_CPP
