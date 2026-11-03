
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GL;
class Graphics;
class Rectangle;
class BasicColor;
class BasicColorFactory;
class BasicColorSetUtil;
class NullPaintable;
class Paintable;
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>
#include <org/allbinary/layer/AllBinaryLayer.h>
class AllBinaryLayerManager;
class ForcedLogUtil;
class AllBinaryEventObject;
class EventStrings;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
class ViewPositionBase;
class ViewPositionEvent;
#include <org/allbinary/view/event/ViewPositionEventListenerInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SWTUtil;
class GameLayerUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryGameLayer: public AllBinaryLayer, public virtual ViewPositionEventListenerInterface, public virtual OpenGLSurfaceChangedInterface {

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: BasicColorSetUtil* basicSetColorUtil;

    /*protected*/ public: BasicColor* RED;

    private: Paintable* paintable;

    private: BasicArrayList* gameKeyEventList;

public: AllBinaryGameLayer(std::string name, Rectangle* layerInfo, ViewPositionBase* viewPosition);

                //@Throws(Exception.constructor)
            
    public: void set(GL* gl);

    public: void move();

    public: BasicArrayList* getGameKeyEventList();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    public: void onViewPositionChangeEvent();

                //@Throws(Exception.constructor)
            
    public: void onChangeEvent(ViewPositionEvent* layerManagerEvent);

    public: void paintFirst(Graphics* graphics);

    public: void paintDebug(Graphics* graphics);

    public: void setWidth(int32_t width);

    public: void setHeight(int32_t height);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorSetUtil.h>)
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>)
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include(<org/allbinary/view/event/ViewPositionEvent.h>)
#include <org/allbinary/view/event/ViewPositionEvent.h>
#endif
#if __has_include(<org/allbinary/view/event/ViewPositionEventListenerInterface.h>)
#include <org/allbinary/view/event/ViewPositionEventListenerInterface.h>
#endif
#if __has_include("org/allbinary/game/layer/SWTUtil.h")
#include "org/allbinary/game/layer/SWTUtil.h"
#endif
#if __has_include("org/allbinary/game/layer/GameLayerUtil.h")
#include "org/allbinary/game/layer/GameLayerUtil.h"
#endif

        #endif
    
