
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/collision/CollidableBaseBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollidableInterface.h"
#include "org/allbinary/game/collision/LayerCollisionUtil.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/collision/CollisionType.h"


CollidableBaseBehavior::CollidableBaseBehavior(bool collidable) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), layerCollisionUtil(LayerCollisionUtil::getInstance()){
this->collidable= collidable;
    
}


    auto CollidableBaseBehavior::update() -> void{
}


    auto CollidableBaseBehavior::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getClass()->getName();;
    
}


    auto CollidableBaseBehavior::setCollidable(bool collidable) -> void{
this->collidable= collidable;
    
}


    auto CollidableBaseBehavior::isCollidable(CollidableCompositeLayer* ownerLayer) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->collidable;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableBaseBehavior::collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer) -> void{



                            throw Exception(JavaString::valueOf((new StringMaker())->append(this->commonStrings->NOT_IMPLEMENTED)->append(CommonLabels::getInstance()->COLON_SEP)->append(this->getClass()->getName())));
                    
}


    auto CollidableBaseBehavior::isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layerCollisionUtil->isCollision(ownerLayer, collisionLayer);;
    
}


    auto CollidableBaseBehavior::isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layerCollisionUtil->isCollision(ownerLayer, dynamic_cast<AllBinaryLayer*>(collidableInterfaceCompositeInterface));;
    
}


                //@Throws(Exception.constructor)
            
    auto CollidableBaseBehavior::collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto CollidableBaseBehavior::paint(CollidableCompositeLayer* ownerLayer, Graphics* graphics) -> void{
}


    auto CollidableBaseBehavior::getCollisionTypeWith(AllBinaryLayer* layerInterface) -> CollisionType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CollisionTypeFactory::getInstance()->NONE;
    
}




        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLIDABLEBASEBEHAVIOR_CPP
