
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
        



        #ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYER_H
        #define ORG_ALLBINARY_LAYER_ALLBINARYLAYER_H

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

public: AllBinaryLayer(std::string name, Rectangle rectangle, ViewPositionBase viewPosition);

                //@Throws(Exception.constructor)
            
    public: void onChangeEvent(ViewPositionEvent layerManagerEvent);

    public: void paintThreed(Graphics graphics);

    public: int32_t getX2();

    public: int32_t getY2();

    public: int32_t getZ2();

    public: std::string getName();

    protected: void setHalfWidth(int32_t halfWidth);

    public: int32_t getHalfWidth();

    protected: void setHalfHeight(int32_t halfHeight);

    public: int32_t getHalfHeight();

    public: int32_t getHalfDepth();

    public: ViewPositionBase getViewPosition();

    public: void setViewPosition(ViewPositionBase viewPosition);

    public: std::vector<Group> getGroupInterface();

    public: bool implmentsTickableInterface();

    public: bool implmentsGameInputInterface();

    public: bool implmentsArtificialIntelligenceCompositeInterface();

    public: bool implmentsCollidableInterface();

    public: bool implementsThreedInterface();

    public: int32_t getType();

    public: int32_t getMultiPlayerType();

    public: void toStringAppend(StringMaker stringBuffer);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LAYER_ALLBINARYLAYER_H
