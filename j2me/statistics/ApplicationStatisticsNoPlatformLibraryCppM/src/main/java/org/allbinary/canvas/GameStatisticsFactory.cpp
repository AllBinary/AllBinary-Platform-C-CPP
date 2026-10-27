
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/BaseGameStatistics.h"
//NoPlatform
// class GameStatisticsFactory: public BaseGameStatistics {

    private: static GameStatisticsFactory* instance() { static std::unique_ptr<GameStatisticsFactory> value(new GameStatisticsFactory()); return value.get(); }

    public: static GameStatisticsFactory* getInstance()

    public: void add(std::string string)

    public: std::string toString()

};

            

