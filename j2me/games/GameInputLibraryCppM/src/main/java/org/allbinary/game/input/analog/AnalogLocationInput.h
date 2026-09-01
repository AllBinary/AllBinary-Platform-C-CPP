
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

    public: static const AnalogLocationInput NULL_ANALOG_LOCATION_INPUT = AnalogLocationInput( -1);

    private: int32_t playerId;

    private: CustomGPoint customGPoint;

    private: int32_t rz= 0;

    private: int32_t rightTrigger= 0;

    private: int32_t leftTrigger= 0;

: AnalogLocationInput(int32_t playerId);

    public: int32_t getPlayerId();

    public: CustomGPoint getCustomGPoint();

    public: int32_t getRz();

    public: void setRz(int32_t rz);

    public: int32_t getRightTrigger();

    public: void setRightTrigger(int32_t rightTrigger);

    public: int32_t getLeftTrigger();

    public: void setLeftTrigger(int32_t leftTrigger);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H
