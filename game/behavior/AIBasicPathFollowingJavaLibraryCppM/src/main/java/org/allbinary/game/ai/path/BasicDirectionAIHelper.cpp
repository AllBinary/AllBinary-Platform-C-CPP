
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

    private: std::string name;

    private: AngleInfo angleInfo;

public: BasicDirectionAIHelper(std::string name, AngleInfo angleInfo){
this->name= name;
    
this->angleInfo= angleInfo;
    
}


    private: int32_t turnAI(int32_t frame){

    int32_t keyDirection =  -1;;
    

    int32_t directionAngle = this->angleInfo.getAngleIncrementInfo().getFrameAngle(frame);;
    

    int16_t angle = this->angleInfo.getAngle();;
    

    int32_t degrees = Math::abs(directionAngle -angle);;
    

                        if(degrees < 180)
                        
                                    {
                                    
                        if(angle > directionAngle)
                        
                                    {
                                    keyDirection= Canvas::LEFT;
    

                                    }
                                
                             else 
                        if(angle < directionAngle)
                        
                                    {
                                    keyDirection= Canvas::RIGHT;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(angle > directionAngle)
                        
                                    {
                                    keyDirection= Canvas::RIGHT;
    

                                    }
                                
                             else 
                        if(angle < directionAngle)
                        
                                    {
                                    keyDirection= Canvas::LEFT;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keyDirection;
    
}


    private: int32_t getAIKeyPressed(Integer frame){

    int16_t angle = this->angleInfo.getAngleIncrementInfo().getFrameAngle(frame.intValue());;
    

                        if(this->angleInfo.getAngle() != angle)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->turnAI(frame.intValue());;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Canvas::UP;
    

                        }
                            
}


    public: int32_t getAIKeyPressedFromDirection(Direction geographicMapDirectionData){

    int32_t keyDirection =  -1;;
    

    AngleIncrementInfo angleIncrementInfo = this->angleInfo.getAngleIncrementInfo();;
    

    DirectionFactory directionFactory = DirectionFactory::getInstance();;
    

                        if(geographicMapDirectionData == directionFactory.DOWN)
                        
                                    {
                                    keyDirection= this->getAIKeyPressed(angleIncrementInfo.DOWN_FRAME);
    

                                    }
                                
                             else 
                        if(geographicMapDirectionData == directionFactory.UP)
                        
                                    {
                                    keyDirection= this->getAIKeyPressed(angleIncrementInfo.UP_FRAME);
    

                                    }
                                
                             else 
                        if(geographicMapDirectionData == directionFactory.LEFT)
                        
                                    {
                                    keyDirection= this->getAIKeyPressed(angleIncrementInfo.LEFT_FRAME);
    

                                    }
                                
                             else 
                        if(geographicMapDirectionData == directionFactory.RIGHT)
                        
                                    {
                                    keyDirection= this->getAIKeyPressed(angleIncrementInfo.RIGHT_FRAME);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keyDirection;
    
}


    protected: AngleInfo getAngleInfoP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angleInfo;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


};

            

