
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Graphics;
class BasicGroupFactory;
class Group;
class GPoint;
class Rectangle;
class RectangleFactory;
class OpenGLFeatureUtil;
class TsUtil;
class StringMaker;
class StringUtil;
class PositionStrings;
class CommonLabels;
class CommonSeps;
class ViewPositionBase;
class ViewPositionEvent;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/LayerInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryLayer: public Layer, public virtual LayerInterface {

    private: static AllBinaryLayer* NULL_ALLBINARY_LAYER_owner();
    public: static AllBinaryLayer* NULL_ALLBINARY_LAYER;

    private: static inline const std::string TYPE = "Type: ";

    /*protected*/ public: ViewPositionEvent* viewPositionEvent;

    private: int32_t halfWidth= 0;

    private: int32_t halfHeight= 0;

    private: std::string name;

    private: ViewPositionBase* viewPosition;

public: AllBinaryLayer(std::string name, Rectangle* rectangle, ViewPositionBase* viewPosition);

    public: void setPosition(int32_t x, int32_t y, int32_t z);

    public: void moveDXYZ(int32_t dx, int32_t dy, int32_t dz);

    public: int32_t getXP();

    public: int32_t getYP();

    public: int32_t getZP();

    public: int32_t getWidth();

    public: int32_t getHeight();

    public: void setVisible(bool visible);

    public: bool isVisible();

    public: void paint(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void onChangeEvent(ViewPositionEvent* layerManagerEvent);

    public: void paintThreed(Graphics* graphics);

    public: int32_t getX2();

    public: int32_t getY2();

    public: int32_t getZ2();

    public: std::string getName();

    /*protected*/ public: void setHalfWidth(int32_t halfWidth);

    public: int32_t getHalfWidth();

    /*protected*/ public: void setHalfHeight(int32_t halfHeight);

    public: int32_t getHalfHeight();

    public: int32_t getHalfDepth();

    public: ViewPositionBase* getViewPosition();

    public: void setViewPosition(ViewPositionBase* viewPosition);

    public: std::vector<Group*> getGroupInterface();

    public: bool implmentsTickableInterface();

    public: bool implmentsGameInputInterface();

    public: bool implmentsArtificialIntelligenceCompositeInterface();

    public: bool implmentsCollidableInterface();

    public: bool implementsThreedInterface();

    public: int32_t getType();

    public: int32_t getMultiPlayerType();

    public: void toStringAppend(StringMaker* stringBuffer);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LAYER_ALLBINARYLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_ALLBINARYLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_ALLBINARYLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/identification/BasicGroupFactory.h>)
#include <org/allbinary/game/identification/BasicGroupFactory.h>
#endif
#if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/RectangleFactory.h>)
#include <org/allbinary/graphics/RectangleFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/math/PositionStrings.h>)
#include <org/allbinary/math/PositionStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include(<org/allbinary/view/event/ViewPositionEvent.h>)
#include <org/allbinary/view/event/ViewPositionEvent.h>
#endif
#if __has_include("org/allbinary/layer/Layer.h")
#include "org/allbinary/layer/Layer.h"
#endif
#if __has_include("org/allbinary/layer/LayerInterface.h")
#include "org/allbinary/layer/LayerInterface.h"
#endif

        #endif
    
