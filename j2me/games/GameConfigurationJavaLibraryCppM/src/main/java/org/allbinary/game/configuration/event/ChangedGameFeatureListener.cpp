
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/GameConfiguration.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseChangedGameFeatureListener.h"

class ChangedGameFeatureListener: public BaseChangedGameFeatureListener {
        

    private: static const gameFeatureListener: ChangedGameFeatureListener = new ChangedGameFeatureListener();

    public static ChangedGameFeatureListener getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ChangedGameFeatureListener.gameFeatureListener;
    
}


    public bool isChangedGameConfiguration(GameConfiguration gameConfiguration){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.contains(gameConfiguration);;
    
}


};

            

