
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

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SWTUtil.h"
#include "GameLayerUtil.h"

class AllBinaryGameLayer: public AllBinaryLayer: public ViewPositionEventListenerInterface, public OpenGLSurfaceChangedInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;

    const RED: BasicColor = BasicColorFactory.getInstance()!.RED;

    private: const paintable: Paintable = SWTUtil.isSWT
                        ?       
                                new class extends Paintable
                                {
                                
    private: const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;
    private: const BLACK: BasicColor = BasicColorFactory.getInstance()!.BLACK;
    public paint(Graphics graphics);
                                }
                            
                                :

                            NullPaintable.getInstance();

    ;

    private: const gameKeyEventList: BasicArrayList = new BasicArrayListD();

public constructor (string name, Rectangle layerInfo, ViewPositionBase viewPosition);

                //@Throws(Exception.constructor)
            
    public set(GL gl);

    public move();

    public BasicArrayList getGameKeyEventList();

                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    public processTick(AllBinaryLayerManager allBinaryLayerManager);

    public onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    public onViewPositionChangeEvent();

                //@Throws(Exception.constructor)
            
    public onChangeEvent(ViewPositionEvent layerManagerEvent);

    public paintFirst(Graphics graphics);

    public paintDebug(Graphics graphics);

    public setWidth(int32_t width);

    public setHeight(int32_t height);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYER_H
