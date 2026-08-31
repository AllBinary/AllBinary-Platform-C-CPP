
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
        

    public static const NULL_ANALOG_LOCATION_INPUT: AnalogLocationInput = new AnalogLocationInput( -1);

    private: const playerId: int32_t;

    private: const customGPoint: CustomGPoint;

    private: rz: int32_t= 0;

    private: rightTrigger: int32_t= 0;

    private: leftTrigger: int32_t= 0;

 constructor (int32_t playerId){

            super();
        this.playerId= playerId;
    
this.customGPoint= new CustomGPoint(0, 0, 0);
    
}


    public int32_t getPlayerId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.playerId;
    
}


    public CustomGPoint getCustomGPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.customGPoint;
    
}


    public int32_t getRz(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rz;
    
}


    public setRz(int32_t rz){
this.rz= rz;
    
}


    public int32_t getRightTrigger(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rightTrigger;
    
}


    public setRightTrigger(int32_t rightTrigger){
this.rightTrigger= rightTrigger;
    
}


    public int32_t getLeftTrigger(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.leftTrigger;
    
}


    public setLeftTrigger(int32_t leftTrigger){
this.leftTrigger= leftTrigger;
    
}


};

            

