
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
        



        #ifndef ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_CPP
        #define ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/canvas/GameStatisticsFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/BaseGameStatistics.h"
//ActualPlatform

GameStatisticsFactory::GameStatisticsFactory() : stringBuffer(new StringMaker()) {
        }
        auto GameStatisticsFactory::instance_owner() -> GameStatisticsFactory* { static std::unique_ptr<GameStatisticsFactory> value(new GameStatisticsFactory()); return value.get(); }
GameStatisticsFactory* GameStatisticsFactory::instance = GameStatisticsFactory::instance_owner();

    /*actual*/ auto GameStatisticsFactory::getInstance() -> GameStatisticsFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameStatisticsFactory::instance;
    
}


    auto GameStatisticsFactory::add(std::string string) -> void{

                        if(this->stringBuffer->length() > 12000)
                        
                                    {
                                    this->stringBuffer->delete_(0, this->stringBuffer->length());
    
this->stringBuffer->append("Old Stats Cleared");
    

                                    }
                                
this->stringBuffer->append(string);
    
}


    /*actual*/ auto GameStatisticsFactory::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf((new StringMaker())->append(BaseGameStatistics::toString())->append(JavaString::valueOf(this->stringBuffer)));;
    
}




        #endif //ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_CPP
