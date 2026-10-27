
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_CPP
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/physics/velocity/VelocityProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"

auto VelocityProperties::NULL_VELOCITY_PROPERTIES_owner() -> VelocityProperties* { static std::unique_ptr<VelocityProperties> value(new VelocityProperties(0, 0)); return value.get(); }
VelocityProperties* VelocityProperties::NULL_VELOCITY_PROPERTIES = VelocityProperties::NULL_VELOCITY_PROPERTIES_owner();

VelocityProperties::VelocityProperties(int32_t maxForwardVelocity, int32_t maxReverseVelocity){
this->setMaxForwardVelocity(maxForwardVelocity);
    
this->setMaxReverseVelocity(maxReverseVelocity);
    
}


    auto VelocityProperties::getMaxForwardVelocity() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxForwardVelocity;
    
}


    auto VelocityProperties::setMaxForwardVelocity(int32_t maxForwardVelocity) -> void{
this->maxForwardVelocity= maxForwardVelocity;
    
}


    auto VelocityProperties::getMaxReverseVelocity() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxReverseVelocity;
    
}


    auto VelocityProperties::setMaxReverseVelocity(int32_t maxReverseVelocity) -> void{
this->maxReverseVelocity= maxReverseVelocity;
    
}


    auto VelocityProperties::limitMaxXYForwardVelocity() -> void{
this->limitMaxXYVelocity(this->getMaxForwardVelocity());
    
}


    auto VelocityProperties::limitMaxXYReverseVelocity() -> void{
this->limitMaxXYVelocity(this->getMaxReverseVelocity());
    
}


    auto VelocityProperties::limitMaxYForwardVelocity() -> void{
this->limitMaxYVelocity(this->getMaxForwardVelocity());
    
}


    auto VelocityProperties::limitMaxYReverseVelocity() -> void{
this->limitMaxYVelocity(this->getMaxReverseVelocity());
    
}


    auto VelocityProperties::limitMaxXForwardVelocity() -> void{
this->limitMaxXVelocity(this->getMaxForwardVelocity());
    
}


    auto VelocityProperties::limitMaxXReverseVelocity() -> void{
this->limitMaxXVelocity(this->getMaxReverseVelocity());
    
}


    auto VelocityProperties::isOverXYMaxForwardVelocity() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isOverXYMaxVelocity(this->getMaxForwardVelocity());;
    
}


    auto VelocityProperties::isOverXYMaxReverseVelocity() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isOverXYMaxVelocity(this->getMaxReverseVelocity());;
    
}


    auto VelocityProperties::limitXYToForwardAndReverseMaxVelocity() -> void{
this->limitMaxXYForwardVelocity();
    
this->limitMaxXYReverseVelocity();
    
}


    auto VelocityProperties::limitMaxXYVelocity(int32_t maxVelocity) -> void{
this->limitMaxXVelocity(maxVelocity);
    
this->limitMaxYVelocity(maxVelocity);
    
}


    auto VelocityProperties::limitMaxPositiveYVelocity(int32_t maxVelocity) -> void{

                        if(this->velocityYBasicDecimal->getUnscaled() > maxVelocity)
                        
                                    {
                                    this->velocityYBasicDecimal->setint(maxVelocity);
    

                                    }
                                
}


    auto VelocityProperties::limitMaxNegativeYVelocity(int32_t maxVelocity) -> void{

                        if(this->velocityYBasicDecimal->getUnscaled() <  -maxVelocity)
                        
                                    {
                                    this->velocityYBasicDecimal->setint( -maxVelocity);
    

                                    }
                                
}


    auto VelocityProperties::limitMaxYVelocity(int32_t maxVelocity) -> void{
this->limitMaxPositiveYVelocity(maxVelocity);
    
this->limitMaxNegativeYVelocity(maxVelocity);
    
}


    auto VelocityProperties::limitMaxXVelocity(int32_t maxVelocity) -> void{

                        if(this->velocityXBasicDecimal->getUnscaled() > maxVelocity)
                        
                                    {
                                    this->velocityXBasicDecimal->setint(maxVelocity);
    

                                    }
                                

                        if(this->velocityXBasicDecimal->getUnscaled() <  -maxVelocity)
                        
                                    {
                                    this->velocityXBasicDecimal->setint( -maxVelocity);
    

                                    }
                                
}


    auto VelocityProperties::isOverXYMaxVelocity(int32_t maxVelocity) -> bool{

                        if(this->velocityXBasicDecimal->getUnscaled() > maxVelocity)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this->velocityXBasicDecimal->getUnscaled() <  -maxVelocity)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this->velocityYBasicDecimal->getUnscaled() > maxVelocity)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                        if(this->velocityYBasicDecimal->getUnscaled() <  -maxVelocity)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto VelocityProperties::setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle) -> void{
BasicVelocityProperties::setVelocityi(magnitude, angle, otherAngle);
    
this->limitXYToForwardAndReverseMaxVelocity();
    
}


    auto VelocityProperties::addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle) -> void{
BasicVelocityProperties::addVelocityi(magnitude, angle, otherAngle);
    
this->limitXYToForwardAndReverseMaxVelocity();
    
}




        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYPROPERTIES_CPP
