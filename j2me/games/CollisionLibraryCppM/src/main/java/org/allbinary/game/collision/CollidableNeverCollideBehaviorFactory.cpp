
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

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"
#include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"

class CollidableNeverCollideBehaviorFactory: public CollidableBaseBehaviorFactory {

    private: static CollidableNeverCollideBehaviorFactory* instanceC() { static std::unique_ptr<CollidableNeverCollideBehaviorFactory> value(new CollidableNeverCollideBehaviorFactory()); return value.get(); }

    public: static CollidableNeverCollideBehaviorFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableNeverCollideBehaviorFactory::instanceC();
    
}


    private: CollidableNeverCollideBehavior* instance = new CollidableNeverCollideBehavior(false);

    public: CollidableBaseBehavior* createBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->instance;
    
}


};

            

