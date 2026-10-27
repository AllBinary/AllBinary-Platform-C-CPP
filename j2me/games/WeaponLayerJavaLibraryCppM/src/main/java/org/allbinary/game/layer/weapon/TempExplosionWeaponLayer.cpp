
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/physics/movement/Movement.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/weapon/SimpleWeaponLayer.h"

class TempExplosionWeaponLayer: public SimpleWeaponLayer {

    public: WeaponProperties* weaponProperties = new WeaponProperties( -1,  -1, 0, 1000, 0);

    private: TimeDelayHelper* timeDelayHelper = new TimeDelayHelper(0);

public: TempExplosionWeaponLayer(std::string name, Movement* movement, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, int32_t timeDelay) : SimpleWeaponLayer(name, RemoteInfo::REMOTE_INFO,  -1, movement, animationInterface, SimpleWeaponLayer::createDestroyed(), rectangle, viewPosition){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->timeDelayHelper->delay= timeDelay;
    
}


                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager){

                        if(this->timeDelayHelper->isTime(GameTickTimeDelayHelperFactory::getInstance()->startTime))
                        
                                    {
                                    this->getCollidableInferface()->collide(this, this);
    
this->totalDamage= this->getInitDamage() +1;
    

                                    }
                                
super.processTick(allBinaryLayerManager);
    
}


};

            

