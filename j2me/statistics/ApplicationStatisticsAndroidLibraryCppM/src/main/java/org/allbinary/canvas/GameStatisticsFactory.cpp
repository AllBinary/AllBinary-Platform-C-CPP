
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
        #include "org/allbinary/canvas/AndroidGameStatistics.h"
//ActualPlatform

GameStatisticsFactory::GameStatisticsFactory() : stringBuffer(new StringMaker()) {
        }
        AndroidGameStatistics* GameStatisticsFactory::SINGLETON = new GameStatisticsFactory();

    /*actual*/ auto GameStatisticsFactory::getInstance() -> AndroidGameStatistics*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameStatisticsFactory::SINGLETON;
    
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
                        
                        
                        return JavaString::valueOf((new StringMaker())->append(AndroidGameStatistics::toString())->append(JavaString::valueOf(this->stringBuffer)));;
    
}




        #endif //ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_CPP
