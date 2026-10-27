
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/AndroidGameStatistics.h"
//ActualPlatform
/*actual*/ class GameStatisticsFactory: public AndroidGameStatistics {

    private: static inline AndroidGameStatistics* SINGLETON = new GameStatisticsFactory();

    /*actual*/ public: static AndroidGameStatistics* getInstance();

    private: StringMaker* stringBuffer = new StringMaker();

    public: void add(std::string string);

    /*actual*/ public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H
