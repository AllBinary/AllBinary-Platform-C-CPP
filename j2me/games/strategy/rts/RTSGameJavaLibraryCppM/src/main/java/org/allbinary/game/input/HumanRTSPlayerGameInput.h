
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/form/RTSFormInput.h>

      
#include <org/allbinary/game/layer/MultiSelectPaintable.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerInfoPaintable.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/input/motion/button/EndLevelNoBuildingSelectedTouchButtonsBuilder.h>

      
#include <org/allbinary/input/motion/button/EndLevelTouchButtonsBuilder.h>

      
#include <org/allbinary/input/motion/button/NoBuildingSelectedTouchButtonsBuilder.h>

      
#include <org/allbinary/input/motion/button/RTSTouchButtonsBuilder.h>

      
#include <org/allbinary/media/audio/SelectBuildingSound.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/paint/NullInitUpdatePaintable.h>

      
#include <org/allbinary/input/motion/button/TouchButtonsBuilderFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/RectangleCollisionUtil.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSPlayerGameInput.h"
#include "LayerPositionFinderInterface.h"
#include "SelectRTSLayerVisitorFactoryInterface.h"

class HumanRTSPlayerGameInput: public RTSPlayerGameInput: public BaseMotionGestureEventListener {
        

    private: isDragging: bool = false;

    const gameStateFactory: GameStateFactory = GameStateFactory.getInstance()!;

    private: const rectangleCollisionUtil: RectangleCollisionUtil = RectangleCollisionUtil.getInstance()!;

    private: const touchMotionGestureFactory: TouchMotionGestureFactory = TouchMotionGestureFactory.getInstance()!;

    private: const PRESSED: MotionGestureInput = this.touchMotionGestureFactory!.PRESSED;

    private: const RELEASED: MotionGestureInput = this.touchMotionGestureFactory!.RELEASED;

    private: const touchButtonsBuilderFactory: TouchButtonsBuilderFactory;

    private: const notYoursGameNotificationEvent: GameNotificationEvent;

    private: selectedRtsLayer: CollidableDestroyableDamageableLayer = CollidableDestroyableDamageableLayer.getNullInstance()!;

public constructor (AllBinaryGameCanvas gameCanvas, BasicArrayList inputList, int32_t playerInputId, RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, LayerPositionFinderInterface layerPositionFinderInterface, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface, TouchButtonsBuilderFactory touchButtonsBuilderFactory);

                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

                //@Throws(Exception.constructor)
            
    bool processDraggingMotionInput(AllBinaryLayerManager layerManager);

    private: startPoint: GPoint = PointFactory.getInstance()!.ZERO_ZERO;

    private: endPoint: GPoint = PointFactory.getInstance()!.ZERO_ZERO;

    const POSSIBLE: string = "Possible: ";

    const AT: string = "At: ";

    const METHOD: string = "makeSelection";

    const ADDING: string = "Adding: ";

    const SPACE: string = CommonSeps.getInstance()!.SPACE;

    makeSelection();

                //@Throws(Exception.constructor)
            
    processSelectionBoxMotionInput(AllBinaryLayerManager layerManager);

                //@Throws(Exception.constructor)
            
    public processMotionInput(AllBinaryLayerManager layerManager);

    public setSelectedRtsFormInput(RTSFormInput selectedRtsFormInput);

    updateFormForLayer(RTSLayer rtsLayer);

    updateForm(ScrollSelectionForm scrollSelectionForm, RTSFormInput rtfFormInput);

                //@Throws(Exception.constructor)
            
    public setSelectedRTSLayer(CollidableDestroyableDamageableLayer rtSLayer, GeographicMapCellPosition geographicMapCellPosition);

    private: const multiSelectPaintable: MultiSelectPaintable = new MultiSelectPaintable();

    public updatePaintable();

    public paint(Graphics graphics);

    public onMotionGestureEvent(MotionGestureEvent motionGestureEvent);

    public onScrolledMotionGestureEvent(MotionGestureEvent motionGestureEvent);

    CollidableDestroyableDamageableLayer getSelectedRtsLayer();

    setSelectedRtsLayer(CollidableDestroyableDamageableLayer selectedRtsLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_HUMANRTSPLAYERGAMEINPUT_H
