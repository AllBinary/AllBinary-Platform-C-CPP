
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableInterface.h"
#include "LayerCollisionUtil.h"
#include "CollidableInterfaceCompositeInterface.h"
#include "CollisionTypeFactory.h"
#include "CollisionType.h"

class CollidableBaseBehavior
            : public Object
        : public CollidableInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const layerCollisionUtil: LayerCollisionUtil = LayerCollisionUtil.getInstance()!;

    private: collidable: bool = true;

public constructor (bool collidable){

            super();
        this.collidable= collidable;
    
}


    public update(){
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.constructor.name.toString()!;;
    
}


    public setCollidable(bool collidable){
this.collidable= collidable;
    
}


    public bool isCollidable(CollidableCompositeLayer ownerLayer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.collidable;
    
}


                //@Throws(Exception.constructor)
            
    public collide(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer allbinaryCollidableLayer){



                            throw new Exception(new StringMaker().append(this.commonStrings!.NOT_IMPLEMENTED)!.append(CommonLabels.getInstance()!.COLON_SEP)!.append(this.constructor.name.toString()!)!.toString());
                    
}


    public bool isCollision(CollidableCompositeLayer ownerLayer, CollidableCompositeLayer collisionLayer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.layerCollisionUtil!.isCollision(ownerLayer, collisionLayer);;
    
}


    public bool isCollisionInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.layerCollisionUtil!.isCollision(ownerLayer, collidableInterfaceCompositeInterface as unknown as AllBinaryLayer);;
    
}


                //@Throws(Exception.constructor)
            
    public collideInterface(CollidableCompositeLayer ownerLayer, CollidableInterfaceCompositeInterface collidableInterfaceCompositeInterface){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


    public paint(CollidableCompositeLayer ownerLayer, Graphics graphics){
}


    public CollisionType getCollisionTypeWith(AllBinaryLayer layerInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollisionTypeFactory.getInstance()!.NONE;
    
}


};

            

