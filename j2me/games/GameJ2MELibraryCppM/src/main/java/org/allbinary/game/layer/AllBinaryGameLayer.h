
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

            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <org/allbinary/view/event/ViewPositionEvent.h>

      
#include <org/allbinary/view/event/ViewPositionEventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SWTUtil.h"
#include "GameLayerUtil.h"

class AllBinaryGameLayer: public AllBinaryLayer, public ViewPositionEventListenerInterface, public OpenGLSurfaceChangedInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();

    protected: const BasicColor RED = BasicColorFactory::getInstance().RED;

    private: const Paintable paintable = SWTUtil::isSWT
                        ?       
                                class extends Paintable
                                {
                                
    const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();
    const BasicColor BLACK = BasicColorFactory::getInstance().BLACK;
    public: void paint(Graphics graphics);
                                }
                            
                                :

                            NullPaintable::getInstance();

    ;

    private: const BasicArrayList gameKeyEventList = BasicArrayListD();

public: AllBinaryGameLayer(std::string name, Rectangle layerInfo, ViewPositionBase viewPosition);

                //@Throws(Exception.constructor)
            
    public: void set(GL gl);

    public: void move();

    public: BasicArrayList getGameKeyEventList();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager);

    public: void onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    public: void onViewPositionChangeEvent();

                //@Throws(Exception.constructor)
            
    public: void onChangeEvent(ViewPositionEvent layerManagerEvent);

    public: void paintFirst(Graphics graphics);

    public: void paintDebug(Graphics graphics);

    public: void setWidth(int32_t width);

    public: void setHeight(int32_t height);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H
