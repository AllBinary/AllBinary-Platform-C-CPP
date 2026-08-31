
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Math.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/math/AngleIncrementInfo.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicDirectionAIHelper
            : public Object
         {
        

    private: name: string;

    private: angleInfo: AngleInfo;

public constructor (string name, AngleInfo angleInfo){

            super();
        this.name= name;
    
this.angleInfo= angleInfo;
    
}


    int32_t turnAI(int32_t frame){

    keyDirection: int32_t =  -1;;
    

    directionAngle: int32_t = this.angleInfo!.getAngleIncrementInfo()!.getFrameAngle(frame)!;;
    

    angle: int16_t = this.angleInfo!.getAngle()!;;
    

    degrees: int32_t = Math.abs(directionAngle -angle)!;;
    

                        if(degrees < 180)
                        
                                    {
                                    
                        if(angle > directionAngle)
                        
                                    {
                                    keyDirection= Canvas.LEFT;
    

                                    }
                                
                             else 
                        if(angle < directionAngle)
                        
                                    {
                                    keyDirection= Canvas.RIGHT;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(angle > directionAngle)
                        
                                    {
                                    keyDirection= Canvas.RIGHT;
    

                                    }
                                
                             else 
                        if(angle < directionAngle)
                        
                                    {
                                    keyDirection= Canvas.LEFT;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keyDirection;
    
}


    int32_t getAIKeyPressed(Integer frame){

    angle: int16_t = this.angleInfo!.getAngleIncrementInfo()!.getFrameAngle(frame.intValue());;
    

                        if(this.angleInfo!.getAngle() != angle)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.turnAI(frame.intValue());;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Canvas.UP;
    

                        }
                            
}


    public int32_t getAIKeyPressedFromDirection(Direction geographicMapDirectionData){

    keyDirection: int32_t =  -1;;
    

    angleIncrementInfo: AngleIncrementInfo = this.angleInfo!.getAngleIncrementInfo()!;;
    

    directionFactory: DirectionFactory = DirectionFactory.getInstance()!;;
    

                        if(geographicMapDirectionData == directionFactory!.DOWN)
                        
                                    {
                                    keyDirection= this.getAIKeyPressed(angleIncrementInfo!.DOWN_FRAME);
    

                                    }
                                
                             else 
                        if(geographicMapDirectionData == directionFactory!.UP)
                        
                                    {
                                    keyDirection= this.getAIKeyPressed(angleIncrementInfo!.UP_FRAME);
    

                                    }
                                
                             else 
                        if(geographicMapDirectionData == directionFactory!.LEFT)
                        
                                    {
                                    keyDirection= this.getAIKeyPressed(angleIncrementInfo!.LEFT_FRAME);
    

                                    }
                                
                             else 
                        if(geographicMapDirectionData == directionFactory!.RIGHT)
                        
                                    {
                                    keyDirection= this.getAIKeyPressed(angleIncrementInfo!.RIGHT_FRAME);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keyDirection;
    
}


    AngleInfo getAngleInfoP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.angleInfo;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


};

            

