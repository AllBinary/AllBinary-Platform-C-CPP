
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

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DemoGameMidletState.h"

class DemoGameMidletStateFactory
            : public Object
         {

    private: static DemoGameMidletStateFactory STATE = DemoGameMidletStateFactory();

    public: static DemoGameMidletStateFactory getInstance();

    public: const DemoGameMidletState NONE = DemoGameMidletState();

    public: const DemoGameMidletState START_DEMO = DemoGameMidletState();

    public: const DemoGameMidletState START_GAME = DemoGameMidletState();

    public: const DemoGameMidletState START_INPUT_MAPPING = DemoGameMidletState();

private: DemoGameMidletStateFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_H
