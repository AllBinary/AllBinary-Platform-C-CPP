
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
        



#include <org/allbinary/ai/ArtificialIntelligence.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>

      
#include <org/allbinary/game/collision/CollidableBaseBehaviorFactory.h>

      
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameLayer.h"

class CollidableCompositeLayer: public AllBinaryGameLayer, public CollidableInterfaceCompositeInterface {

    private: static Object* NULL_COLLIDABLE_COMPOSITE_LAYER = NullUtil::getInstance().NULL_OBJECT;

    public: static CollidableCompositeLayer getNullInstance(){

                        if(CollidableCompositeLayer::NULL_COLLIDABLE_COMPOSITE_LAYER == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    CollidableCompositeLayer::NULL_COLLIDABLE_COMPOSITE_LAYER= CollidableCompositeLayer(StringUtil::getInstance().EMPTY_STRING, RectangleFactory::SINGLETON, ViewPositionBase::NULL_VIEW_POSITION, CollidableNeverCollideBehaviorFactory::getInstance());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableCompositeLayer::NULL_COLLIDABLE_COMPOSITE_LAYER;
    
}


    private: CollidableBaseBehavior collidableInferface = CollidableNeverCollideBehaviorFactory::getInstance().createBehavior();

public: CollidableCompositeLayer(std::string name, Rectangle layerInfo, ViewPositionBase viewPosition, CollidableBaseBehaviorFactory collidableBaseBehaviorFactory) : AllBinaryGameLayer(name, layerInfo, viewPosition){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(collidableBaseBehaviorFactory != CollidableNeverCollideBehaviorFactory::getInstance())
                        
                                    {
                                    this->setCollidableInferface(collidableBaseBehaviorFactory.createBehavior());
    

                                    }
                                
}


    public: ArtificialIntelligenceInterface getArtificialIntelligenceInterface(){
ForcedLogUtil::log(this->commonStrings.NOT_IMPLEMENTED, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ArtificialIntelligence::getInstance();;
    
}


    public: CollidableBaseBehavior getCollidableInferface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->collidableInferface;
    
}


    public: void setCollidableInferface(CollidableBaseBehavior collidableInferface){
this->collidableInferface= collidableInferface;
    
}


    public: bool implmentsCollidableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: void toStringAppend(StringMaker stringBuffer){

    CommonSeps commonSeps = CommonSeps::getInstance();;
    
super.toStringAppend(stringBuffer);
    
stringBuffer.append(commonSeps.NEW_LINE);
    
stringBuffer.append(this->getCollidableInferface().toString());
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
this->toStringAppend(stringBuffer);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

