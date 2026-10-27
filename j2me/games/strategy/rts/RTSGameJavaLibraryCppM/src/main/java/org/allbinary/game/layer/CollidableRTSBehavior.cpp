
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/collision/CollisionType.h>

      
#include <org/allbinary/game/collision/CollisionTypeFactory.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/CollidableCompositeLayer.h"

class CollidableRTSBehavior: public CollidableDestroyableDamageableBehavior {

public: CollidableRTSBehavior(bool collidable) : CollidableDestroyableDamageableBehavior(collidable){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: bool isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface){

    CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory::getInstance();;
    

    CollisionType* collisionType = collidableInterfaceCompositeInterface->getCollidableInferface()->getCollisionTypeWith(ownerLayer);;
    

                        if(collisionType == collisionTypeFactory->PICKUP)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(collisionType == collisionTypeFactory->COLLISION)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.isCollision(ownerLayer, collidableInterfaceCompositeInterface);;
    

                                    }
                                
                        else {
                            
                        if(collidableInterfaceCompositeInterface->getX2() <= ownerLayer->getXP() || collidableInterfaceCompositeInterface->getY2() <= ownerLayer->getYP() || collidableInterfaceCompositeInterface->getYP() >= ownerLayer->getY2() || collidableInterfaceCompositeInterface->getXP() >= ownerLayer->getX2())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface){

    CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory::getInstance();;
    

    CollisionType* collisionType = collidableInterfaceCompositeInterface->getCollidableInferface()->getCollisionTypeWith(ownerLayer);;
    

                        if(collisionType == collisionTypeFactory->PICKUP)
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(collisionType == collisionTypeFactory->COLLISION)
                        
                                    {
                                    super.collide(ownerLayer, collidableInterfaceCompositeInterface);
    

                                    }
                                
                        else {
                            this->collideNone(ownerLayer, collidableInterfaceCompositeInterface);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    protected: void collideNone(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterface){
}


};

            

