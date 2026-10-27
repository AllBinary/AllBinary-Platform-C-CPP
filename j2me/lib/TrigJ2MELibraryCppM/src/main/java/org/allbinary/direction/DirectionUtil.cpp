
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/direction/Direction.h"

class DirectionUtil
            : public Object
         {

    private: static DirectionUtil* instance() { static std::unique_ptr<DirectionUtil> value(new DirectionUtil()); return value.get(); }

    public: static DirectionUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DirectionUtil::instance();
    
}


    private: std::vector<Angle*> directionArray = std::vector<Angle*>(10);

    private: std::vector<Angle*> directionArray2 = std::vector<Angle*>(10);

private: DirectionUtil(){

    AngleFactory* angleFactory = AngleFactory::getInstance();;
    

    DirectionFactory* directionFactory = DirectionFactory::getInstance();;
    
this->directionArray[directionFactory->LEFT.getValue()]= angleFactory->LEFT;
    
this->directionArray[directionFactory->RIGHT.getValue()]= angleFactory->RIGHT;
    
this->directionArray[directionFactory->UP.getValue()]= angleFactory->UP;
    
this->directionArray[directionFactory->DOWN.getValue()]= angleFactory->DOWN;
    
this->directionArray2[directionFactory->LEFT.getValue()]= angleFactory->LEFT;
    
this->directionArray2[directionFactory->RIGHT.getValue()]= angleFactory->RIGHT;
    
this->directionArray2[directionFactory->UP.getValue()]= angleFactory->UP;
    
this->directionArray2[directionFactory->DOWN.getValue()]= angleFactory->DOWN;
    
}


    public: Angle* getAngle(Direction* direction){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directionArray2[direction->getValue()];
    
}


    public: Angle* getFrameAngle(Direction* direction){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directionArray[direction->getValue()];
    
}


};

            

