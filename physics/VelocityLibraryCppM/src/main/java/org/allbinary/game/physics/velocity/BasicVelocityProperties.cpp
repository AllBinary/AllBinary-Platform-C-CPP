
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_CPP
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/vector/AxisMathVectorUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/physics/velocity/BasicVelocityInterface.h"


BasicVelocityProperties::BasicVelocityProperties() : logUtil(LogUtil::getInstance()), axisMathVectorUtil(AxisMathVectorUtil::getInstance()), directionUtil(DirectionUtil::getInstance()){
this->velocityXBasicDecimal= new BasicDecimal(0);
    
this->velocityYBasicDecimal= new BasicDecimal(0);
    
this->velocityZBasicDecimal= new BasicDecimal(0);
    
}


    auto BasicVelocityProperties::zero() -> void{
this->velocityXBasicDecimal->setint(0);
    
this->velocityYBasicDecimal->setint(0);
    
this->velocityZBasicDecimal->setint(0);
    
}


    auto BasicVelocityProperties::getVelocityXBasicDecimalP() -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->velocityXBasicDecimal;
    
}


    auto BasicVelocityProperties::getVelocityYBasicDecimalP() -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->velocityYBasicDecimal;
    
}


    auto BasicVelocityProperties::getVelocityZBasicDecimalP() -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->velocityZBasicDecimal;
    
}


    auto BasicVelocityProperties::setVelocityWithBigDecimalAndDirection(BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection) -> void{

    Angle* angle = this->directionUtil->getAngle(direction);;
    

    Angle* otherAngle = this->directionUtil->getAngle(otherDirection);;
    
this->setVelocityWithBigDecimal(magnitudeBasicDecimal, angle, otherAngle);
    
}


    auto BasicVelocityProperties::setVelocityWithDirection(int64_t magnitude, Direction* direction, Direction* otherDirection) -> void{

    Angle* angle = this->directionUtil->getAngle(direction);;
    

    Angle* otherAngle = this->directionUtil->getAngle(otherDirection);;
    
this->setVelocity(magnitude, angle, otherAngle);
    
}


    auto BasicVelocityProperties::addVelocityWithBigDecimalAndDirection(BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection) -> void{

    Angle* angle = this->directionUtil->getAngle(direction);;
    

    Angle* otherAngle = this->directionUtil->getAngle(otherDirection);;
    
this->addVelocityWithBigDecimal(magnitudeBasicDecimal, angle, otherAngle);
    
}


    auto BasicVelocityProperties::addVelocityWithDirection(int64_t magnitude, Direction* direction, Direction* otherDirection) -> void{

    Angle* angle = this->directionUtil->getAngle(direction);;
    

    Angle* otherAngle = this->directionUtil->getAngle(otherDirection);;
    
this->addVelocity(magnitude, angle, otherAngle);
    
}


    auto BasicVelocityProperties::setVelocityWithBigDecimal(BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle) -> void{

    int64_t magnitude = magnitudeBasicDecimal->getUnscaled();;
    
this->setVelocity(magnitude, angle, otherAngle);
    
}


    auto BasicVelocityProperties::addVelocityWithBigDecimal(BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle) -> void{

    int64_t magnitude = magnitudeBasicDecimal->getUnscaled();;
    
this->addVelocity(magnitude, angle, otherAngle);
    
}


    auto BasicVelocityProperties::setVelocity(int64_t magnitude, Angle* angle, Angle* otherAngle) -> void{
this->setVelocityi(magnitude, static_cast<int32_t>(angle->getValue()), static_cast<int32_t>(otherAngle->getValue()));
    
}


    auto BasicVelocityProperties::addVelocity(int64_t magnitude, Angle* angle, Angle* otherAngle) -> void{
this->addVelocityi(magnitude, static_cast<int32_t>(angle->getValue()), static_cast<int32_t>(otherAngle->getValue()));
    
}


    auto BasicVelocityProperties::setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle) -> void{

    int64_t xVector = (this->axisMathVectorUtil->calculateX(magnitude, angle) /this->velocityXBasicDecimal->getScaledFactorValue());;
    

    int64_t yVector = (this->axisMathVectorUtil->calculateY(magnitude, angle) /this->velocityYBasicDecimal->getScaledFactorValue());;
    

    int64_t zVector = (this->axisMathVectorUtil->calculateZ(magnitude, otherAngle) /this->velocityZBasicDecimal->getScaledFactorValue());;
    
this->velocityXBasicDecimal->setlong(xVector);
    
this->velocityYBasicDecimal->setlong(yVector);
    
this->velocityZBasicDecimal->setlong(zVector);
    
}


    auto BasicVelocityProperties::addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle) -> void{

    int64_t xVector = (this->axisMathVectorUtil->calculateX(magnitude, angle) /this->velocityXBasicDecimal->getScaledFactorValue());;
    

    int64_t yVector = (this->axisMathVectorUtil->calculateY(magnitude, angle) /this->velocityYBasicDecimal->getScaledFactorValue());;
    

    int64_t zVector = (this->axisMathVectorUtil->calculateZ(magnitude, otherAngle) /this->velocityZBasicDecimal->getScaledFactorValue());;
    
this->velocityXBasicDecimal->addlong(xVector);
    
this->velocityYBasicDecimal->addlong(yVector);
    
this->velocityZBasicDecimal->addlong(zVector);
    
}


    auto BasicVelocityProperties::toString() -> std::string{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    PositionStrings* positionStrings = PositionStrings::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    
stringBuffer->append("Velocity ");
    
stringBuffer->append(positionStrings->X_LABEL);
    
stringBuffer->append(stringUtil->toString(this->velocityXBasicDecimal));
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(positionStrings->Y_LABEL);
    
stringBuffer->append(stringUtil->toString(this->velocityYBasicDecimal));
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(positionStrings->Z_LABEL);
    
stringBuffer->append(stringUtil->toString(this->velocityZBasicDecimal));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_CPP
