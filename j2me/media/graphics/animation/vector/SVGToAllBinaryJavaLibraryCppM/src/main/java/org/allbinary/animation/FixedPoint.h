
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H
        #define ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FixedPoint
            : public Object
         {

    private: static FixedPoint* instance() { static std::unique_ptr<FixedPoint> value(new FixedPoint()); return value.get(); }

    public: static FixedPoint* getInstance();

    public: const int32_t ONE = 1<<16;

    public: int32_t toFixed(double val);

    public: int32_t toFixed(float val);

    public: int32_t mul(int32_t a, int32_t b);

    public: int32_t div(int32_t a, int32_t b);

    public: int32_t toInt(int32_t fixed);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_FIXEDPOINT_H
