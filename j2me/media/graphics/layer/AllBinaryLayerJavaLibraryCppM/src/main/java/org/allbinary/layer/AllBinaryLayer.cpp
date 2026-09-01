
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
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <org/allbinary/view/ViewPosition.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <org/allbinary/view/event/ViewPositionEvent.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Layer.h"
#include "LayerInterface.h"

class AllBinaryLayer: public Layer, public LayerInterface {

    public: static const AllBinaryLayer NULL_ALLBINARY_LAYER = AllBinaryLayer(StringUtil::getInstance().EMPTY_STRING, RectangleFactory::SINGLETON, ViewPositionBase::NULL_VIEW_POSITION);

    private: static const std::string TYPE = "Type: ";

    protected: const ViewPositionEvent viewPositionEvent = ViewPositionEvent(this);

    private: int32_t halfWidth= 0;

    private: int32_t halfHeight= 0;

    private: std::string name;

    private: ViewPositionBase viewPosition = ViewPositionBase::NULL_VIEW_POSITION;

public: AllBinaryLayer(std::string name, Rectangle rectangle, ViewPositionBase viewPosition){
            super(rectangle.getWidth(), rectangle.getHeight());
                    

                            //For kotlin this is before the body of the constructor.
                    

    std::string localName;;
    

                        if(false)
                        
                                    {
                                    localName= this->constructor.name.toString()!;
    

                                    }
                                
                        else {
                            localName= StringMaker().append(name).append(CommonSeps::getInstance().COLON).append(Integer::toHexString(TsUtil::getInstance().hashCode(this))).toString();
    

                        }
                            
this->name= localName;
    

    GPoint point = rectangle.getPoint();;
    
this->setPosition(point.getX(), point.getY(), point.getZ());
    
this->setHalfWidth((this->getWidth()>>1));
    
this->setHalfHeight((this->getHeight()>>1));
    
this->viewPosition= viewPosition;
    
this->viewPosition.setAllbinaryLayer(this);
    
}


                //@Throws(Exception.constructor)
            
    public: void onChangeEvent(ViewPositionEvent layerManagerEvent){
}


    public: void paintThreed(Graphics graphics){
}


    public: int32_t getX2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getXP() +this->getWidth();
    
}


    public: int32_t getY2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getYP() +this->getHeight();
    
}


    public: int32_t getZ2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this->getZP() +this->getDepth()));
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    protected: void setHalfWidth(int32_t halfWidth){
this->halfWidth= halfWidth;
    
}


    public: int32_t getHalfWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->halfWidth;
    
}


    protected: void setHalfHeight(int32_t halfHeight){
this->halfHeight= halfHeight;
    
}


    public: int32_t getHalfHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->halfHeight;
    
}


    public: int32_t getHalfDepth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(this->getDepth()) /2;
    
}


    public: ViewPositionBase getViewPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->viewPosition;
    
}


    public: void setViewPosition(ViewPositionBase viewPosition){
this->viewPosition= viewPosition;
    
}


    public: std::vector<Group> getGroupInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGroupFactory::getInstance().NONE_ARRAY;
    
}


    public: bool implmentsTickableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool implmentsGameInputInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool implmentsArtificialIntelligenceCompositeInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool implmentsCollidableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool implementsThreedInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLFeatureUtil::getInstance().isAnyThreed();;
    
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: int32_t getMultiPlayerType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: void toStringAppend(StringMaker stringBuffer){

    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    PositionStrings positionStrings = PositionStrings::getInstance();;
    

    CommonLabels commonLabels = CommonLabels::getInstance();;
    
stringBuffer.append(this->getName());
    
stringBuffer.append(commonSeps.COLON);
    
stringBuffer.append(AllBinaryLayer::TYPE);
    
stringBuffer.appendint(this->getType());
    
stringBuffer.append(commonSeps.SPACE);
    
stringBuffer.append(positionStrings.X_LABEL);
    
stringBuffer.appendint(this->getXP());
    
stringBuffer.append(commonSeps.SPACE);
    
stringBuffer.append(positionStrings.Y_LABEL);
    
stringBuffer.appendint(this->getYP());
    
stringBuffer.append(commonSeps.SPACE);
    
stringBuffer.append(positionStrings.Z_LABEL);
    
stringBuffer.appendint(this->getZP());
    
stringBuffer.append(commonSeps.SPACE);
    
stringBuffer.append(commonLabels.WIDTH_LABEL);
    
stringBuffer.appendint(this->getWidth());
    
stringBuffer.append(commonSeps.SPACE);
    
stringBuffer.append(commonLabels.HEIGHT_LABEL);
    
stringBuffer.appendint(this->getHeight());
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
this->toStringAppend(stringBuffer);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

