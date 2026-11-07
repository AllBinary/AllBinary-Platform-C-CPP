
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/resources/BasicGameResources.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h"

auto BasicGameResources::stringBuffer_owner() -> StringMaker* { static std::unique_ptr<StringMaker> value(new StringMaker()); return value.get(); }
StringMaker* BasicGameResources::stringBuffer = BasicGameResources::stringBuffer_owner();

BasicGameResources::BasicGameResources() : logUtil(LogUtil::getInstance()), RESOURCE(StringUtil::getInstance()->EMPTY_STRING), RESOURCE_DESTROY(StringUtil::getInstance()->EMPTY_STRING){
}


    auto BasicGameResources::init(std::string ROOT, std::vector<std::string> SIZE) -> void{

        try {
            
    int32_t scale = JavaBoxes::value<int32_t>(GameConfigurationCentral::getInstance()->SCALE->getValue());;
    

                        if(scale > 1 && scale -1 < SIZE.size())
                        
                                    {
                                    this->append(ROOT, SIZE[scale -1]);
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf((new StringMaker())->append("Invalid Value: ")->appendint(scale)));
                    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->INIT, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto BasicGameResources::append(std::string ROOT, std::string sizeString) -> void{

    std::string DESTROY = "_destroy";;
    

    std::string string = this->getString();;
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(ROOT);
    
BasicGameResources::stringBuffer->append(string);
    
BasicGameResources::stringBuffer->append(sizeString);
    
this->RESOURCE= JavaString::valueOf(BasicGameResources::stringBuffer);
    
BasicGameResources::stringBuffer->delete_(0, BasicGameResources::stringBuffer->length());
    
BasicGameResources::stringBuffer->append(ROOT);
    
BasicGameResources::stringBuffer->append(DESTROY);
    
BasicGameResources::stringBuffer->append(string);
    
BasicGameResources::stringBuffer->append(sizeString);
    
this->RESOURCE_DESTROY= JavaString::valueOf(BasicGameResources::stringBuffer);
    
}


                //@Throws(Exception.constructor)
            
    auto BasicGameResources::getString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameGraphicsResourceUtil::getInstance()->getName();;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_CPP
