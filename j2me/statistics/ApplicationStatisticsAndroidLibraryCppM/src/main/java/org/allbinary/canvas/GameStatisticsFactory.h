
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/AndroidGameStatistics.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class GameStatisticsFactory: public AndroidGameStatistics {

    private: static AndroidGameStatistics* SINGLETON;

    /*actual*/ public: static AndroidGameStatistics* getInstance();


            
    public: GameStatisticsFactory();
        
    private: StringMaker* stringBuffer;

    public: void add(std::string string);

    /*actual*/ public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_GAMESTATISTICSFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/canvas/AndroidGameStatistics.h")
#include "org/allbinary/canvas/AndroidGameStatistics.h"
#endif

        #endif
    
