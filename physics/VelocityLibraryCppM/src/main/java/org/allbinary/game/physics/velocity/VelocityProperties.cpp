
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicVelocityProperties.h"
#include "VelocityInterface.h"

class VelocityProperties: public BasicVelocityProperties: public VelocityInterface {
        

    public static const NULL_VELOCITY_PROPERTIES: VelocityProperties = new VelocityProperties(0, 0);

    private: maxForwardVelocity: int32_t= 0;

    private: maxReverseVelocity: int32_t= 0;

public constructor (int32_t maxForwardVelocity, int32_t maxReverseVelocity){

            super();
        this.setMaxForwardVelocity(maxForwardVelocity);
    
this.setMaxReverseVelocity(maxReverseVelocity);
    
}


    public int32_t getMaxForwardVelocity(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxForwardVelocity;
    
}


    public setMaxForwardVelocity(int32_t maxForwardVelocity){
this.maxForwardVelocity= maxForwardVelocity;
    
}


    public int32_t getMaxReverseVelocity(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxReverseVelocity;
    
}


    public setMaxReverseVelocity(int32_t maxReverseVelocity){
this.maxReverseVelocity= maxReverseVelocity;
    
}


    public limitMaxXYForwardVelocity(){
this.limitMaxXYVelocity(this.getMaxForwardVelocity());
    
}


    public limitMaxXYReverseVelocity(){
this.limitMaxXYVelocity(this.getMaxReverseVelocity());
    
}


    public limitMaxYForwardVelocity(){
this.limitMaxYVelocity(this.getMaxForwardVelocity());
    
}


    public limitMaxYReverseVelocity(){
this.limitMaxYVelocity(this.getMaxReverseVelocity());
    
}


    public limitMaxXForwardVelocity(){
this.limitMaxXVelocity(this.getMaxForwardVelocity());
    
}


    public limitMaxXReverseVelocity(){
this.limitMaxXVelocity(this.getMaxReverseVelocity());
    
}


    public bool isOverXYMaxForwardVelocity(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isOverXYMaxVelocity(this.getMaxForwardVelocity());;
    
}


    public bool isOverXYMaxReverseVelocity(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isOverXYMaxVelocity(this.getMaxReverseVelocity());;
    
}


    public limitXYToForwardAndReverseMaxVelocity(){
this.limitMaxXYForwardVelocity();
    
this.limitMaxXYReverseVelocity();
    
}


    public limitMaxXYVelocity(int32_t maxVelocity){
this.limitMaxXVelocity(maxVelocity);
    
this.limitMaxYVelocity(maxVelocity);
    
}


    public limitMaxPositiveYVelocity(int32_t maxVelocity){

                        if(this.velocityYBasicDecimal!.getUnscaled() > maxVelocity)
                        
                                    {
                                    this.velocityYBasicDecimal!.setint(maxVelocity);
    

                                    }
                                
}


    public limitMaxNegativeYVelocity(int32_t maxVelocity){

                        if(this.velocityYBasicDecimal!.getUnscaled() <  -maxVelocity)
                        
                                    {
                                    this.velocityYBasicDecimal!.setint( -maxVelocity);
    

                                    }
                                
}


    public limitMaxYVelocity(int32_t maxVelocity){
this.limitMaxPositiveYVelocity(maxVelocity);
    
this.limitMaxNegativeYVelocity(maxVelocity);
    
}


    public limitMaxXVelocity(int32_t maxVelocity){

                        if(this.velocityXBasicDecimal!.getUnscaled() > maxVelocity)
                        
                                    {
                                    this.velocityXBasicDecimal!.setint(maxVelocity);
    

                                    }
                                

                        if(this.velocityXBasicDecimal!.getUnscaled() <  -maxVelocity)
                        
                                    {
                                    this.velocityXBasicDecimal!.setint( -maxVelocity);
    

                                    }
                                
}


    public bool isOverXYMaxVelocity(int32_t maxVelocity){

                        if(this.velocityXBasicDecimal!.getUnscaled() > maxVelocity)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this.velocityXBasicDecimal!.getUnscaled() <  -maxVelocity)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this.velocityYBasicDecimal!.getUnscaled() > maxVelocity)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this.velocityYBasicDecimal!.getUnscaled() <  -maxVelocity)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle){
super.setVelocityi(magnitude, angle, otherAngle);
    
this.limitXYToForwardAndReverseMaxVelocity();
    
}


    public addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle){
super.addVelocityi(magnitude, angle, otherAngle);
    
this.limitXYToForwardAndReverseMaxVelocity();
    
}


};

            

