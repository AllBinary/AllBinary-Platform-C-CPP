
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
        



            #include <vector>
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorBaseRotationAnimation.h"
#include "AnimationBehavior.h"

class VectorRotationAnimation: public VectorBaseRotationAnimation {

public: VectorRotationAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, AnimationBehavior animationBehavior){
            super(AngleInfo::getInstance((AngleFactory::getInstance().TOTAL_ANGLE /currentPoints.size())), currentPoints, basicColor, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleInfo.adjustAngle(this->getFrame());
    
}


    public: void setFrameByDirection(Direction direction){

    Angle angle = this->directionUtil.getFrameAngle(direction);;
    
this->adjustFrameToAngle(angle);
    
}


    public: void setFrameToAngle(Angle angle){
this->adjustFrameToAngle(angle);
    
}


    public: void setFrame(int32_t index){
super.setFrame(index);
    
this->angleInfo.adjustAngle(this->getFrame());
    
}


    public: void adjustFrame(int16_t newAngle){
this->setFrame(this->frameUtil.getFrameForAngle(newAngle, static_cast<int32_t>(this->angleInfo.getAngleIncrementInfo().getAngleIncrement())));
    
}


    public: void adjustFrameToAngle(Angle newAngle){
this->adjustFrame(newAngle.getValue());
    
}


};

            

