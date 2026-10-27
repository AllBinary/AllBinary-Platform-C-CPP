
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/DemoGameMidletState.h"

class DemoGameMidletStateFactory
            : public Object
         {

    private: static DemoGameMidletStateFactory* STATE() { static std::unique_ptr<DemoGameMidletStateFactory> value(new DemoGameMidletStateFactory()); return value.get(); }

    public: static DemoGameMidletStateFactory* getInstance();

    public: DemoGameMidletState* NONE = new DemoGameMidletState();

    public: DemoGameMidletState* START_DEMO = new DemoGameMidletState();

    public: DemoGameMidletState* START_GAME = new DemoGameMidletState();

    public: DemoGameMidletState* START_INPUT_MAPPING = new DemoGameMidletState();

private: DemoGameMidletStateFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H
