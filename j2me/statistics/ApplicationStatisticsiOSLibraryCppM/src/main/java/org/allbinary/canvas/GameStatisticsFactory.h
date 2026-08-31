
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
        



        #ifndef ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H
        #define ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H

#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseGameStatistics.h"
//ActualPlatform
/*actual*/ class GameStatisticsFactory: public BaseGameStatistics {
        

    private: static const instance: GameStatisticsFactory = new GameStatisticsFactory();

    /*actual*/ public static GameStatisticsFactory getInstance();

    private: stringBuffer: StringMaker = new StringMaker();

    public add(string string);

    /*actual*/ public string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H
