
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AnalogLocationInput
            : public Object
         {

    public: static const AnalogLocationInput NULL_ANALOG_LOCATION_INPUT = AnalogLocationInput( -1);

    private: int32_t playerId;

    private: CustomGPoint customGPoint;

    private: int32_t rz= 0;

    private: int32_t rightTrigger= 0;

    private: int32_t leftTrigger= 0;

: AnalogLocationInput(int32_t playerId){
this->playerId= playerId;
    
this->customGPoint= CustomGPoint(0, 0, 0);
    
}


    public: int32_t getPlayerId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playerId;
    
}


    public: CustomGPoint getCustomGPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->customGPoint;
    
}


    public: int32_t getRz(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rz;
    
}


    public: void setRz(int32_t rz){
this->rz= rz;
    
}


    public: int32_t getRightTrigger(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rightTrigger;
    
}


    public: void setRightTrigger(int32_t rightTrigger){
this->rightTrigger= rightTrigger;
    
}


    public: int32_t getLeftTrigger(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->leftTrigger;
    
}


    public: void setLeftTrigger(int32_t leftTrigger){
this->leftTrigger= leftTrigger;
    
}


};

            

