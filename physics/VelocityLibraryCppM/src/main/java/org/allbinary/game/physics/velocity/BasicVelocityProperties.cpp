
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
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicVelocityInterface.h"

class BasicVelocityProperties
            : public Object
        : public BasicVelocityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const velocityXBasicDecimal: BasicDecimal;

    const velocityYBasicDecimal: BasicDecimal;

    const velocityZBasicDecimal: BasicDecimal;

    private: const axisMathVectorUtil: AxisMathVectorUtil = AxisMathVectorUtil.getInstance()!;

public constructor (){

            super();
        this.velocityXBasicDecimal= new BasicDecimal(0);
    
this.velocityYBasicDecimal= new BasicDecimal(0);
    
this.velocityZBasicDecimal= new BasicDecimal(0);
    
}


    public zero(){
this.velocityXBasicDecimal!.setint(0);
    
this.velocityYBasicDecimal!.setint(0);
    
this.velocityZBasicDecimal!.setint(0);
    
}


    public BasicDecimal getVelocityXBasicDecimalP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.velocityXBasicDecimal;
    
}


    public BasicDecimal getVelocityYBasicDecimalP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.velocityYBasicDecimal;
    
}


    public BasicDecimal getVelocityZBasicDecimalP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.velocityZBasicDecimal;
    
}


    const directionUtil: DirectionUtil = DirectionUtil.getInstance()!;

    public setVelocityWithBigDecimalAndDirection(BasicDecimal magnitudeBasicDecimal, Direction direction, Direction otherDirection){

    angle: Angle = this.directionUtil!.getAngle(direction)!;;
    

    otherAngle: Angle = this.directionUtil!.getAngle(otherDirection)!;;
    
this.setVelocityWithBigDecimal(magnitudeBasicDecimal, angle, otherAngle);
    
}


    public setVelocityWithDirection(int64_t magnitude, Direction direction, Direction otherDirection){

    angle: Angle = this.directionUtil!.getAngle(direction)!;;
    

    otherAngle: Angle = this.directionUtil!.getAngle(otherDirection)!;;
    
this.setVelocity(magnitude, angle, otherAngle);
    
}


    public addVelocityWithBigDecimalAndDirection(BasicDecimal magnitudeBasicDecimal, Direction direction, Direction otherDirection){

    angle: Angle = this.directionUtil!.getAngle(direction)!;;
    

    otherAngle: Angle = this.directionUtil!.getAngle(otherDirection)!;;
    
this.addVelocityWithBigDecimal(magnitudeBasicDecimal, angle, otherAngle);
    
}


    public addVelocityWithDirection(int64_t magnitude, Direction direction, Direction otherDirection){

    angle: Angle = this.directionUtil!.getAngle(direction)!;;
    

    otherAngle: Angle = this.directionUtil!.getAngle(otherDirection)!;;
    
this.addVelocity(magnitude, angle, otherAngle);
    
}


    public setVelocityWithBigDecimal(BasicDecimal magnitudeBasicDecimal, Angle angle, Angle otherAngle){

    magnitude: int64_t = magnitudeBasicDecimal!.getUnscaled()!;;
    
this.setVelocity(magnitude, angle, otherAngle);
    
}


    public addVelocityWithBigDecimal(BasicDecimal magnitudeBasicDecimal, Angle angle, Angle otherAngle){

    magnitude: int64_t = magnitudeBasicDecimal!.getUnscaled()!;;
    
this.addVelocity(magnitude, angle, otherAngle);
    
}


    public setVelocity(int64_t magnitude, Angle angle, Angle otherAngle){
this.setVelocityi(magnitude, static_cast<int32_t>(angle.getValue()), static_cast<int32_t>(otherAngle!.getValue()));
    
}


    public addVelocity(int64_t magnitude, Angle angle, Angle otherAngle){
this.addVelocityi(magnitude, static_cast<int32_t>(angle.getValue()), static_cast<int32_t>(otherAngle!.getValue()));
    
}


    public setVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle){

    xVector: int64_t = (this.axisMathVectorUtil!.calculateX(magnitude, angle) /this.velocityXBasicDecimal!.getScaledFactorValue());;
    

    yVector: int64_t = (this.axisMathVectorUtil!.calculateY(magnitude, angle) /this.velocityYBasicDecimal!.getScaledFactorValue());;
    

    zVector: int64_t = (this.axisMathVectorUtil!.calculateZ(magnitude, otherAngle) /this.velocityZBasicDecimal!.getScaledFactorValue());;
    
this.velocityXBasicDecimal!.setlong(xVector);
    
this.velocityYBasicDecimal!.setlong(yVector);
    
this.velocityZBasicDecimal!.setlong(zVector);
    
}


    public addVelocityi(int64_t magnitude, int32_t angle, int32_t otherAngle){

    xVector: int64_t = (this.axisMathVectorUtil!.calculateX(magnitude, angle) /this.velocityXBasicDecimal!.getScaledFactorValue());;
    

    yVector: int64_t = (this.axisMathVectorUtil!.calculateY(magnitude, angle) /this.velocityYBasicDecimal!.getScaledFactorValue());;
    

    zVector: int64_t = (this.axisMathVectorUtil!.calculateZ(magnitude, otherAngle) /this.velocityZBasicDecimal!.getScaledFactorValue());;
    
this.velocityXBasicDecimal!.addlong(xVector);
    
this.velocityYBasicDecimal!.addlong(yVector);
    
this.velocityZBasicDecimal!.addlong(zVector);
    
}


    public string toString(){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    positionStrings: PositionStrings = PositionStrings.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    
stringBuffer!.append("Velocity ");
    
stringBuffer!.append(positionStrings!.X_LABEL);
    
stringBuffer!.append(stringUtil!.toString(this.velocityXBasicDecimal));
    
stringBuffer!.append(commonSeps!.SPACE);
    
stringBuffer!.append(positionStrings!.Y_LABEL);
    
stringBuffer!.append(stringUtil!.toString(this.velocityYBasicDecimal));
    
stringBuffer!.append(commonSeps!.SPACE);
    
stringBuffer!.append(positionStrings!.Z_LABEL);
    
stringBuffer!.append(stringUtil!.toString(this.velocityZBasicDecimal));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

