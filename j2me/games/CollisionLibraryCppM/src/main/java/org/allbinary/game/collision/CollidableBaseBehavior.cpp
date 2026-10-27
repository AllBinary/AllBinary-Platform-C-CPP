
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

class CollidableBaseBehavior
            : public Object
        , public CollidableInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: LayerCollisionUtil* layerCollisionUtil = LayerCollisionUtil::getInstance();

    private: bool collidable = true;

public: CollidableBaseBehavior(bool collidable){
this->collidable= collidable;
    
}


    public: void update(){
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getClass()->getName();;
    
}


    public: void setCollidable(bool collidable){
this->collidable= collidable;
    
}


    public: bool isCollidable(CollidableCompositeLayer* ownerLayer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->collidable;
    
}


                //@Throws(Exception.constructor)
            
    public: void collide(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer){



                            throw new Exception((new StringMaker())->append(this->commonStrings->NOT_IMPLEMENTED)->append(CommonLabels::getInstance()->COLON_SEP)->append(this->getClass()->getName())->toString());
                    
}


    public: bool isCollision(CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerCollisionUtil->isCollision(ownerLayer, collisionLayer);;
    
}


    public: bool isCollisionInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerCollisionUtil->isCollision(ownerLayer, dynamic_cast<AllBinaryLayer*>(collidableInterfaceCompositeInterface as unknown));;
    
}


                //@Throws(Exception.constructor)
            
    public: void collideInterface(CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface){



                            throw new Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    public: void paint(CollidableCompositeLayer* ownerLayer, Graphics* graphics){
}


    public: CollisionType* getCollisionTypeWith(AllBinaryLayer* layerInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollisionTypeFactory::getInstance()->NONE;
    
}


};

            

