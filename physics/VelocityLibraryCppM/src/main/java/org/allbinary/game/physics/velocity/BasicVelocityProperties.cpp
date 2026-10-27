
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

class BasicVelocityProperties
            : public Object
        , public BasicVelocityInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: BasicDecimal* velocityXBasicDecimal;

    protected: BasicDecimal* velocityYBasicDecimal;

    protected: BasicDecimal* velocityZBasicDecimal;

    private: AxisMathVectorUtil* axisMathVectorUtil = AxisMathVectorUtil::getInstance();

public: BasicVelocityProperties(){
this->velocityXBasicDecimal= new BasicDecimal(0);
    
this->velocityYBasicDecimal= new BasicDecimal(0);
    
this->velocityZBasicDecimal= new BasicDecimal(0);
    
}


    public: void zero(){
this->velocityXBasicDecimal->setint(0);
    
this->velocityYBasicDecimal->setint(0);
    
this->velocityZBasicDecimal->setint(0);
    
}


    public: BasicDecimal* getVelocityXBasicDecimalP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->velocityXBasicDecimal;
    
}


    public: BasicDecimal* getVelocityYBasicDecimalP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->velocityYBasicDecimal;
    
}


    public: BasicDecimal* getVelocityZBasicDecimalP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->velocityZBasicDecimal;
    
}


    protected: DirectionUtil* directionUtil = DirectionUtil::getInstance();

    public: void setVelocityWithBigDecimalAndDirection(BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection){

    Angle* angle = this->directionUtil->getAngle(direction);;
    

    Angle* otherAngle = this->directionUtil->getAngle(otherDirection);;
    
this->setVelocityWithBigDecimal(magnitudeBasicDecimal, angle, otherAngle);
    
}


    public: void setVelocityWithDirection(int64_t magnitude, Direction* direction, Direction* otherDirection){

    Angle* angle = this->directionUtil->getAngle(direction);;
    

    Angle* otherAngle = this->directionUtil->getAngle(otherDirection);;
    
this->setVelocity(magnitude, angle, otherAngle);
    
}


    public: void addVelocityWithBigDecimalAndDirection(BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection){

    Angle* angle = this->directionUtil->getAngle(direction);;
    

    Angle* otherAngle = this->directionUtil->getAngle(otherDirection);;
    
this->addVelocityWithBigDecimal(magnitudeBasicDecimal, angle, otherAngle);
    
}


    public: void addVelocityWithDirection(int64_t magnitude, Direction* direction, Direction* otherDirection){

    Angle* angle = this->directionUtil->getAngle(direction);;
    

    Angle* otherAngle = this->directionUtil->getAngle(otherDirection);;
    
this->addVelocity(magnitude, angle, otherAngle);
    
}


    public: void setVelocityWithBigDecimal(BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle){

    int64_t magnitude = magnitudeBasicDecimal->getUnscaled();;
    
this->setVelocity(magnitude, angle, otherAngle);
    
}


    public: void addVelocityWithBigDecimal(BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle){

    int64_t magnitude = magnitudeBasicDecimal->getUnscaled();;
    
this->addVelocity(magnitude, angle, otherAngle);
    
}


    public: void setVelocity(int64_t magnitude, Angle* angle, Angle* otherAngle){
this->setVelocityi(magnitude, static_cast<int32_t>(angle->getValue()), static_cast<int32_t>(otherAngle->getValue()));
    
}


    public: void addVelocity(int64_t magnitude, Angle* angle, Angle* otherAngle){
this->addVelocityi(magnitude, static_cast<int32_t>(angle->getValue()), static_cast<int32_t>(otherAngle->getValue()));
    
}


    public: void setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle){

    int64_t xVector = (this->axisMathVectorUtil->calculateX(magnitude, angle) /this->velocityXBasicDecimal->getScaledFactorValue());;
    

    int64_t yVector = (this->axisMathVectorUtil->calculateY(magnitude, angle) /this->velocityYBasicDecimal->getScaledFactorValue());;
    

    int64_t zVector = (this->axisMathVectorUtil->calculateZ(magnitude, otherAngle) /this->velocityZBasicDecimal->getScaledFactorValue());;
    
this->velocityXBasicDecimal->setlong(xVector);
    
this->velocityYBasicDecimal->setlong(yVector);
    
this->velocityZBasicDecimal->setlong(zVector);
    
}


    public: void addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle){

    int64_t xVector = (this->axisMathVectorUtil->calculateX(magnitude, angle) /this->velocityXBasicDecimal->getScaledFactorValue());;
    

    int64_t yVector = (this->axisMathVectorUtil->calculateY(magnitude, angle) /this->velocityYBasicDecimal->getScaledFactorValue());;
    

    int64_t zVector = (this->axisMathVectorUtil->calculateZ(magnitude, otherAngle) /this->velocityZBasicDecimal->getScaledFactorValue());;
    
this->velocityXBasicDecimal->addlong(xVector);
    
this->velocityYBasicDecimal->addlong(yVector);
    
this->velocityZBasicDecimal->addlong(zVector);
    
}


    public: std::string toString(){

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


};

            

