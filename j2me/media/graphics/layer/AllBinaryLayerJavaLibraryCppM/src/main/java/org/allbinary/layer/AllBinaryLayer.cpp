
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
        



        #ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYER_CPP
        #define ORG_ALLBINARY_LAYER_ALLBINARYLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/AllBinaryLayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <org/allbinary/view/event/ViewPositionEvent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/LayerInterface.h"

auto AllBinaryLayer::NULL_ALLBINARY_LAYER_owner() -> AllBinaryLayer* { static std::unique_ptr<AllBinaryLayer> value(new AllBinaryLayer(StringUtil::getInstance()->EMPTY_STRING, RectangleFactory::SINGLETON, ViewPositionBase::NULL_VIEW_POSITION)); return value.get(); }
AllBinaryLayer* AllBinaryLayer::NULL_ALLBINARY_LAYER = AllBinaryLayer::NULL_ALLBINARY_LAYER_owner();

AllBinaryLayer::AllBinaryLayer(std::string name, Rectangle* rectangle, ViewPositionBase* viewPosition) : Layer(rectangle->getWidth(), rectangle->getHeight()), viewPositionEvent(new ViewPositionEvent(this)), viewPosition(ViewPositionBase::NULL_VIEW_POSITION){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    std::string localName;;
    

                        if(false)
                        
                                    {
                                    localName= this->getClass()->getName();
    

                                    }
                                
                        else {
                            localName= (new StringMaker())->append(name)->append(CommonSeps::getInstance()->COLON)->append(Integer.toHexString(TsUtil::getInstance()->hashCode(this)))->toString();
    

                        }
                            
this->name= localName;
    

    GPoint* point = rectangle->getPoint();;
    
this->setPosition(point->getX(), point->getY(), point->getZ());
    
this->setHalfWidth((this->getWidth()>>1));
    
this->setHalfHeight((this->getHeight()>>1));
    
this->viewPosition= viewPosition;
    
this->viewPosition->setAllbinaryLayer(this);
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryLayer::onChangeEvent(ViewPositionEvent* layerManagerEvent) -> void{
}


    auto AllBinaryLayer::paintThreed(Graphics* graphics) -> void{
}


    auto AllBinaryLayer::getX2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getXP() +this->getWidth();
    
}


    auto AllBinaryLayer::getY2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getYP() +this->getHeight();
    
}


    auto AllBinaryLayer::getZ2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this->getZP() +this->getDepth()));
    
}


    auto AllBinaryLayer::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto AllBinaryLayer::setHalfWidth(int32_t halfWidth) -> void{
this->halfWidth= halfWidth;
    
}


    auto AllBinaryLayer::getHalfWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->halfWidth;
    
}


    auto AllBinaryLayer::setHalfHeight(int32_t halfHeight) -> void{
this->halfHeight= halfHeight;
    
}


    auto AllBinaryLayer::getHalfHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->halfHeight;
    
}


    auto AllBinaryLayer::getHalfDepth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(this->getDepth()) /2;
    
}


    auto AllBinaryLayer::getViewPosition() -> ViewPositionBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->viewPosition;
    
}


    auto AllBinaryLayer::setViewPosition(ViewPositionBase* viewPosition) -> void{
this->viewPosition= viewPosition;
    
}


    auto AllBinaryLayer::getGroupInterface() -> std::vector<Group*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGroupFactory::getInstance()->NONE_ARRAY;
    
}


    auto AllBinaryLayer::implmentsTickableInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AllBinaryLayer::implmentsGameInputInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AllBinaryLayer::implmentsArtificialIntelligenceCompositeInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AllBinaryLayer::implmentsCollidableInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AllBinaryLayer::implementsThreedInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLFeatureUtil::getInstance()->isAnyThreed();;
    
}


    auto AllBinaryLayer::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    auto AllBinaryLayer::getMultiPlayerType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    auto AllBinaryLayer::toStringAppend(StringMaker* stringBuffer) -> void{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    PositionStrings* positionStrings = PositionStrings::getInstance();;
    

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    
stringBuffer->append(this->getName());
    
stringBuffer->append(commonSeps->COLON);
    
stringBuffer->append(AllBinaryLayer::TYPE);
    
stringBuffer->appendint(this->getType());
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(positionStrings->X_LABEL);
    
stringBuffer->appendint(this->getXP());
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(positionStrings->Y_LABEL);
    
stringBuffer->appendint(this->getYP());
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(positionStrings->Z_LABEL);
    
stringBuffer->appendint(this->getZP());
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(commonLabels->WIDTH_LABEL);
    
stringBuffer->appendint(this->getWidth());
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(this->getHeight());
    
}


    auto AllBinaryLayer::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
this->toStringAppend(stringBuffer);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LAYER_ALLBINARYLAYER_CPP
