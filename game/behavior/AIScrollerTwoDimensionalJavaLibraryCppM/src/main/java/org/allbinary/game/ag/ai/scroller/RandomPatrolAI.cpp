
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasePatrolAI.h"

class RandomPatrolAI: public BasePatrolAI {

    private: bool changedDirection = true;

public: RandomPatrolAI(Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(hashtable, ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->updateRandomDistance();
    
}


    private: void updateRandomDistance(){
this->currentDistance= MyRandomFactory::getInstance().getAbsoluteNextInt(this->maxDistance.intValue());
    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){
super.update();
    
super.processKeyAI(this->keyDirection);
    

                        if(this->changedDirection)
                        
                                    {
                                    super.processKeyAI(Canvas::KEY_NUM1);
    
this->updateRandomDistance();
    
this->changedDirection= false;
    

                                    }
                                
}


    protected: void nextDirection(){
super.nextDirection();
    
this->changedDirection= true;
    
}


};

            

