
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

public constructor (AllBinaryLayer ownerLayerInterface, ArtificialIntelligenceInterface artificialIntelligenceInterface, GameInput gameInput, Visitor visitor){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.aiVistor= visitor;
    
this.artificialIntelligenceInterface= artificialIntelligenceInterface;
    

    directionalCompositeInterface: DirectionalCompositeInterface = this.getOwnerLayerInterface() as unknown as DirectionalCompositeInterface;;
    
this.directionalInterface= directionalCompositeInterface!.getDirectionalInterface();
    

    velocityInterfaceCompositeInterface: VelocityInterfaceCompositeInterface = this.getOwnerLayerInterface() as unknown as VelocityInterfaceCompositeInterface;;
    
this.velocityInterface= velocityInterfaceCompositeInterface!.getVelocityProperties();
    
DestroyedEventHandler.getInstance()!.addListenerInterface(this);
    
this.init();
    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){

                        if(this.isBeyondTarget())
                        
                                    {
                                    this.init();
    
this.velocityInterface!.zero();
    

                                    }
                                

                        if(!this.diveP)
                        
                                    {
                                    this.target(allBinaryLayerManager);
    

                                    }
                                
                        else {
                            this.dive();
    
this.attack();
    

                        }
                            
this.list.clear();
    
}


    init(){
this.diveP= false;
    
this.directionOfTarget= DirectionFactory.getInstance()!.NOT_BORDERED_WITH;
    
TrackingEventHandler.getInstance()!.addListenerInterface(this);
    
}


                //@Throws(Exception.constructor)
            
    target(AllBinaryLayerManager allBinaryLayerManager){

                        if(this.list.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    lastTrackingEvent: TrackingEvent = this.list.removeAt(0) as TrackingEvent;;
    
this.lastTrackingLayerInterface= lastTrackingEvent!.getLayerInterface();
    

    layerInterface: AllBinaryLayer = this.lastTrackingLayerInterface;;
    

    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

                        if(layerInterface!.getGroupInterface() == ownerLayerInterface!.getGroupInterface())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    x: int32_t = this.lastTrackingLayerInterface!.getXP()!;;
    

    y: int32_t = this.lastTrackingLayerInterface!.getYP()!;;
    

    yDistance: int32_t = ownerLayerInterface!.getYP() -y -ownerLayerInterface!.getHeight();;
    

    xDistance: int32_t = ownerLayerInterface!.getXP() -x -ownerLayerInterface!.getWidth();;
    

    directionFactory: DirectionFactory = DirectionFactory.getInstance()!;;
    

                        if(this.mathUtil!.abs(yDistance) > this.mathUtil!.abs(xDistance))
                        
                                    {
                                    
                        if(yDistance > this.MIN_DISTANCE)
                        
                                    {
                                    this.directionOfTarget= directionFactory!.UP;
    

                                    }
                                
                             else 
                        if(yDistance <  -this.MIN_DISTANCE)
                        
                                    {
                                    this.directionOfTarget= directionFactory!.DOWN;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(xDistance > this.MIN_DISTANCE)
                        
                                    {
                                    this.directionOfTarget= directionFactory!.LEFT;
    

                                    }
                                
                             else 
                        if(xDistance <  -this.MIN_DISTANCE)
                        
                                    {
                                    this.directionOfTarget= directionFactory!.RIGHT;
    

                                    }
                                

                        }
                            

                        if(!this.initialDropped && this.directionOfTarget != directionFactory!.NOT_BORDERED_WITH)
                        
                                    {
                                    this.drop();
    

                                    }
                                

                        if(this.initialDropped)
                        
                                    {
                                    
                        if(this.directionOfTarget == directionFactory!.UP || this.directionOfTarget == directionFactory!.DOWN)
                        
                                    {
                                    this.verticalTargeting(x);
    

                                    }
                                
                             else 
                        if(this.directionOfTarget == directionFactory!.LEFT || this.directionOfTarget == directionFactory!.RIGHT)
                        
                                    {
                                    this.horizontalTargeting(y);
    

                                    }
                                
                        else {
                            this.artificialIntelligenceInterface!.processAI(allBinaryLayerManager);
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    verticalTargeting(int32_t x){

    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

                        if(ownerLayerInterface!.getXP() < x)
                        
                                    {
                                    this.moveRight();
    

                                    }
                                

                        if(ownerLayerInterface!.getXP() > x)
                        
                                    {
                                    this.moveLeft();
    

                                    }
                                

                        if(ownerLayerInterface!.getXP() > x -3 && ownerLayerInterface!.getXP() < x +3)
                        
                                    {
                                    this.setDive();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    horizontalTargeting(int32_t y){

    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

                        if(ownerLayerInterface!.getYP() < y)
                        
                                    {
                                    this.moveDown();
    

                                    }
                                

                        if(ownerLayerInterface!.getYP() > y)
                        
                                    {
                                    this.moveUp();
    

                                    }
                                

                        if(ownerLayerInterface!.getYP() > y -3 && ownerLayerInterface!.getYP() < y +3)
                        
                                    {
                                    this.setDive();
    

                                    }
                                
}


    setDive(){
this.diveP= true;
    
this.velocityInterface!.zero();
    
TrackingEventHandler.getInstance()!.removeListener(this);
    
}


                //@Throws(Exception.constructor)
            
    moveRight(){
this.setLastDirection(this.directionFactory!.RIGHT);
    
this.directionalInterface!.setFrameByDirection(this.lastDirection);
    
this.aiVistor!.visit(this);
    
}


                //@Throws(Exception.constructor)
            
    moveLeft(){
this.setLastDirection(this.directionFactory!.LEFT);
    
this.directionalInterface!.setFrameByDirection(this.lastDirection);
    
this.aiVistor!.visit(this);
    
}


                //@Throws(Exception.constructor)
            
    moveDown(){
this.setLastDirection(this.directionFactory!.DOWN);
    
this.directionalInterface!.setFrameByDirection(this.lastDirection);
    
this.aiVistor!.visit(this);
    
}


                //@Throws(Exception.constructor)
            
    moveUp(){
this.setLastDirection(this.directionFactory!.UP);
    
this.directionalInterface!.setFrameByDirection(this.lastDirection);
    
this.aiVistor!.visit(this);
    
}


                //@Throws(Exception.constructor)
            
    dive(){
this.directionalInterface!.setFrameByDirection(this.directionOfTarget);
    
this.aiVistor!.visit(this);
    
}


                //@Throws(Exception.constructor)
            
    attack(){
super.processKeyAI(Canvas.KEY_NUM1);
    
}


                //@Throws(Exception.constructor)
            
    drop(){

                        if(this.timeDelayHelper!.isTime(this.gameTickTimeDelayHelper!.startTime))
                        
                                    {
                                    this.initialDropped= true;
    
this.aiVistor!.visit(this);
    

                                    }
                                
}


    bool isBeyondTarget(){

                        if(this.directionOfTarget == this.directionFactory!.DOWN)
                        
                                    {
                                    
                        if(this.getOwnerLayerInterface()!.getYP() > this.lastTrackingLayerInterface!.getYP() +this.MIN_DISTANCE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            

                                    }
                                
                             else 
                        if(this.directionOfTarget == this.directionFactory!.UP)
                        
                                    {
                                    
                        if(this.getOwnerLayerInterface()!.getYP() < this.lastTrackingLayerInterface!.getYP() +this.MIN_DISTANCE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            

                                    }
                                
                             else 
                        if(this.directionOfTarget == this.directionFactory!.RIGHT)
                        
                                    {
                                    
                        if(this.getOwnerLayerInterface()!.getXP() > this.lastTrackingLayerInterface!.getXP() +this.MIN_DISTANCE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            

                                    }
                                
                             else 
                        if(this.directionOfTarget == this.directionFactory!.LEFT)
                        
                                    {
                                    
                        if(this.getOwnerLayerInterface()!.getXP() < this.lastTrackingLayerInterface!.getXP() +this.MIN_DISTANCE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    public onMovement(TrackingEvent trackingEvent){
this.list.add(trackingEvent);
    
}


    public onDestroyed(DestroyedEvent destroyedEvent){

                        if(this.getOwnerLayerInterface() == destroyedEvent!.getLayerInterface())
                        
                                    {
                                    TrackingEventHandler.getInstance()!.removeListener(this);
    
DestroyedEventHandler.getInstance()!.removeListener(this);
    

                                    }
                                
}


    public setLastDirection(Direction lastDirection){
this.lastDirection= lastDirection;
    

    value: int32_t = this.getLastDirection()!.getValue()!;;
    

                        if(value < 4)
                        
                                    {
                                    super.setLastKey(this.directionToKeyMap[value]!);
    

                                    }
                                
}


    public setLastKey(int32_t lastKey){
super.setLastKey(lastKey);
    

                        if(this.getLastKey() == Canvas.LEFT)
                        
                                    {
                                    this.lastDirection= DirectionFactory.getInstance()!.LEFT;
    

                                    }
                                
                             else 
                        if(this.getLastKey() == Canvas.DOWN)
                        
                                    {
                                    this.lastDirection= DirectionFactory.getInstance()!.DOWN;
    

                                    }
                                
                             else 
                        if(this.getLastKey() == Canvas.UP)
                        
                                    {
                                    this.lastDirection= DirectionFactory.getInstance()!.UP;
    

                                    }
                                
                             else 
                        if(this.getLastKey() == Canvas.RIGHT)
                        
                                    {
                                    this.lastDirection= DirectionFactory.getInstance()!.RIGHT;
    

                                    }
                                
}


    public Direction getLastDirection(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastDirection;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(super.toString());
    
stringBuffer!.append(" LastDirection: ");
    
stringBuffer!.append(StringUtil.getInstance()!.toString(this.getLastDirection()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

