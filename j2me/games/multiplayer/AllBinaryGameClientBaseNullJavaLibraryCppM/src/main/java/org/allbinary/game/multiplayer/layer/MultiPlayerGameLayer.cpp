
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
        



            #include <vector>
        
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MultiPlayerGameLayerInterface.h"
#include "RemoteInfo.h"
#include "MultiplayerBehavior.h"

class MultiPlayerGameLayer: public CollidableDestroyableDamageableLayer, public MultiPlayerGameLayerInterface {

public: MultiPlayerGameLayer(RemoteInfo remoteInfo, std::vector<Group> groupInterface, std::string name, Rectangle layerInfo, ViewPositionBase viewPosition) : CollidableDestroyableDamageableLayer(groupInterface, name, layerInfo, viewPosition){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: MultiplayerBehavior getMultiplayerBehavior(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MultiplayerBehavior::NULL_MULTIPLAYER_BEHAVIOR;
    
}


    public: void setPingInfo(bool show){
}


    protected: void setFiring(int16_t firing){
}


    protected: int16_t getFiring(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


};

            

