
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H

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

 constructor (int32_t playerId);

    public int32_t getPlayerId();

    public CustomGPoint getCustomGPoint();

    public int32_t getRz();

    public setRz(int32_t rz);

    public int32_t getRightTrigger();

    public setRightTrigger(int32_t rightTrigger);

    public int32_t getLeftTrigger();

    public setLeftTrigger(int32_t leftTrigger);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H
