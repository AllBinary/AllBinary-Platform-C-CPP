
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/direction/DirectionalCompositeInterface.h>

      
#include <org/allbinary/direction/DirectionalInterface.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DiveAndDirectionalTrackingAI: public BasicAI: public TrackingEventListenerInterface, public DestroyedEventListenerInterface {
        

    private: const mathUtil: MathUtil = MathUtil.getInstance()!;

    private: const directionFactory: DirectionFactory = DirectionFactory.getInstance()!;

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(500);

    private: const list: BasicArrayList = new BasicArrayListD();

    private: const directionalInterface: DirectionalInterface;

    private: const velocityInterface: BasicVelocityProperties;

    private: const directionToKeyMap: std::vector<int32_t> = [Canvas.LEFT,Canvas.DOWN,Canvas.UP,Canvas.RIGHT];

    private: initialDropped: bool= false;

    private: diveP: bool= false;

    private: directionOfTarget: Direction = Direction.getInstance(0)!;

    private: const MIN_DISTANCE: int32_t = 40;

    private: lastTrackingLayerInterface: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

    private: const artificialIntelligenceInterface: ArtificialIntelligenceInterface;

    private: const aiVistor: Visitor;

    private: lastDirection: Direction = DirectionFactory.getInstance()!.NO_DIRECTION;

public constructor (AllBinaryLayer ownerLayerInterface, ArtificialIntelligenceInterface artificialIntelligenceInterface, GameInput gameInput, Visitor visitor);

                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager);

    init();

                //@Throws(Exception.constructor)
            
    target(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    verticalTargeting(int32_t x);

                //@Throws(Exception.constructor)
            
    horizontalTargeting(int32_t y);

    setDive();

                //@Throws(Exception.constructor)
            
    moveRight();

                //@Throws(Exception.constructor)
            
    moveLeft();

                //@Throws(Exception.constructor)
            
    moveDown();

                //@Throws(Exception.constructor)
            
    moveUp();

                //@Throws(Exception.constructor)
            
    dive();

                //@Throws(Exception.constructor)
            
    attack();

                //@Throws(Exception.constructor)
            
    drop();

    bool isBeyondTarget();

    public onEvent(AllBinaryEventObject eventObject);

    public onMovement(TrackingEvent trackingEvent);

    public onDestroyed(DestroyedEvent destroyedEvent);

    public setLastDirection(Direction lastDirection);

    public setLastKey(int32_t lastKey);

    public Direction getLastDirection();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H
