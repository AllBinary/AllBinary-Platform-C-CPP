
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_CPP
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/advertisement/AdConfiguration.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/game/state/GameState.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AdConfiguration::AdConfiguration(std::vector<Object*> advertIdArray){
this->INNERACTIVE= JavaBoxes::unbox<std::string>(advertIdArray[0]);
    
this->ADMOB= JavaBoxes::unbox<std::string>(advertIdArray[1]);
    
this->LEADBOLT= JavaBoxes::unbox<std::string>(advertIdArray[2]);
    
}


    auto AdConfiguration::getValidAdSpots() -> std::vector<Direction*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return {};
    
}


    auto AdConfiguration::process(GameState* gameState) -> void{
}


    auto AdConfiguration::processDemo(int32_t state) -> void{
}


    auto AdConfiguration::setShowAds() -> void{
}


    auto AdConfiguration::setToggleAds(bool showAds) -> void{
}


    auto AdConfiguration::isShowAds() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADCONFIGURATION_CPP
