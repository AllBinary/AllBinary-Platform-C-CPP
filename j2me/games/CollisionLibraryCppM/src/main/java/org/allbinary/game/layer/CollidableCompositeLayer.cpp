
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_COLLIDABLECOMPOSITELAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_COLLIDABLECOMPOSITELAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/CollidableCompositeLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        #include "org/allbinary/game/layer/AllBinaryGameLayer.h"

Object* CollidableCompositeLayer::NULL_COLLIDABLE_COMPOSITE_LAYER = NullUtil::getInstance()->NULL_OBJECT;

    auto CollidableCompositeLayer::getNullInstance() -> CollidableCompositeLayer*{

                        if(CollidableCompositeLayer::NULL_COLLIDABLE_COMPOSITE_LAYER == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    CollidableCompositeLayer::NULL_COLLIDABLE_COMPOSITE_LAYER= new CollidableCompositeLayer(StringUtil::getInstance()->EMPTY_STRING, RectangleFactory::SINGLETON, ViewPositionBase::NULL_VIEW_POSITION, CollidableNeverCollideBehaviorFactory::getInstance());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CollidableCompositeLayer*>(CollidableCompositeLayer::NULL_COLLIDABLE_COMPOSITE_LAYER);
    
}


CollidableCompositeLayer::CollidableCompositeLayer(std::string name, Rectangle* layerInfo, ViewPositionBase* viewPosition, CollidableBaseBehaviorFactory* collidableBaseBehaviorFactory) : AllBinaryGameLayer(name, layerInfo, viewPosition), collidableInferface(CollidableNeverCollideBehaviorFactory::getInstance()->createBehavior()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(collidableBaseBehaviorFactory != CollidableNeverCollideBehaviorFactory::getInstance())
                        
                                    {
                                    this->setCollidableInferface(collidableBaseBehaviorFactory->createBehavior());
    

                                    }
                                
}


    auto CollidableCompositeLayer::getArtificialIntelligenceInterface() -> ArtificialIntelligenceInterface*{
ForcedLogUtil::log(this->commonStrings->NOT_IMPLEMENTED, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ArtificialIntelligence::getInstance();;
    
}


    auto CollidableCompositeLayer::getCollidableInferface() -> CollidableBaseBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->collidableInferface;
    
}


    auto CollidableCompositeLayer::setCollidableInferface(CollidableBaseBehavior* collidableInferface) -> void{
this->collidableInferface= collidableInferface;
    
}


    auto CollidableCompositeLayer::implmentsCollidableInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto CollidableCompositeLayer::toStringAppend(StringMaker* stringBuffer) -> void{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
AllBinaryGameLayer::toStringAppend(stringBuffer);
    
stringBuffer->append(commonSeps->NEW_LINE);
    
stringBuffer->append(JavaString::valueOf(this->getCollidableInferface()));
    
}


    auto CollidableCompositeLayer::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
this->toStringAppend(stringBuffer);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_COLLIDABLECOMPOSITELAYER_CPP
