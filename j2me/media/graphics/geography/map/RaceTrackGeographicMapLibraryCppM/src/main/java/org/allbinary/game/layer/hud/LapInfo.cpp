
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_CPP
        #define ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/hud/LapInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto LapInfo::NULL_LAP_INFO_owner() -> LapInfo* { static std::unique_ptr<LapInfo> value(new LapInfo( -1)); return value.get(); }
LapInfo* LapInfo::NULL_LAP_INFO = LapInfo::NULL_LAP_INFO_owner();

LapInfo::LapInfo(int32_t totalLaps){
this->totalLaps= totalLaps;
    
this->numberOfLaps= 1;
    
}


    auto LapInfo::add() -> void{
this->numberOfLaps++;
    
}


    auto LapInfo::getCurrentLap() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->numberOfLaps;
    
}


    auto LapInfo::getTotalLaps() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->totalLaps;
    
}


    auto LapInfo::isDone() -> bool{

                        if(this->numberOfLaps >= this->totalLaps)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto LapInfo::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("isDone: ");
    
stringBuffer->appendboolean(this->isDone());
    
stringBuffer->append(" CurrentLap: ");
    
stringBuffer->appendint(this->getCurrentLap());
    
stringBuffer->append(" Total Laps: ");
    
stringBuffer->appendint(this->getTotalLaps());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_CPP
