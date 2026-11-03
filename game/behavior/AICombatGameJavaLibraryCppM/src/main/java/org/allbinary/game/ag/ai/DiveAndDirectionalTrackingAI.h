
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Canvas;
class ArtificialIntelligenceInterface;
class Direction;
class DirectionFactory;
class DirectionalCompositeInterface;
class DirectionalInterface;
#include <org/allbinary/game/ai/BasicAI.h>
class DestroyedEvent;
class DestroyedEventHandler;
#include <org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>
class GameInput;
class BasicVelocityProperties;
class VelocityInterfaceCompositeInterface;
class TrackingEvent;
class TrackingEventHandler;
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>
class AllBinaryLayer;
class AllBinaryLayerManager;
class ForcedLogUtil;
class MathUtil;
class StringMaker;
class StringUtil;
class AllBinaryEventObject;
class EventStrings;
class Visitor;
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DiveAndDirectionalTrackingAI: public BasicAI, public virtual TrackingEventListenerInterface, public virtual DestroyedEventListenerInterface {

    private: MathUtil* mathUtil;

    private: DirectionFactory* directionFactory;

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

    private: TimeDelayHelper* timeDelayHelper;

    private: BasicArrayList* list;

    private: DirectionalInterface* directionalInterface;

    private: BasicVelocityProperties* velocityInterface;

    private: std::vector<int32_t> directionToKeyMap;

    private: bool initialDropped= false;

    private: bool diveP= false;

    private: Direction* directionOfTarget;

    private: const int32_t MIN_DISTANCE = 40;

    private: AllBinaryLayer* lastTrackingLayerInterface;

    private: ArtificialIntelligenceInterface* artificialIntelligenceInterface;

    private: Visitor* aiVistor;

    private: Direction* lastDirection;

public: DiveAndDirectionalTrackingAI(AllBinaryLayer* ownerLayerInterface, ArtificialIntelligenceInterface* artificialIntelligenceInterface, GameInput* gameInput, Visitor* visitor);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager);

    private: void init();

                //@Throws(Exception.constructor)
            
    private: void target(AllBinaryLayerManager* allBinaryLayerManager);

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

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onMovement(TrackingEvent* trackingEvent);

    public: void onDestroyed(DestroyedEvent* destroyedEvent);

    public: void setLastDirection(Direction* lastDirection);

    public: void setLastKey(int32_t lastKey);

    public: Direction* getLastDirection();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/ai/ArtificialIntelligenceInterface.h>)
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>
#endif
#if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionalCompositeInterface.h>)
#include <org/allbinary/direction/DirectionalCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionalInterface.h>)
#include <org/allbinary/direction/DirectionalInterface.h>
#endif
#if __has_include(<org/allbinary/game/ai/BasicAI.h>)
#include <org/allbinary/game/ai/BasicAI.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyedEvent.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/BasicVelocityProperties.h>)
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>)
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEvent.h>)
#include <org/allbinary/game/tracking/TrackingEvent.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEventHandler.h>)
#include <org/allbinary/game/tracking/TrackingEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEventListenerInterface.h>)
#include <org/allbinary/game/tracking/TrackingEventListenerInterface.h>
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
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelper.h>)
#include <org/allbinary/time/GameTickTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
