
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

            #include <vector>
        
            #include "java/lang/Exception.h"
        
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
        
class DiveAndDirectionalTrackingAI: public BasicAI, public TrackingEventListenerInterface, public DestroyedEventListenerInterface {

    private: const MathUtil mathUtil = MathUtil::getInstance();

    private: const DirectionFactory directionFactory = DirectionFactory::getInstance();

    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(500);

    private: const BasicArrayList list = BasicArrayListD();

    private: DirectionalInterface directionalInterface;

    private: BasicVelocityProperties velocityInterface;

    private: const std::vector<int32_t> directionToKeyMap = {Canvas::LEFT,Canvas::DOWN,Canvas::UP,Canvas::RIGHT};

    private: bool initialDropped= false;

    private: bool diveP= false;

    private: Direction directionOfTarget = Direction::getInstance(0);

    private: const int32_t MIN_DISTANCE = 40;

    private: AllBinaryLayer lastTrackingLayerInterface = AllBinaryLayer::NULL_ALLBINARY_LAYER;

    private: ArtificialIntelligenceInterface artificialIntelligenceInterface;

    private: Visitor aiVistor;

    private: Direction lastDirection = DirectionFactory::getInstance().NO_DIRECTION;

public: DiveAndDirectionalTrackingAI(AllBinaryLayer ownerLayerInterface, ArtificialIntelligenceInterface artificialIntelligenceInterface, GameInput gameInput, Visitor visitor);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager);

    private: void init();

                //@Throws(Exception.constructor)
            
    private: void target(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    private: void verticalTargeting(int32_t x);

                //@Throws(Exception.constructor)
            
    private: void horizontalTargeting(int32_t y);

    private: void setDive();

                //@Throws(Exception.constructor)
            
    private: void moveRight();

                //@Throws(Exception.constructor)
            
    private: void moveLeft();

                //@Throws(Exception.constructor)
            
    private: void moveDown();

                //@Throws(Exception.constructor)
            
    private: void moveUp();

                //@Throws(Exception.constructor)
            
    private: void dive();

                //@Throws(Exception.constructor)
            
    private: void attack();

                //@Throws(Exception.constructor)
            
    private: void drop();

    private: bool isBeyondTarget();

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void onMovement(TrackingEvent trackingEvent);

    public: void onDestroyed(DestroyedEvent destroyedEvent);

    public: void setLastDirection(Direction lastDirection);

    public: void setLastKey(int32_t lastKey);

    public: Direction getLastDirection();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H
